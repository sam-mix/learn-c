.PHONY: clean make all

clean:
	@rm -rf bin

make: 
	@mkdir -p ./bin
	@cc -o ./bin/a.out hello.c
	@cd ./bin && ./a.out
	@git add .
	@git commit -m "x"
	@git push

all: clean make




