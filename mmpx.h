/*
    Copyright 2020 Morgan McGuire & Mara Gagiu.
    Available under the MIT license.
    https://casual-effects.com/research/McGuire2021PixelArt/index.html
*/

#pragma once

#include <stdint.h>


void mmpx_scale2x(const uint32_t* srcBuffer, uint32_t* dst, uint32_t srcWidth, uint32_t srcHeight);
