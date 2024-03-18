
#include <iostream>

#include "func.h"
#include "my_class.h"

#ifndef BUILD_WASM
int main(void) {
  std::cout << "main called" << std::endl;
  std::cout << "msg:" << get_msg() << std::endl;
  int n = func();
  std::cout << "func() returned: " << n << std::endl;
  n = func();
  std::cout << "func() returned: " << n << std::endl;
  std::cout << "main finish" << std::endl;
  return 0;
}
#endif
