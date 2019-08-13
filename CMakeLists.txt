##################################
# Project top CMakeLists.txt file
# author: 	jiyingliang
# email : 	jiyingliang369@126.com
# date  :	2019.6.14
# Modify:	
##################################
PROJECT(PLUGIN_EXAMPLE)
cmake_minimum_required(VERSION 3.0)
add_compile_options(-std=c++11)
include_directories(
../AutoDJIPilot/AutoPilot/inc/
./inc/
../AutoDJIPilot/lib/Onboard-SDK/osdk-core/api/inc/
../AutoDJIPilot/lib/Onboard-SDK/osdk-core/protocol/inc/
../AutoDJIPilot/lib/Onboard-SDK/osdk-core/hal/inc/
../AutoDJIPilot/lib/Onboard-SDK/osdk-core/platform/default/inc
../AutoDJIPilot/lib/Onboard-SDK/osdk-core/platform/linux/inc/
../AutoDJIPilot/lib/Onboard-SDK/osdk-core/utility/inc/
../AutoDJIPilot/lib/Onboard-SDK/osdk-core/advanced-sensing-2.2.0/inc/
)
set(PLUGIN_SRC_LISTS 
./src/PayloadPluginExample.cpp
)

add_library(${PROJECT_NAME} SHARED ${PLUGIN_SRC_LISTS})
