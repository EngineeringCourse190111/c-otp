set(Test_SRCS birthday_unittest.cc authentication_service_unittest.cc fff.h)

add_executable(c-otp-test ${Test_SRCS})
target_link_libraries(c-otp-test gtest gtest_main core)


