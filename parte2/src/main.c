#ifndef _GNU_SOURCE
#define _GNU_SOURCE
#endif
#ifdef CWDEBUG
	#include <libcwd/sys.h>
	#include <libcwd/debug.h>
#endif
#include <stdio.h>
#include <stdlib.h>
#include "milib.h"
#include <time.h>

float main() {
	#ifdef CWDEBUG
		Debug( dc::notice.on() );
		Debug( libcw_do.on() );
 	#endif
	srand(time(NULL));
	#ifdef CWDEBUG
		Dout(dc::notice, "Assign to a a random value");
	#endif
	float a=rand()%1000;
	#ifdef CWDEBUG
		Dout(dc::notice, "Assign to b a random value");
	#endif
	float b=rand()%1000;
	float c;
	
	
	printf("a=%f\n",a);	
	printf("b=%f\n",b);	
	#ifdef CWDEBUG
		Dout(dc::notice, "Assign to c = a + b");
	#endif
	c=suma(a,b);
	printf("a+b=%f\n", c);
	#ifdef CWDEBUG
		Dout(dc::notice, "Assign to c = a - b");
	#endif
	c=resta(a,b);
	printf("a-b=%f\n", c);
	#ifdef CWDEBUG
		Dout(dc::notice, "Assign to c = a * b");
	#endif
	c=multiplicacion(a,b);
	printf("a*b=%f\n", c);
	#ifdef CWDEBUG
		Dout(dc::notice, "Assign to c = a / b");
	#endif
	c=division(a,b);
	printf("a/b=%f\n", c);

	float d;
	d=c;
	squareroot(&d);
	printf("sqrt(c)=%f\n",d);
	d=c;
	naturallogarithm(&d);
	printf("log(c)=%f\n",d);
	d=c;
	sine(&d);
	printf("sin(c)=%f\n",d);
	d=c;
	cosine(&d);
	printf("cos(c)=%f\n",d);
	d=c;
	tangent(&d);
	printf("tan(c)=%f\n",d);
	return 0;
}
