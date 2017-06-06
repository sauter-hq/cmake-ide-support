cmake_minimum_required(VERSION 3.7.2)

project(some-c-lib VERSION "0.0.10")

add_library(some-c-lib 
  src/extra.c
  src/mult_div.c
  src/sum_minus.c
)

target_include_directories(some-c-lib PRIVATE 
  include/
)

include(../add_ide_support.cmake)
target_add_ide_support(some-c-lib)
