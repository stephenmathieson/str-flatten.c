
test: test.c src/*.c
	$(CC) -std=c99 $^ -o $@ -Isrc
	./test

.PHONY: test
