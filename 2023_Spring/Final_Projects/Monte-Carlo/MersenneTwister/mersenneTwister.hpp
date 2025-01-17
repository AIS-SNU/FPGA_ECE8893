//Pseudo Random Number Generator - Mersenne Twister 

#include<stdio.h>
#include<math.h>
// #include <ap_fixed.h>
/* Period parameters */  
#define N 624       //Size of the array (# of words) to store the state of the generator 
#define M 397
#define MATRIX_A 0x9908b0df   /* constant vector a */
#define UPPER_MASK 0x80000000 /* most significant w-r bits */
#define LOWER_MASK 0x7fffffff /* least significant r bits */
// #typedef ap_fixed<16,3> fm_t;
#define NUM 1000
/* Tempering parameters */   
#define TEMPERING_MASK_B 0x9d2c5680
#define TEMPERING_MASK_C 0xefc60000
#define TEMPERING_SHIFT_U(y)  (y >> 11)
#define TEMPERING_SHIFT_S(y)  (y << 7)
#define TEMPERING_SHIFT_T(y)  (y << 15)
#define TEMPERING_SHIFT_L(y)  (y >> 18)
// typedef ap_fixed<16,3> fm_t;
static unsigned long mt[N]; /* the array for the state vector  */
static int mti=N+1; /* mti==N+1 means mt[N] is not initialized */

void sgenrand(unsigned long);
double genrand(); 
void randomGen(
    // int seed,
    double out[NUM] 
);