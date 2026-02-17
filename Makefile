all:
	cc -S one.c
	c++ -S two.cpp
	cc -c *.s
	c++ *.o -o mix

clean:
	rm -f *.o
	rm -f *.s

fclean: clean
	rm -f mix