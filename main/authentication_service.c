#include <stdlib.h>
#include <string.h>
#include "authentication_service.h"
#include "profile_dao.h"
#include "rsa_token_dao.h"
#include <stdio.h>
#include <assert.h>

#define MAX_PASSWORD_LEN 60

bool isValid(const char *userName, const char *password) {
    assert(userName);
    assert(password);
    char * basePassword = getPassword(userName);

    char randomCode[7];
    if (getRandom(userName, randomCode, sizeof(randomCode))) {
        return false;
    }

    char validPassword[MAX_PASSWORD_LEN];
    assert(MAX_PASSWORD_LEN >= strlen(basePassword) + strlen(randomCode) + 1);
    sprintf(validPassword, "%s%s", basePassword, randomCode);

    int result = strcmp(password, validPassword);

    if (!result) {
        return true;
    } else {
        return false;
    }
}
