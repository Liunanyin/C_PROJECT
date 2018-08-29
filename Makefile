# /* ************************************ */
# /*                                      */
# /* Makefile                             */
# /*                                      */
# /* Created by LIUNAN YIN on 2018/8/29.  */
# /*                                      */
# /* ************************************ */

all: libvc.a

libvc.a:
	gcc -c *.c
	ar -cvq libvc.a *.o

clean:
	rm -f *.o