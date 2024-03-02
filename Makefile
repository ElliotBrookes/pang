all: build execute

build:
	gcc src/main.c -lraylib -lGL -lm -lpthread -ldl -lrt -lX11 -o bin/main.out

execute:
	./bin/main.out
