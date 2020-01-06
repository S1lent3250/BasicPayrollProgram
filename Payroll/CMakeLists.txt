cmake_minimum_required(VERSION 3.15)
project(Payroll)

set(CMAKE_CXX_STANDARD 14)

add_executable(Payroll main.cpp modules/colors.h modules/utils.h modules/help.h modules/meta.h modules/payroll.h)