add_executable(test_meh_app test_meh.c)
 
target_link_libraries(test_meh_app unity)
 
add_test(test_meh test_meh_app)