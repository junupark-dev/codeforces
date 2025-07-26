make: main.cpp
	g++ -g -std=c++20 main.cpp
test: make
	./a.out < input > result
	diff result output
debug: make
	cat mygdbinit > .gdbinit
	gdb ./a.out
clean: ./a.out
	rm -rf ./a.out
