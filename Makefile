
test: test.c src/str-flatten.c
	$(CC) -std=c99 $^ -o $@
	./test

.PHONY: test
