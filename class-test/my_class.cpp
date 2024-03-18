#include "my_class.h"

#include <iostream>

#ifdef __cplusplus
extern "C" {
#endif

static char _msg[1024];

char* EMSCRIPTEN_KEEPALIVE get_msg(void) { return _msg; }

MyClass::MyClass(int n) : n_(n) {
  snprintf(_msg, sizeof(_msg), "MyClass constructor called");
#ifndef BUILD_WASM
  std::cout << "MyClass constructor called" << std::endl;
#endif
}

MyClass::~MyClass() {
#ifndef BUILD_WASM
  std::cout << "MyClass destructor called" << std::endl;
#endif
}

int MyClass::check(void) { return n_; }

#ifdef __cplusplus
}
#endif
