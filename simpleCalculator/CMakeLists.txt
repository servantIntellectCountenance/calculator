cmake_minimum_required(VERSION 3.19)
project(simpleCalculator LANGUAGES CXX)

find_package(Qt6 6.5 REQUIRED COMPONENTS Core Widgets)

qt_standard_project_setup()

qt_add_executable(simpleCalculator
    WIN32 MACOSX_BUNDLE
    main.cpp
    mainwindow.cpp
    mainwindow.h
    operation.h operation.cpp
    add.h add.cpp
    subtract.h subtract.cpp
    divide.h divide.cpp
    multiply.h multiply.cpp
    abstractFactory.h abstractFactory.cpp
    abstractFactory.h abstractFactory.cpp
)

target_link_libraries(simpleCalculator
    PRIVATE
        Qt::Core
        Qt::Widgets
)

include(GNUInstallDirs)

install(TARGETS simpleCalculator
    BUNDLE  DESTINATION .
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
)

qt_generate_deploy_app_script(
    TARGET simpleCalculator
    OUTPUT_SCRIPT deploy_script
    NO_UNSUPPORTED_PLATFORM_ERROR
)
install(SCRIPT ${deploy_script})
