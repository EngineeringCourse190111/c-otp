set(Main_SRCS birthday.h birthday.c authentication_service.h authentication_service.c profile_dao.h profile_dao.c map.h map.c rsa_token_dao.h rsa_token_dao.c)

add_library(core ${Main_SRCS})
add_executable(c-otp main.c)
target_link_libraries(c-otp core)

