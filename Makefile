NAME=notfetch

default: main.c
	clang main.c -g -std=gnu11 -o $(NAME)

install: release
	install ./notfetch /usr/bin

release: main.c
	clang main.c -O3 -std=gnu11 -o $(NAME)
