#include "ByteTrack/Object.h"

byte_track::Object::Object(const Rect<float> &_rect,
                           const int &_label,
                           const float &_prob,
                           const int &_initial_index) : rect(_rect), label(_label), prob(_prob), initial_index(_initial_index)
{
}