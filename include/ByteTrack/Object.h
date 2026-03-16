#pragma once

#include "ByteTrack/Rect.h"

namespace byte_track
{
struct Object
{
    Rect<float> rect;
    int label;
    float prob;
    int initial_index;

    Object(const Rect<float> &_rect,
           const int &_label,
           const float &_prob,
           const int &_initial_index
            );
};
}