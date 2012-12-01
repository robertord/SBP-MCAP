#ifndef _LIBRERIA_H_
#define _LIBRERIA_H_
#include <config.h>
#ifdef __cplusplus
extern "C" {
#endif

float suma(float,float);
float resta(float,float);
float multiplicacion (float,float);
float division (float,float);

#ifdef __cplusplus
}
#endif

#define squareroot FC_FUNC( squareroot, SQUAREROOT )
void squareroot(float *a);

#define naturallogarithm FC_FUNC( naturallogarithm, NATURALLOGARITHM )
void naturallogarithm(float *a);

#define sine FC_FUNC( sine, SINE )
void sine(float *a);

#define cosine FC_FUNC( cosine, COSINE )
void cosine(float *a);

#define tangent FC_FUNC( tangent, TANGENT )
void tangent(float *a);

#endif
