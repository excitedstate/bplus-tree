file(GLOB BP_TREE_TEST_SRC *.c)

foreach (file ${BP_TREE_TEST_SRC})
    get_filename_component(name ${file} NAME_WE)
    add_executable(${name} ${file})
    target_link_libraries(${name} bp_tree)
endforeach (file)
