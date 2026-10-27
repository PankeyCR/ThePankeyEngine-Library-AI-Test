cmake_minimum_required(VERSION 3.15)

project(ThePankeyEngine_Library_AI_Test)

if(NOT TARGET ThePankeyEngine_Library_AI_Test)

    add_library(ThePankeyEngine_Library_AI_Test INTERFACE)

    target_include_directories(
        ThePankeyEngine_Library_AI_Test
          INTERFACE
            ${CMAKE_CURRENT_SOURCE_DIR}
    )

endif()
