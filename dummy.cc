#include <node.h>
#include <nan.h>

using namespace v8;

void init(Handle<Object> exports) { }
NODE_MODULE(binding, init)
