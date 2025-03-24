CXX = clang++
EXE = prog
SOURCES = prog.cc cjson/cJSON.cc
CFLAGS = -fsanitize=address -ggdb3 -I.

.PHONY: all
all:
	$(CXX) -o $(EXE) $(SOURCES) $(CFLAGS) 

.PHONY: clean
clean:
	rm -rf $(EXE) $(EXE).dSYM
