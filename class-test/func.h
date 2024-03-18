#pragma once

#ifdef BUILD_WASM
#include <emscripten/emscripten.h>
#else
#define EMSCRIPTEN_KEEPALIVE
#endif

#ifdef __cplusplus
extern "C" {
#endif

int EMSCRIPTEN_KEEPALIVE func(void);

#ifdef __cplusplus
}
#endif
