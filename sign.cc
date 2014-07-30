






#include "head.h"


#include <node.h>
#include <v8.h>

using namespace v8;




Handle<Value> TEST(const Arguments& args) {
  HandleScope scope;
  int ret = test();
  return scope.Close(Integer::New(ret));
}

void init(Handle<Object> target) {
  NODE_SET_METHOD(target, "test", TEST);
}

NODE_MODULE(sign, init);




