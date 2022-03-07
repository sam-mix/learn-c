.PHONY: clean
clean:
	@rm -rf bin

.PHONY: make
make: clean
	@cc -o /bin/a.out hello.c

.PHONY: all
all: clean

