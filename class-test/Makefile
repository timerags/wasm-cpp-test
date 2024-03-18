


EMCXX = em++
EMCXX_FLAGS = --no-entry -O3 -DBUILD_WASM=1

SRCS = my_class.cpp func.cpp test1.cpp
SRCS_W = my_class.cpp func.cpp

all: test1 test1.wasm

test1: $(SRCS)
	$(CXX) $(SRCS) -o $@

test1.wasm: $(SRCS_W)
	$(EMCXX) $(EMCXX_FLAGS) $(SRCS_W) -o $@


clean:
	rm -rf *.o test1 test1.wasm
