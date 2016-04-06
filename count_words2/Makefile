VPATH = src include
CFLAGS = -I include

count_words: counter.o lexer.o -lfl
count_words.o: counter.h
counter.o: counter.h lexer.h
lexer.o: lexer.h

.PHONY: clean
clean:
	rm *.o count_words
