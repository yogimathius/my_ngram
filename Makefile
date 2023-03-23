ngram: my_ngram.c ngram_func.c
	gcc -o my_ngram my_ngram.c ngram_func.c -I.

clean:
	rm -f *.o

fclean: clean
	rm -f my_ngram

re: fclean all