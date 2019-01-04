#include "gtest/gtest.h"
extern "C"
{
#include "../main/birthday.h"
}

namespace {

    TEST(Birthday, NotABirthday) {
        ASSERT_EQ(false, isBirthday());
    }

    TEST(Birthday, IsABirthday) {
        ASSERT_EQ(true, isBirthday());
    }

}