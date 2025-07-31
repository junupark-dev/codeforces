OS := $(shell uname)
ifeq ($(OS), Linux)
make: main.cpp
	g++ -g -std=c++20 main.cpp
test: make
	./a.out < input > result
	diff result output
debug: make
	cat gdbinit > .gdbinit
	gdb ./a.out
clean:
	rm -rf ./a.out
endif
ifeq ($(OS), Darwin)
make: main.cpp
	g++ -g -std=c++20 main.cpp
test: make
	./a.out < input > result
	diff result output
debug: make
	cat lldbinit > .lldbinit
	lldb --local-lldbinit
clean:
	rm -rf ./a.out
endif
