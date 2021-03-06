#include "nan_public.h"

#include <node.h>
#include "core/glob_var.h"
#include "core/utils.h"

using namespace std;
using namespace v8;
using namespace node;

NAN_METHOD(has_valid_area){
	NanScope();
	NanReturnValue(NanNew<Number>(valid_areas.num_area));
}

NAN_METHOD(has_invalid_area){
  NanScope();
  NanReturnValue(NanNew<Number>(invalid_areas.num_area));
}

NAN_METHOD(has_danger_area)
{
  NanScope();
  NanReturnValue(NanNew<Number>(danger_areas.num_area));
}

NAN_METHOD(is_obj_detected)
{
  NanScope();
  NanReturnValue(NanNew<Number>(objDetected));
}

NAN_METHOD(setIsMovingForward)
{
  isMovingForward = (args[0]->Uint32Value() > 0) ? true : false;
}


// NAN_METHOD(setIntendPos)
// {
//   NanScope();

//   intend_pos._x = args[0]->Uint32Value();
//   intend_pos._y = args[1]->Uint32Value();
//   intend_pos._z = args[2]->Uint32Value();

//   NanReturnUndefined();
// }

// NAN_METHOD(getTargetPos)
// {
//   NanScope();

//   Local<Object> DICT = NanNew<Object>();
//   DICT->Set(NanNew<String>("x"), NanNew<Number>(target_pos._x));
//   DICT->Set(NanNew<String>("y"), NanNew<Number>(target_pos._y));
//   DICT->Set(NanNew<String>("z"), NanNew<Number>(target_pos._z));

//   // Local<Array> ARRAY  = NanNew<Array>(3);
//   // ARRAY->Set(0, NanNew<Number>(target_pos._x));
//   // ARRAY->Set(1, NanNew<Number>(target_pos._y));
//   // ARRAY->Set(2, NanNew<Number>(target_pos._z));

//   NanReturnValue(DICT);
// }