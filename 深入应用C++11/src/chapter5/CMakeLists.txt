file(GLOB mains "./cl*.cpp")
foreach(mainfile IN LISTS mains)
    # Get file name without directory
    get_filename_component(mainname ${mainfile} NAME_WE)
    MESSAGE( STATUS  "mainname = ${mainname}")
    add_executable(${mainname} ${mainfile})
endforeach()