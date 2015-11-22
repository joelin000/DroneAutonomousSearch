#ifndef nan_public
#define nan_public

#include <nan.h>

using namespace v8;

// NAN_METHOD(getValidArea);
NAN_METHOD(has_valid_area);
NAN_METHOD(has_invalid_area);
NAN_METHOD(has_danger_area);
NAN_METHOD(has_target_obj_found);
NAN_METHOD(setIntendPos);
NAN_METHOD(getTargetPos);
NAN_METHOD(setIsMovingForward);

#endif