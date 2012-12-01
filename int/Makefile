# AUTHOR: Roberto Rosende Dopazo

export LD_LIBRARY_PATH=.
CC=g++
CFLAGSDEBUG=-g -DCWDEBUG
CFLAGS=-g -O3
AR=ar
ARFLAGS=cr

STATIC=0
ifeq ($(STATIC),0)
	STATICFLAGS=-static
else
	STATICFLAGS=-shared -W1.-SONAME,
endif


all: main_debug main_production

%.o : %.c
	$(CC) -c $(CFLAGS) $< -o $@

libmi: milib1.o milib2.o 
	$(AR) $(ARFLAGS) $@.a milib1.o milib2.o

main_debug.o: main.c
	$(CC) -c $(CFLAGSDEBUG) $< -o $@ -L/usr/lib -lcwd

main_production.o: main.c
	$(CC) -c $(CFLAGS) $< -o $@

main_debug: libmi main_debug.o 
	$(CC) $(CFLAGSDEBUG)  main_debug.o -o main_debug -L. -lmi -lcwd

main_production: libmi main_production.o 
	$(CC) $(CFLAGS) main_production.o -o main_production -L. -lmi

clean: 
	-@rm *.o
	-@rm libmi.a
	-@rm main_debug 
	-@rm main_production
