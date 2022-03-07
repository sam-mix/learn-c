.PHONY: clean
clean:
	@rm -rf bin

.PHONY: make
make: clean
	@mkdir -p ./bin
	@cc -o ./bin/a.out hello.c
	@cd ./bin && ./a.out

.PHONY: all
all: clean make

