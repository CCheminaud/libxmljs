#ifndef __attribute_h__
#define __attribute_h__

#include "libxmljs.h"
#include "node.h"

namespace libxmljs {

class Attribute : public Node {
public:
  Attribute(xmlNode* node) : Node(node) {}

  static void Initialize(v8::Handle<v8::Object> target);
  static v8::Persistent<v8::FunctionTemplate> constructor_template;

protected:
  static v8::Handle<v8::Value> New(const v8::Arguments& args);
  static v8::Handle<v8::Value> Name(const v8::Arguments& args);
  static v8::Handle<v8::Value> Value(const v8::Arguments& args);

  v8::Handle<v8::Value> get_name();
  v8::Handle<v8::Value> get_value();
};

} // namespace libxmljs

#endif // __attribute_h__