cmake_minimum_required(VERSION 3.16)
include($ENV{IDF_PATH}/tools/cmake/project.cmake)
add_definitions(-DCONFIG_C3P_I2C -DCONFIG_C3P_CBOR -DCONFIG_C3P_M2M_SUPPORT -DCONFIG_C3P_IMG_SUPPORT)
#-DCONFIG_C3P_STORAGE
project(chatterbox)
