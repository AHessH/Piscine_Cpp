

ex_01:
	gcc -c ex01/Contact.cpp -o ex01/Contact.o -I.
	gcc -c ex01/main.cpp -o ex01/main.o -I.
	gcc ex01/Contact.o ex01/main.o -I.

clean:
	rm -rf */*.o

fclean:clean
	rm -rf */a.out

re:fclean ex01
