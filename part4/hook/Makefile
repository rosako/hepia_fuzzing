CC = gcc
CFLAGS = -fPIC -shared -ldl -D_GNU_SOURCE
SRC = hook.c
EXE = hook.so


all: $(EXE)

$(EXE): $(SRC)
	$(CC) $(CFLAGS) -o $@ $^


clean:
	rm -rf $(EXE)


