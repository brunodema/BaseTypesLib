set(EXECUTABLES_TO_BE_INSTALLED test_basetypeslib)

# test-BaseTypesLib
add_executable(test_basetypeslib test_basetypeslib.cpp)
target_link_libraries(test_basetypeslib basetypeslib)
add_test(NAME test COMMAND test_basetypeslib)

install(
  TARGETS ${EXECUTABLES_TO_BE_INSTALLED}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  PRIVATE_HEADER DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}
  PUBLIC_HEADER DESTINATION ${CMAKE_INSTALL_INCLUDEDIR})
