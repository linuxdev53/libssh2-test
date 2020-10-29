# CMakeList.txt : CMake project for ProxyServer, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

set (LibSSH2Test libssh2-test)
set (CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)
add_executable (${LibSSH2Test} libssh2-test.c)
target_link_libraries (${LibSSH2Test}
    libssh2.a -lcrypto -lssl
)
