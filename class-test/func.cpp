#include "func.h"

#include <iostream>

#include "my_class.h"

#ifdef __cplusplus
extern "C" {
#endif

/*
 * declaring my_class in global area does not seemd to work in WASM
 */
// MyClass my_class = MyClass(10);
static MyClass my_class = MyClass(10);

int EMSCRIPTEN_KEEPALIVE func(void) {
  // has to be here??
  // static MyClass my_class = MyClass(10);
  return my_class.check();
}

#ifdef __cplusplus
}
#endif
