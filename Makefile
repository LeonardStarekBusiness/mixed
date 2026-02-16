all:
	cc -S one.c
	c++ -S two.cpp
	cc -c *.s
	c++ *.o -o mix

fclean:
	rm -f *.o
	rm -f *.s
	rm -f mix