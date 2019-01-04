#include "gtest/gtest.h"
extern "C"
{
#include "../main/authentication_service.h"
}

namespace {

    TEST(AuthenticationServiceTest, IsValid) {
        ASSERT_TRUE(isValid("joey", "91000000"));
    }

}
