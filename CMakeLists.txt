cmake_minimum_required(VERSION 3.13.4)

project(mmpx
    VERSION 1.0.0
    DESCRIPTION "MMPX - Style-Preserving Pixel Art Magnification"
    HOMEPAGE_URL "https://casual-effects.com/research/McGuire2021PixelArt/index.html"
    LANGUAGES C
)

add_library(mmpx mmpx.c)

target_include_directories(mmpx PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_compile_features(mmpx PRIVATE c_std_99)
