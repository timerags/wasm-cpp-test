#pragma once

#ifdef BUILD_WASM
#include <emscripten/emscripten.h>
#else
#define EMSCRIPTEN_KEEPALIVE
#endif

#ifdef __cplusplus
extern "C" {
#endif

char* EMSCRIPTEN_KEEPALIVE get_msg(void);

class MyClass {
 private:
  int n_;

 public:
  MyClass(int n);
  ~MyClass();
  int check(void);
};

#ifdef __cplusplus
}
#endif
