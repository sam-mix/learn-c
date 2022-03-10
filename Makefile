.PHONY: all clean make 

all: clean build

clean:
	@rm -rf bin

build: 
	@mkdir -p ./bin
	@cc -o ./bin/a.out hello.c
	@cd ./bin && ./a.out
	@git add .
	@git commit -m "x"
	@git push
