#include <stdlib.h>
#include <stdio.h>
#include <time.h>

//#define N 10000000
#define N 250
#define H 10000000
//#define H 52800000
//#define H 59000000//fib 23 (Estatico)
//#define H 1000000000
//#define H 56000000
#define P 1000


//char string[N]= "S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(KK))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K)\0";
//char string[N] = "D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)(KK))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K)\0";
//char string[N] ="S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))(KK))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K)\0";
// Strings de teste
//fatorial
//char string[N] = "S(K(SII))(S(S(KS)K)(K(SII)))(S(K(S(S(S(S(K=)I)(K0))(K1))))(S(K(S(S(K+)I)))(S(S(KS)(S(KK)I))(K(S(S(K-)I)(K1))))))20\0";//fab1 (KSI)
//char string[N] = "S(C(F=I0)1)(D+I(B(Y(ES(FI(F=I0)1)(E(D+)I(FBI(F-I1)))))(F-I1)))20\0";//fab2
//char string[N] = "S(C(F=I0)1)(D*I(B(Y(ES(FI(F=I0)1)(E(D*)I(FBI(F-I1)))))(F-I1)))3\0";//fatorial
//fibonacci
//char string[N] = "S(K(SII))(S(S(KS)K)(K(SII)))(S(K(S(S(S(KI)(S(S(K<)I)(K2)))I)))(S(S(KS)(S(K(S(K+)))(S(S(KS)(S(KK)I))(K(S(S(K-)I)(K2))))))(S(S(KS)(S(KK)I))(K(S(S(K-)I)(K1))))))10\0"; //22fib1 (SKI)
//char string[N] = "S(K(SII))(S(S(KS)K)(K(SII)))(S(K(S(S(S(S(K<)I)(K2))I)))(S(S(KS)(S(K(S(K+)))(S(S(KS)(S(KK)I))(K(S(S(K-)I)(K2))))))(S(S(KS)(S(KK)I))(K(S(S(K-)I)(K1))))))23\0"; //25fib2 (TURNER)
//Listas
//char string[N] = "^2(11)\0";
//char string[N] = "H(G:*3(3)(:*2(2)[]))\0";
//Letra A
char string[N] = "H(G(G(G:*3(8)(:*7(+5(2))(:aaa(:^(/8(4))(+2(1))(:bbb[])))))))\0";
//Letra B
//Criando combinador para map
//char string[N] = "M(S(K(SII))(S(S(KS)K)(K(SII)))(S(K(S(S(S(KI)(S(S(K<)I)(K2)))I)))(S(S(KS)(S(K(S(K+)))(S(S(KS)(S(KK)I))(K(S(S(K-)I)(K2))))))(S(S(KS)(S(KK)I))(K(S(S(K-)I)(K1)))))))(:0(:1(:2(:3(:4(:5(:6(:7(:8(:9(:10[])))))))))))\0";

typedef struct  Celula{
	int tipo;
	char mark;
	struct Celula *fesq;
	struct Celula *fdir;
}Celula;


//Celula heap[H];
Celula *heap;
///      Alocacao de dados
Celula *fl;

/*Estrutura auxiliar para empilhar as celulas
 * */
Celula* pilha[P];
int topo = -1;
int t_eval = -1; //    GAMBIARRA! NÃO MEXER!!!

//						ALOCACAO DADOS

/*Procedimentos para inserir e remover elementos da pilha
 * */
void push(Celula *c){
	//++ vem antes pois o topo come�a em -1
	if(topo < P){
		pilha[++topo] = c;
	}
	else{
		printf("\n##############################\n");
		printf("\n\tPilha cheia\n");
		printf("\n##############################\n");
		exit(0);
	}
}

void pop(){
	topo--;
}

void pop_value(int val){
	topo -= val;
}

/*Procedimento cria um grafo dedicado a free list, gerando uma arvore em pre ordem
 * */
void aloca_freelist(){
	fl = heap;
	Celula *ptr = fl;
	for(int i = 1;i < H;i++){
		ptr->tipo = 0;
		ptr->fesq = NULL;
		ptr->fdir = &heap[i];
		ptr = ptr->fdir;
	}
}

/*Procedimento auxiliar para alocacao de espaco da freelist
 * Retorna o elemento da free list
 * Retorna nulo se a freelist esta vazia
 * */
Celula *aloca_espaco(){
	Celula *retorno;
	retorno = fl;
	if(fl != NULL){
		fl = fl->fdir;
	}
	else{
		printf("\n #############################\n\n\tHeap Cheia!\n\n#############################\n");
		exit(0);
	}

	return retorno;
}

//			 			Checando simbolos

/*Procedimento auxiliar para avaliar o valor de um caracter da
 * string e retornar o n�mero refenente a ele.
 * Este procedimento criar� combinadores e operadores l�gicos aritm�ticos
 * O n�mero ser� utilizado no campo tipo durante a redu��o do grafo
 * Codifica��o de FFF00 a FFFFF
 * */
int cria_tipo_celula(char *valor){

	int retorno = 0;

	switch(*valor){
		case 'K':
			retorno = 0xF0000000;
			break;
		case 'S':
			retorno = 0xF0000001;
			break;
		case 'I':
			retorno = 0xF0000002;
			break;
		case 'B':
			retorno = 0xF0000003;
			break;
		case 'C':
			retorno = 0xF0000004;
			break;
		case 'D':
			retorno = 0xF0000005;
			break;
		case 'E':
			retorno = 0xF0000006;
			break;
		case 'F':
			retorno = 0xF0000007;
			break;
		case '@':
			retorno = 0xF0000008;
			break;
		//Operadores aritmeticos
		case '+':
			retorno = 0xF0000009;
			break;
		case '-':
			retorno = 0xF000000A;
			break;
		case '*':
			retorno = 0xF000000B;
			break;
		case '/':
			retorno = 0xF000000C;
			break;
		// Combinadores l�gicos
		case 'T'://TRUE
			retorno = 0xF000000D;
			break;
		case 'A'://FALSE
			retorno = 0xF000000E;
			break;
		case '>':
			retorno = 0xF0000010;
			break;
		case '<':
			retorno = 0xF0000011;
			break;
		case '='://Igualdade
			retorno = 0xF0000012;
			break;
		case '&'://And logico
			retorno = 0xF0000013;
			break;
		case '|'://Or logico
			retorno = 0xF0000014;
			break;
		//Operador de turner Y
		case'Y':
			retorno = 0xF0000015;
			break;
		//Criando o tipo de celula utilizado para listas
		case ':':
			retorno = 0xF0000016;
			break;
		//O tipo lista vazia [] assumirá o valor 0xF0000017
		case '[':
			retorno = 0xF0000017;
			break;
		//Combinadores que reduzem listas
		case 'G'://Mapeamento para o combinador Tl
			retorno = 0xF0000018;
			break;
		case 'H'://Mapeamento para o combinador Hd
			retorno = 0xF0000019;
			break;
		//Operadores e caracteres adicionados a posteriori
		case 'a'://Mapeamento para a letra a
			retorno = 0xF000001A;
			break;
		case 'b'://Mapeamento para a letra b
			retorno = 0xF000001B;
			break;
		case '^'://Mapeamento para  potencia
			retorno = 0xF000001C;
			break;
		case 'M'://Mapeamento para  funcao MAP
			retorno = 0xF000001D;
		break;
		default:
			retorno = -1;
			break;
	}

	return retorno;
}

//Procedimento auxiliar para retornar o valor de n�mero baseado um caractere lido
int cria_valor_digito(char* valor){
	int retorno = -1;
	switch(*valor){
		case'0':
			retorno = 0;
			break;
		case'1':
			retorno = 1;
			break;
		case'2':
			retorno = 2;
			break;
		case'3':
			retorno = 3;
			break;
		case'4':
			retorno = 4;
			break;
		case'5':
			retorno = 5;
			break;
		case'6':
			retorno = 6;
			break;
		case'7':
			retorno = 7;
			break;
		case'8':
			retorno = 8;
			break;
		case'9':
			retorno = 9;
			break;
	}
	return retorno;
}

/*Procedimento auxiliar para avaliar para acricao do grafo
 * onde o valor de um caracter da string e retornar o n�mero refenente a ele.
 * O n�mero ser� utilizado no campo tipo durante a redu��o do grafo
 * Contando quan d�gito esta sendo computado para a cria��o do valor
 *Se o primeiro item da entrada for menos
 *O n�mero ser� multiplicado por -1 para se obter sua vers�o
 *negativa
 * */
Celula* adiciona_numero(char *entrada,int *contador_digito){
		int mult = 1;
		int cont = *contador_digito;
		if(*entrada == '-'){
			mult = -1;
			entrada++;
			cont++;
		}

		int numero_atual = cria_valor_digito(entrada++);
		int val = cria_valor_digito(entrada);
		while(val >= 0){
			numero_atual = numero_atual * 10;
			int aux      = cria_valor_digito(entrada++);
			numero_atual = numero_atual + aux;
			cont++;
			val = cria_valor_digito(entrada);
		}

		//pega espaco da freelist
		Celula *cel = aloca_espaco();
		cel->tipo = numero_atual * mult;
		cel->fesq = NULL;
		cel->fdir = NULL;
		*contador_digito = cont;
		return cel;
}

/*Procedimento auxiliar para a criacao do grafo, onde
 *cria uma celula do tipo combinador.
 * */
Celula *cria_combinador(char *entrada){
	Celula *combinador;

	combinador = aloca_espaco();
	if(combinador != NULL){
		//combinador->tipo = entrada[0];
		combinador->tipo = cria_tipo_celula(entrada);
		combinador->fdir = NULL;
		combinador->fesq = NULL;
		return combinador;
	}
	else{
		printf("heap cheia!");
		exit(0);
	}
}

/*Procedimento cria uma celula do tipo aplicao com
 * os filhos da direita e da esquerda nulos
 * */
Celula *cria_aplicacao(){
	Celula *aplicacao;
	//aplicacao = malloc(sizeof(Celula));
	//aplicacao = fl.fl_pointer;

	aplicacao = aloca_espaco();
	if(aplicacao != NULL){
		//aplicacao->tipo = '@';
		char ap = '@';
		aplicacao->tipo = cria_tipo_celula(&ap);
		aplicacao->fdir = NULL;
		aplicacao->fesq = NULL;
		return aplicacao;
	}
	else{
		printf("heap cheia!");
		exit(0);
	}
}

/*Procedimento pega um nó adicionado no grafo e empilha os filhos a esquerda
 * caso o filho da esquerda do nó for diferente de nulo
 * */
void empilha_filho_esquerda(Celula *cel){
	Celula *aux = cel;
	while(aux != NULL){
		push(aux);
		aux = aux->fesq;
	}
}

/*Procedimento auxiliar para alocar alocar um espa�o na heap e
 * copiar os dados dcelula desejada para o novo espaco alocado
 * retornando o novo espaco alocado
 * */
Celula* copiar_alocar(Celula *cel){
	Celula *newCel = aloca_espaco();
	newCel->tipo = cel->tipo;
	newCel->fesq = cel->fesq;
	newCel->fdir = cel->fdir;
	return newCel;
}
/*Procedimento auxiliar para contar se a free list
 * tem argumentos suficientes para serem utilizados
 * nas reducoes.
 * */
void contar_argumentos(int cont){
	Celula *aux = fl;
	for(int i = 0; i < cont; i++){
		if(aux){
			aux = aux->fdir;
		}
		else{
			printf("\n####################################\n");
			printf("Nao ha elementos suficientes na freelist\n");
			printf("\n####################################\n");
			exit(0);
		}
	}
}

//							CRIACAO DO GRAFO

//Procedimento que recebe duas variaveis, uma que aponta para
//um array e outra que aponta para um inteiro com a posiao do
//array a ser usada. O procedimento termina quando atinge a
//primeira posiao depois dos parenteses.
void casa_parenteses(char* array1, int* p) {
    int paren = 1;
    int c = *p;
    while (paren != 0) {
        switch (array1[c]) {
            case '(':
                paren++;
                c++;
                break;
            case ')':
                paren--;
                c++;
                break;
            default:
                c++;
        }
    }
    *p = c;
}


/*Procedimento auxiliar para verificar se o caractere avaliado � um
 * combinador, operador ou um n�mero
 * */
Celula* compara_atribui_celula(char *entrada,int is_digito,int *cont_digito){
	Celula *retorno = NULL;
	if(is_digito != -1){
			retorno = cria_combinador(entrada);
	}
	else{
			retorno = adiciona_numero(entrada,cont_digito);
	}
	return retorno;
}

/*Procedimento pega a string de entrada e a partir da mesma cria o grafo
 * fazendo uma busca em ordem de baixo para cima
 * */
Celula* cria_grafo(char *entrada){

	Celula *raiz = NULL;
	while(entrada[0] != '\0'){
		int is_digito = cria_tipo_celula(entrada);
			if(entrada[0] == ')' || entrada[0] == ']' ){
					return raiz;
			}//Antes de criar a lista primeiro verificar se a raiz é nula
			else if(entrada[0] == '('){
				Celula *ap = NULL;
				//Celula *aux = NULL;
				if(raiz != NULL){
					ap = cria_aplicacao();
					//aux = raiz;
					ap->fesq = raiz;
					ap->fdir = cria_grafo(entrada + 1);
				}
				else{
					ap = cria_grafo(entrada + 1);
				}
				int end   = 1;
				casa_parenteses(entrada,&end);
				for(int i = 0; i < end; i++){
					entrada++;
				}
				//Transforma a aplicacao na nova raiz;
				raiz = ap;
			}
			else if(entrada[0]==':'){
				//Contador para marcar onde e o final da lista
				Celula *raiz_lista = cria_combinador(entrada++);
				int cont_lista = 0;

				while(entrada[cont_lista]!= ':' && entrada[cont_lista]!= '['){
					//entrada++;
					cont_lista++;
				}
				//Decrementando para o primeiro abre parênteses antes do
				//Operador de lista
				if(entrada[cont_lista] != '[')
					cont_lista--;
				char *newEntrada = calloc(cont_lista,sizeof(char));

				for(int i=0;i<cont_lista;i++){
					newEntrada[i] = entrada[0];
					entrada++;
				}
				//Pega os caracteres copiados para o novo aray e o fornece como entrada
				//Para subarvore mais a esquerda da lista
				raiz_lista->fesq = cria_grafo(newEntrada);

				if(entrada[0] != '[')
					raiz_lista->fdir = cria_grafo(++entrada);
				else
					raiz_lista->fdir = cria_grafo(entrada++);
				//Jogo de ponteiros para verificacao da raiz
				if(raiz!= NULL){
					Celula *aux= NULL;
					if(raiz->tipo == 0xF0000008){
						if(raiz->fdir!= NULL){
							aux = cria_aplicacao();
							aux->fesq=raiz;
							aux->fdir=raiz_lista;
							raiz = aux;
						}
						else{
							raiz->fdir = raiz_lista;
						}
					}
					else{
						aux = cria_aplicacao();
						aux->fesq = raiz;
						aux->fdir = raiz_lista;
						raiz = aux;
					}
				}
				else{
					raiz=raiz_lista;
				}
				//Zerando cont_lista para que o mesmo seja utilizado na funcao
				//Casa parênteses
				cont_lista=0;
				casa_parenteses(entrada,&cont_lista);
				for(int i = 0; i < cont_lista;i++){
					entrada++;
				}
			}
			else{
				int cont_digito  = 0;
				if(raiz != NULL){
					Celula *aux = NULL;
					if(raiz->tipo == 0xF0000008 ){
						if(raiz->fdir != NULL){
							aux = cria_aplicacao();
							aux->fesq = raiz;
							raiz = aux;
							//aux->fdir = cria_combinador(entrada);
							raiz->fdir = compara_atribui_celula(entrada,is_digito,&cont_digito);
						}
						else{
							//raiz->fdir = cria_combinador(entrada);
							raiz->fdir = compara_atribui_celula(entrada,is_digito,&cont_digito);
						}
					}
					else{
						aux = cria_aplicacao();
						aux->fesq = raiz;
						raiz = aux;
						//raiz->fdir = cria_combinador(entrada);
						raiz->fdir = compara_atribui_celula(entrada,is_digito,&cont_digito);
					}
				}
				else{
					//int cont_digito  = 0;
					raiz = compara_atribui_celula(entrada,is_digito,&cont_digito);
				}
				//entrada++;
				for(int i = 0; i<=cont_digito; i++){
					entrada++;
				}
			}
	}

	return raiz;
}

//						IMPRIMIR GRAFO

/*Procedimento auxiliar para converter o valor inteiro de uma c�lula para caractere
 * */
char converte_celula_caractere(int valor){

	char retorno = '\0';

	switch(valor){
		case 0xF0000000:
			retorno = 'K';
			break;
		case 0xF0000001:
			retorno = 'S';
			break;
		case 0xF0000002:
			retorno = 'I';
			break;
		case 0xF0000003:
			retorno = 'B';
			break;
		case 0xF0000004:
			retorno = 'C';
			break;
		case 0xF0000005:
			retorno = 'D';
			break;
		case 0xF0000006:
			retorno = 'E';
			break;
		case 0xF0000007:
			retorno = 'F';
			break;
		case 0xF0000008:
			retorno = '@';
			break;
		//Operadores aritmeticos
		case 0xF0000009:
			retorno = '+';
			break;
		case 0xF000000A:
			retorno = '-';
			break;
		case 0xF000000B:
			retorno = '*';
			break;
		case 0xF000000C:
			retorno = '/';
			break;
		// Combinadores l�gicos
		case 0xF000000D://TRUE
			retorno = 'T';
			break;
		case 0xF000000E://FALSE
			retorno = 'A';
			break;
		case 0xF0000010:
			retorno = '>';
			break;
		case 0xF0000011:
			retorno = '<';
			break;
		case 0xF0000012://Igualdade
			retorno = '=';
			break;
		case 0xF0000013://And logico
			retorno = '&';
			break;
		case 0xF0000014://Or logico
			retorno = '|';
			break;
		//Operador de turner Y
		case 0xF0000015:
			retorno = 'Y';
			break;
		//Criando o tipo de celula utilizado para listas
		case 0xF0000016:
			retorno = ':';
			break;
		//O tipo lista vazia [] assumirá o valor 0xF0000017
		case 0xF0000017:
			retorno = 'X';
			break;
		//Combinadores que reduzem listas
		case 0xF0000018://Mapeamento para o combinador Tl
			retorno = 'G';
			break;
		case 0xF0000019://Mapeamento para o combinador Hd
			retorno = 'H';
			break;
		//Operadores e caracteres adicionados a posteriori
		case 0xF000001A://Mapeamento para a letra a
			retorno = 'a';
			break;
		case 0xF000001B://Mapeamento para a letra b
			retorno = 'b';
			break;
		case 0xF000001C://Mapeamento para  potencia
			retorno = '^';
			break;
		case 0xF000001D://Mapeamento para  funcao MAP
			retorno = 'M';
		break;
		default:
			printf("%d",valor);
			retorno = ' ';
			break;
	}

	return retorno;
}

/*Procedimento dedicado a impressao do grado no console
 * para verificar se o grafo criado esta correto.
 * */
void imprime_grafo_para_string(Celula *cel){

	if(cel->fesq != NULL){
		imprime_grafo_para_string(cel->fesq);
	}
	else if(cel->tipo == 0xF0000008){
		printf("grafo Errado");
		exit(0);
	}
	if(cel->fdir != NULL){
		if(cel->fdir->tipo  == 0xF0000008){
			printf("(");
			imprime_grafo_para_string(cel->fdir);
			printf(")");
		}
		else{
			imprime_grafo_para_string(cel->fdir);
		}
	}
	else if(cel->tipo == 0xF0000008){
		printf("grafo Errado");
		exit(0);
	}

	if(cel->tipo != 0xF0000008){
		printf("%c",converte_celula_caractere(cel->tipo));
	}
}

void imprime_grafo(Celula *cel){
	//printf("%c",cel->tipo);
	if(cel->fesq != NULL){
		imprime_grafo(cel->fesq);
	}
	printf("%c",cel->tipo);
	if(cel->fdir != NULL){
		imprime_grafo(cel->fdir);
	}
}

/*Procedimento empilha celulas das de a raiz ate o elemento mais externo mais
 * a esquerda
 * */
void empilha_grafo(Celula *grafo){
	Celula *g = grafo;
	while(g != NULL){
		push(g);
		g = g->fesq;
	}
}

//				REDUCOES

/*Procedimento efetua a reducao do combinador K segundo a regra
 * K a b -> A
 * */
void reduz_K(Celula *grafo){

	contar_argumentos(1);
	pop();//Desempilha K

	//Buscando argumentos
	//Celula *a  = topo->dado->fdir;
	Celula *a  = pilha[topo--]->fdir;
	//pop();// Desenpilha a
    pop();// Desempilha b

	Celula *pai = NULL;

	//K a b -> a
	Celula *newA = aloca_espaco();
	newA->tipo = a->tipo;
	newA->fdir = a->fdir;
	newA->fesq = a->fesq;
	//Adicionou verifica��o do pai
	//if(topo != NULL){
	if(topo >= t_eval){
		pai = pilha[topo];
	}

	//Mudou de topo para pai
	//if(topo != NULL){
	if(topo >= t_eval){
		pai->fesq = newA;
		empilha_filho_esquerda(newA);
		//push(newA);
	}
	else{
		grafo->tipo = newA->tipo;
		grafo->fdir = newA->fdir;
		grafo->fesq = newA->fesq;
		if(grafo->fesq){
			empilha_filho_esquerda(grafo);
		}
	}

}

/*Procedimento efetua a reducao do combinador S segundo a regra
 * S a b c -> a c ( b c )
 * */
void reduz_S(Celula *grafo){
	//Buscando argumentos
	contar_argumentos(7);
	pop();//Desempilha S
	//Celula *a = topo->dado->fdir;
	//pop();
	Celula *a = pilha[topo--]->fdir;
	//Celula *b = topo->dado->fdir;
	//pop();
	Celula *b = pilha[topo--]->fdir;
	//Celula *c = topo->dado->fdir;
	//pop();
	Celula *c = pilha[topo--]->fdir;

	Celula *pai = NULL;

	//S a b c -> a c ( b c )
	Celula *newA  = aloca_espaco();
	Celula *newB  = aloca_espaco();
	Celula *newC1 = aloca_espaco();
	Celula *newC2 = aloca_espaco();


	newA->tipo = a->tipo;
	newA->fdir = a->fdir;
	newA->fesq = a->fesq;

	newB->tipo = b->tipo;
	newB->fdir = b->fdir;
	newB->fesq = b->fesq;

	newC1->tipo = c->tipo;
	newC1->fdir = c->fdir;
	newC1->fesq = c->fesq;

	newC2->tipo = c->tipo;
	newC2->fdir = c->fdir;
	newC2->fesq = c->fesq;

	Celula *aplicacaoPai = cria_aplicacao();
	Celula *aplicacaoFesq = cria_aplicacao();
	Celula *aplicacaoFdir = cria_aplicacao();

	aplicacaoPai->fesq = aplicacaoFesq;
	aplicacaoPai->fdir = aplicacaoFdir;

	//if(topo != NULL){
	if(topo >= t_eval){
		//pai = topo->dado;
		pai = pilha[topo];
	}

	push(aplicacaoPai);

	aplicacaoFesq->fesq = newA;
	aplicacaoFesq->fdir = newC1;

	aplicacaoFdir->fesq = newB;
	aplicacaoFdir->fdir = newC2;

	//Empilhando os filhos mais externos mais a esquerda
	empilha_filho_esquerda(aplicacaoFesq);

	if(pai != NULL){
			pai->fesq = aplicacaoPai;
	}
	else{
		grafo->tipo = aplicacaoPai->tipo;
		grafo->fdir = aplicacaoPai->fdir;
		grafo->fesq = aplicacaoPai->fesq;
	}
}


/*Procedimento efetua a reduçao do combinador I no grafo segundo a regra
 *  I a -> a
 * */
void reduz_I(Celula *grafo){
	contar_argumentos(1);
	pop();//Desempilha I

	//Busca argumentos
	//Celula *a = topo->dado->fdir;
	//pop(); //Desempilha a
	Celula *a = pilha[topo--]->fdir;

	Celula *pai = NULL;

	// I a -> a
	Celula *newA = aloca_espaco();

	newA->tipo = a->tipo;
	newA->fdir = a->fdir;
	newA->fesq = a->fesq;

	//if(topo != NULL){
	if(topo >= t_eval){
		//pai = topo->dado;
		pai = pilha[topo];
	}

	//if(topo != NULL){
	if(topo >= t_eval){
		pai->fesq = newA;
		empilha_filho_esquerda(newA);
	}
	else{
		grafo->tipo = newA->tipo;
		grafo->fesq	 = newA->fesq;
		grafo->fdir = newA->fdir;
		if(grafo->fesq){
			empilha_filho_esquerda(grafo);
		}
	}
}

//		CURRY
/*Procedimnto efetua a reducao do combinador de turner D segundo no grafo
 *  a regra:
 * B f g x -> f ( g  x)
 * */
void reduz_B(Celula *grafo){
	contar_argumentos(5);
	pop();//Desempilha B

	//busca argumentos
	//Celula *f = topo->dado->fdir;
	//pop();//desempilha f
	Celula *f = pilha[topo--]->fdir;
	//Celula *g = topo->dado->fdir;
	//pop();//desempilha g
	Celula *g = pilha[topo--]->fdir;
	//Celula *x = topo->dado->fdir;
	//pop();//desempilha x
	Celula *x = pilha[topo--]->fdir;

	//aloca espaco
	Celula *newF  = copiar_alocar(f);
	Celula *newG  = copiar_alocar(g);
	Celula *newX = copiar_alocar(x);

	//B f g x -> f ( g  x)
	Celula *pai   = NULL;
	//if(topo != NULL){
	if(topo >= t_eval){
		//pai = topo->dado;
		pai = pilha[topo];
	}
	Celula *ap_filha2   = cria_aplicacao();
	ap_filha2->fesq = newG;
	ap_filha2->fdir = newX;

	Celula *ap_pai   = cria_aplicacao();
	ap_pai->fesq = newF;
	ap_pai->fdir = ap_filha2;

	empilha_filho_esquerda(ap_pai);

	if(pai != NULL){
		pai->fesq = ap_pai;
	}
	else{
		grafo->tipo = ap_pai->tipo;
		grafo->fesq = ap_pai->fesq;
		grafo->fdir = ap_pai->fdir;
	}

}

/*Procedimnto efetua a reducao do combinador de turner D segundo no grafo
 *  a regra:
 * C f g x -> f x g
 * */
void reduz_C(Celula *grafo){
	contar_argumentos(5);
	pop();//Desempilha C

	//Busca argumentos

	//Celula *f = topo->dado->fdir;
	//pop();//Desempilha f
	Celula *f = pilha[topo--]->fdir;
	//Celula *g = topo->dado->fdir;
	//pop();//Desempilha g
	Celula *g = pilha[topo--]->fdir;
	//Celula *x = topo->dado->fdir;
	//pop();//Desempilha x
	Celula *x = pilha[topo--]->fdir;

	//aloca espaco
	Celula *pai = NULL;
	//if(topo!= NULL){
	if(topo >= t_eval){
		//pai = topo->dado;
		pai = pilha[topo];
	}
	Celula *newF  = copiar_alocar(f);
	Celula *newG  = copiar_alocar(g);
	Celula *newX = copiar_alocar(x);

	Celula *ap_filha = cria_aplicacao();
	ap_filha->fesq = newF;
	ap_filha->fdir = newX;

	Celula *ap_pai = cria_aplicacao();
	ap_pai->fesq = ap_filha;
	ap_pai->fdir = newG;

	empilha_filho_esquerda(ap_pai);

	if(pai!= NULL){
		pai->fesq = ap_pai;
	}
	else{
		grafo->tipo = ap_pai->tipo;
		grafo->fesq = ap_pai->fesq;
		grafo->fdir = ap_pai->fdir;
	}

}

//		TURNER
/*Procedimnto efetua a reducao do combinador de turner D segundo no grafo
 *  a regra:
 * D c f g x -> c(f x)( g x)
 * */
void reduz_D(Celula *grafo){
	contar_argumentos(9);
	pop();//Desempilha D

	//Busca argumentos
	//Celula *c = topo->dado->fdir;
	//pop();//Desempilha c
	Celula *c = pilha[topo--]->fdir;
	//Celula *f = topo->dado->fdir;
	//pop();//Desempilha f
	Celula *f = pilha[topo--]->fdir;
	//Celula *g = topo->dado->fdir;
	//pop();//Desempilha g
	Celula *g = pilha[topo--]->fdir;
	//Celula *x = topo->dado->fdir;
	//pop();//Desempilha x
	Celula *x = pilha[topo--]->fdir;

	//alocacao de dados
	Celula *pai = NULL;
	//if(topo != NULL){
	if(topo >= t_eval){
		//pai = topo->dado;
		pai = pilha[topo];
	}
	Celula *newC  = copiar_alocar(c);
	Celula *newF  = copiar_alocar(f);
	Celula *newG  = copiar_alocar(g);
	Celula *newX1 = copiar_alocar(x);
	Celula *newX2 = copiar_alocar(x);

	//D c f g x -> c(f x)( g x)
	Celula *ap_filha3 = cria_aplicacao();
	ap_filha3->fesq = newF;
	ap_filha3->fdir = newX1;

	Celula *ap_filha4 = cria_aplicacao();
	ap_filha4->fesq = newG;
	ap_filha4->fdir = newX2;

	Celula *ap_filha1 = cria_aplicacao();
	ap_filha1->fesq = newC;
	ap_filha1->fdir = ap_filha3;

	Celula *ap_pai = cria_aplicacao();
	ap_pai->fesq = ap_filha1;
	ap_pai->fdir = ap_filha4;

	empilha_filho_esquerda(ap_pai);

	if(pai!= NULL){
		pai->fesq = ap_pai;
	}
	else{
		grafo->tipo = ap_pai->tipo;
		grafo->fesq = ap_pai->fesq;
		grafo->fdir = ap_pai->fdir;
	}

}

/*Procedimnto efetua a reducao do combinador de turner D segundo no grafo
 *  a regra:
 * E c f g x -> c f (g x)
 * */
void reduz_E(Celula *grafo){
	contar_argumentos(7);
	pop();//Desempilha E

	//Busca argumentos
	//Celula *c = topo->dado->fdir;
	//pop();
	Celula *c = pilha[topo--]->fdir;//Desempilha c
	//Celula *f = topo->dado->fdir;
	//pop();
	Celula *f = pilha[topo--]->fdir;//Desempilha f
	//Celula *g = topo->dado->fdir;
	//pop();//Desempilha g
	Celula *g = pilha[topo--]->fdir;//Desempilha g
	//Celula *x = topo->dado->fdir;
	//pop();//Desempilha x
	Celula *x = pilha[topo--]->fdir;//Desempilha x

	//Alocacao de dados
	Celula *pai = NULL;
	//if(topo != NULL){
	if(topo >= t_eval){
		//pai = topo->dado;
		pai = pilha[topo];
	}
	Celula *newC  = copiar_alocar(c);
	Celula *newF  = copiar_alocar(f);
	Celula *newG  = copiar_alocar(g);
	Celula *newX  = copiar_alocar(x);

	//E c f g x -> c f (g x)
	Celula *ap_filha1 = cria_aplicacao();
	ap_filha1->fesq = newC;
	ap_filha1->fdir = newF;

	Celula *ap_filha2 = cria_aplicacao();
	ap_filha2->fesq = newG;
	ap_filha2->fdir = newX;

	Celula *ap_pai = cria_aplicacao();
	ap_pai->fesq = ap_filha1;
	ap_pai->fdir = ap_filha2;

	empilha_filho_esquerda(ap_pai);

	if(pai!= NULL){
		pai->fesq = ap_pai;
	}
	else{
		grafo->tipo = ap_pai->tipo;
		grafo->fesq = ap_pai->fesq;
		grafo->fdir = ap_pai->fdir;
	}
}

/*Procedimnto efetua a reducao do combinador de turner D segundo no grafo
 *  a regra:
 * F c f g x -> c (f x ) g
 * */
void reduz_F(Celula *grafo){
	contar_argumentos(7);
	pop();//Desempilha F

	//Busca argumentos
	//Celula *c = topo->dado->fdir;
	//pop();//Desempilha c
	Celula *c = pilha[topo--]->fdir;//Desempilha c
	//Celula *f = topo->dado->fdir;
	//pop();//Desempilha f
	Celula *f = pilha[topo--]->fdir;//Desempilha f
	//Celula *g = topo->dado->fdir;
	//pop();//Desempilha g
	Celula *g = pilha[topo--]->fdir;//Desempilha g
	//Celula *x = topo->dado->fdir;
	//pop();//Desempilha x
	Celula *x = pilha[topo--]->fdir;//Desempilha x

	//Aloca dados
	Celula *pai = NULL;
	//if(topo != NULL){
	if(topo >= t_eval){
		//pai = topo->dado;
		pai = pilha[topo];
	}
	Celula *newC  = copiar_alocar(c);
	Celula *newF  = copiar_alocar(f);
	Celula *newG  = copiar_alocar(g);
	Celula *newX  = copiar_alocar(x);

	//F c f g x -> c (f x ) g
	Celula *ap_filha1 = cria_aplicacao();
	ap_filha1->fesq = newF;
	ap_filha1->fdir = newX;

	Celula *ap_filha2 = cria_aplicacao();
	ap_filha2->fesq = newC;
	ap_filha2->fdir = ap_filha1;

	Celula *ap_pai = cria_aplicacao();
	ap_pai->fesq = ap_filha2;
	ap_pai->fdir = newG;

	empilha_filho_esquerda(ap_pai);

	if(pai!= NULL){
		pai->fesq = ap_pai;
	}
	else{
		grafo->tipo = ap_pai->tipo;
		grafo->fesq = ap_pai->fesq;
		grafo->fdir = ap_pai->fdir;
	}

}

/*Procedimento para efetuar a reducao do combinador de turner
 * Segundo a regra
 * Y a -> a ( Y a )
 * */
void reduz_Y(Celula *grafo){
	contar_argumentos(5);
	pop();//Desempilha Y

	//Busca argumentos
	Celula *a = pilha[topo--]->fdir;
	//alocacao
	Celula *newA1 = copiar_alocar(a);
	Celula *newA2 = copiar_alocar(a);
	char comb = 'Y';
	Celula *newY = cria_combinador(&comb);//Y

	Celula *pai = NULL;
	// Y a -> a ( Y a )
	Celula *ap_filha = cria_aplicacao();
	ap_filha->fesq = newY;
	ap_filha->fdir = newA2;

	Celula *ap_pai = cria_aplicacao();
	ap_pai->fesq = newA1;
	ap_pai->fdir = ap_filha;

	if(topo >= t_eval){
		pai = pilha[topo];
	}

	if(pai!= NULL){
		pai->fesq = ap_pai;
		empilha_filho_esquerda(ap_pai);
	}
	else{
		grafo->tipo = ap_pai->tipo;
		grafo->fesq = ap_pai->fesq;
		grafo->fdir = ap_pai->fdir;
		empilha_filho_esquerda(grafo);
	}

}

/*Procedimento para efetuar a reducao do combinador de turner
 * Segundo a regra
 * Y a -> a ( Y a )
 * Utilizando otmisacao com knot tiening
 * */
void knot_tiening(Celula *grafo){
	contar_argumentos(2);
	pop();//Desempilha Y

	//Busca argumentos
	Celula *a = pilha[topo--]->fdir;
	//alocacao
	Celula *newA   = copiar_alocar(a);
	Celula *ap_pai = cria_aplicacao();

	Celula *pai = NULL;
	// Y a -> a ( Y a )
	ap_pai->fesq = newA;
	ap_pai->fdir = ap_pai;

	if(topo >= t_eval){
		pai = pilha[topo];
	}

	if(pai!= NULL){
		pai->fesq = ap_pai;
		empilha_filho_esquerda(ap_pai);
	}
	else{
		grafo->tipo = ap_pai->tipo;
		grafo->fesq = ap_pai->fesq;
		grafo->fdir = ap_pai->fdir;
		empilha_filho_esquerda(grafo);
	}

}

// Operadores l�gicos aritm�ticos

Celula * eval(Celula *grafo);

//	Operadores aritm�ticos
/*Procedimento efetua a redu��o do operador soma segundo a nota��o prefixa
 * + a b = (eval a) + (eval b)
 * Onde eval � a redu��o da sub arvore do argumento do operador
 * */
void reduz_SOMA(Celula *grafo){
	contar_argumentos(1);
	pop();//desempilha +

	//Busca argumento
	Celula *a = eval(pilha[topo]->fdir); //avalia e atribui A
	pop();
	Celula *b = eval(pilha[topo]->fdir); //avalia e atribui B
	pop();
	//Aloca dados
	Celula *result  = aloca_espaco();
	result->tipo = a->tipo + b->tipo;
	result->fesq = NULL;
	result->fdir = NULL;

	Celula *pai = NULL;

	if(topo >= t_eval){
		pai = pilha[topo];
	}

	if(pai!=NULL){
		pai->fesq = result;
	}
	else{
		grafo->tipo = result->tipo;
		grafo->fesq = result->fesq;
		grafo->fdir = result->fdir;
	}
}


/*Procedimento efetua a redu��o do operador soma segundo a nota��o prefixa
 * - a b = (eval a) - (eval b)
 * Onde eval � a redu��o da sub arvore do argumento do operador
 * */
void reduz_SUB(Celula *grafo){
	contar_argumentos(1);
	pop();//desempilha -

	//Busca argumento
	Celula *a = eval(pilha[topo]->fdir); //avalia e atribui A
	pop();
	Celula *b = eval(pilha[topo]->fdir); //avalia e atribui B
	pop();
	//Aloca dados
	Celula *result  = aloca_espaco();
	result->tipo = a->tipo - b->tipo;
	result->fesq = NULL;
	result->fdir = NULL;

	Celula *pai = NULL;

	if(topo >= t_eval){
		pai = pilha[topo];
	}

	if(pai!=NULL){
		pai->fesq = result;
	}
	else{
		grafo->tipo = result->tipo;
		grafo->fesq = result->fesq;
		grafo->fdir = result->fdir;
	}
}

/*Procedimento efetua a redu��o do operador soma segundo a nota��o prefixa
 * * a b = (eval a) * (eval b)
 * Onde eval � a redu��o da sub arvore do argumento do operador
 * */
void reduz_MULT(Celula *grafo){
	contar_argumentos(1);
	pop();//desempilha *

	//Busca argumento
	Celula *a = eval(pilha[topo]->fdir); //avalia e atribui A
	pop();
	Celula *b = eval(pilha[topo]->fdir); //avalia e atribui B
	pop();
	//Aloca dados
	Celula *result  = aloca_espaco();
	result->tipo = a->tipo * b->tipo;
	result->fesq = NULL;
	result->fdir = NULL;

	Celula *pai = NULL;

	if(topo >= t_eval){
		pai = pilha[topo];
	}

	if(pai!=NULL){
		pai->fesq = result;
	}
	else{
		grafo->tipo = result->tipo;
		grafo->fesq = result->fesq;
		grafo->fdir = result->fdir;
	}
}


/*Procedimento auxiliar para efetuar o calculo
 * da potencia: x**y
 * */
int power(int x,int y){
    int retorno = 1;

    for(int i = 0; i < y;i++){
    	retorno = retorno*x;
    }
    return retorno;
}

/*Procedimento que efetua a reducao do operador em notacao
 * prefixa potência segundo a regra
 * ** a  b = a ** b
 * */
void reduz_POW(Celula *grafo){
	contar_argumentos(1);
	pop();//desempilha *

	//Busca argumento
	Celula *a = eval(pilha[topo]->fdir); //avalia e atribui A
	pop();
	Celula *b = eval(pilha[topo]->fdir); //avalia e atribui B
	pop();
	//Aloca dados
	Celula *result  = aloca_espaco();
	result->tipo = power(a->tipo,b->tipo);
	result->fesq = NULL;
	result->fdir = NULL;

	Celula *pai = NULL;

	if(topo >= t_eval){
		pai = pilha[topo];
	}

	if(pai!=NULL){
		pai->fesq = result;
	}
	else{
		grafo->tipo = result->tipo;
		grafo->fesq = result->fesq;
		grafo->fdir = result->fdir;
	}
}
/*Procedimento efetua a redu��o do operador soma segundo a nota��o prefixa
 * div a b = (eval a) / (eval b)
 * Onde eval � a redu��o da sub arvore do argumento do operador
 * */
void reduz_DIV(Celula *grafo){
	contar_argumentos(1);
	pop();//desempilha /

	//Busca argumento
	Celula *a = eval(pilha[topo]->fdir); //avalia e atribui A
	pop();
	Celula *b = eval(pilha[topo]->fdir); //avalia e atribui B
	pop();
	//Aloca dados
	Celula *result  = aloca_espaco();
	result->tipo = a->tipo / b->tipo;
	result->fesq = NULL;
	result->fdir = NULL;

	Celula *pai = NULL;

	if(topo >= t_eval){
		pai = pilha[topo];
	}

	if(pai!=NULL){
		pai->fesq = result;
	}
	else{
		grafo->tipo = result->tipo;
		grafo->fesq = result->fesq;
		grafo->fdir = result->fdir;
	}
}

// 			Operadores logicos

/* Procedimento implementa a reducao do operador logico
 * TRUE segundo a regra
 * TRUE a b -> a
 */
void reduz_TRUE(Celula *grafo){
	contar_argumentos(1);
	pop();//Desempilha t

	Celula *a = eval(pilha[topo--]->fdir);
	//Celula *a = pilha[topo--]->fdir;
	pop();//Desempilha B

	//alocacao de espaco
	Celula *pai = NULL;
	Celula *newA = copiar_alocar(a);

	//TRUE a b -> a
	if(topo>= t_eval){
		pai = pilha[topo];
	}

	if(topo >= t_eval){
		pai->fesq = newA;
		empilha_filho_esquerda(newA);
	}
	else{
		grafo->tipo = a->tipo;
		grafo->fdir = a->fdir;
		grafo->fesq = a->fesq;
		if(grafo->fesq){
			empilha_filho_esquerda(grafo);
		}
	}
}

/* Procedimento implementa a reducao do operador logico
 * FALSE segundo a regra
 * FALSE a b -> b
 */
void reduz_FALSE(Celula *grafo){
	contar_argumentos(1);
	pop();//Desempilha FALSE

	pop();//Desempilha A
	Celula *b = eval(pilha[topo--]->fdir);
	//Celula *b = pilha[topo--]->fdir;
	//pop();

	//aloca espaco
	Celula *pai = NULL;
	Celula *newB = copiar_alocar(b);

	//FALSE a b -> b
	if(topo>= t_eval){
		pai = pilha[topo];
	}

	if(topo >= t_eval){
		pai->fesq = newB;
		empilha_filho_esquerda(newB);
	}
	else{
		grafo->tipo = b->tipo;
		grafo->fdir = b->fdir;
		grafo->fesq = b->fesq;
		if(grafo->fesq){
			empilha_filho_esquerda(grafo);
		}
	}
}

/* Procedimento implementa a reducao do operador logico
 * > segundo a regra
 * > a b -> (eval a) > (eval b)
 */
void reduz_GT(Celula *grafo){
	contar_argumentos(1);
	pop();

	Celula *a = eval(pilha[topo--]->fdir);
	Celula *b = eval(pilha[topo--]->fdir);

	Celula *result = NULL;
	// > a b -> (eval a)>(eval b)
	if(a->tipo > b->tipo){
		result = aloca_espaco();
		result->tipo = 0xF000000D;//TRUE
		result->fesq = NULL;
		result->fdir = NULL;
	}
	else{
		result = aloca_espaco();
		result->tipo = 0xF000000E;//FALSE
		result->fesq = NULL;
		result->fdir = NULL;
	}

	Celula *pai  = NULL;
	if(topo >= t_eval){
		pai = pilha[topo];
	}

	if(pai != NULL){
		pai->fesq = result;
		empilha_filho_esquerda(result);
	}
	else{
		grafo->tipo = result->tipo;
		grafo->fdir = result->fdir;
		grafo->fesq = result->fesq;
		if(grafo->fesq){
			empilha_filho_esquerda(grafo);
		}
	}
}

/* Procedimento implementa a reducao do operador logico
 * < segundo a regra
 * < a b -> (eval a) < (eval b)
 */
void reduz_LT(Celula *grafo){
	contar_argumentos(1);
	pop();

	Celula *a = eval(pilha[topo--]->fdir);
	Celula *b = eval(pilha[topo--]->fdir);

	Celula *result = NULL;
	// > a b -> (eval a)<(eval b)
	if(a->tipo < b->tipo){
		result = aloca_espaco();
		result->tipo = 0xF000000D;//TRUE
		result->fesq = NULL;
		result->fdir = NULL;
	}
	else{
		result = aloca_espaco();
		result->tipo = 0xF000000E;//FALSE
		result->fesq = NULL;
		result->fdir = NULL;
	}

	Celula *pai  = NULL;
	if(topo >= t_eval){
		pai = pilha[topo];
	}

	if(pai != NULL){
		pai->fesq = result;
		empilha_filho_esquerda(result);
	}
	else{
		grafo->tipo = result->tipo;
		grafo->fdir = result->fdir;
		grafo->fesq = result->fesq;
		if(grafo->fesq){
			empilha_filho_esquerda(grafo);
		}
	}
}

/* Procedimento implementa a reducao do operador logico
 * = segundo a regra
 * = a b -> (eval a) = (eval b)
 */
void reduz_EQ(Celula *grafo){
	contar_argumentos(1);
	pop();

	Celula *a = eval(pilha[topo--]->fdir);
	Celula *b = eval(pilha[topo--]->fdir);

	Celula *result = NULL;
	// = a b -> (eval a)=(eval b)
	if(a->tipo == b->tipo){
		result = aloca_espaco();
		result->tipo = 0xF000000D;//TRUE
		result->fesq = NULL;
		result->fdir = NULL;
	}
	else{
		result = aloca_espaco();
		result->tipo = 0xF000000E;//FALSE
		result->fesq = NULL;
		result->fdir = NULL;
	}

	Celula *pai  = NULL;
	if(topo >= t_eval){
		pai = pilha[topo];
	}

	if(pai != NULL){
		pai->fesq = result;
		empilha_filho_esquerda(result);
	}
	else{
		grafo->tipo = result->tipo;
		grafo->fdir = result->fdir;
		grafo->fesq = result->fesq;
		if(grafo->fesq){
			empilha_filho_esquerda(grafo);
		}
	}
}

/* Procedimento implementa a reducao do operador logico
 * AND segundo a regra
 * AND a b -> (eval a) AND (eval b)
 */
void reduz_AND(Celula *grafo){
	contar_argumentos(1);
	pop();

	Celula *a = eval(pilha[topo--]->fdir);
	Celula *b = eval(pilha[topo--]->fdir);

	// AND a b -> (eval a) AND (eval b)
	Celula *result = NULL;
	result  = aloca_espaco();
	switch(a->tipo){
		case 0xF000000D:// TRUE
			switch(b->tipo){
				case 0xF000000D:// TRUE
					result->tipo = 0xF000000D; //TRUE
					result->fesq = NULL;
					result->fdir = NULL;
				break;
				case 0xF000000E:// FALSE
					result->tipo = 0xF000000E; //FALSE
					result->fesq = NULL;
					result->fdir = NULL;
				break;
			}
			break;
		case 0xF000000E:// FALSE
			switch(b->tipo){
				case 0xF000000D:// TRUE
					result->tipo = 0xF000000E; //TRUE
					result->fesq = NULL;
					result->fdir = NULL;
				break;
				case 0xF000000E:// FALSE
					result->tipo = 0xF000000E; //FALSE
					result->fesq = NULL;
					result->fdir = NULL;
				break;
			}
			break;
	}

	Celula *pai  = NULL;
	if(topo >= t_eval){
		pai = pilha[topo];
	}

	if(pai != NULL){
		pai->fesq = result;
		empilha_filho_esquerda(result);
	}
	else{
		grafo->tipo = result->tipo;
		grafo->fdir = result->fdir;
		grafo->fesq = result->fesq;
		if(grafo->fesq){
			empilha_filho_esquerda(grafo);
		}
	}
}

/* Procedimento implementa a reducao do operador logico
 * OR segundo a regra
 * OR a b -> (eval a) OR (eval b)
 */
void reduz_OR(Celula *grafo){
	contar_argumentos(1);
	pop();

	Celula *a = eval(pilha[topo--]->fdir);
	Celula *b = eval(pilha[topo--]->fdir);

	// OR a b -> (eval a) OR (eval b)
	Celula *result = NULL;
	result  = aloca_espaco();
	switch(a->tipo){
		case 0xF000000D:// TRUE
			result->tipo = 0xF000000D; //TRUE
			result->fesq = NULL;
			result->fdir = NULL;
			break;
		case 0xF000000E:// FALSE
			switch(b->tipo){
				case 0xF000000D:// TRUE
					result->tipo = 0xF000000D; //TRUE
					result->fesq = NULL;
					result->fdir = NULL;
				break;
				case 0xF000000E:// FALSE
					result->tipo = 0xF000000E; //FALSE
					result->fesq = NULL;
					result->fdir = NULL;
				break;
			}
			break;
	}

	Celula *pai  = NULL;
	if(topo >= t_eval){
		pai = pilha[topo];
	}

	if(pai != NULL){
		pai->fesq = result;
		empilha_filho_esquerda(result);
	}
	else{
		grafo->tipo = result->tipo;
		grafo->fdir = result->fdir;
		grafo->fesq = result->fesq;
		if(grafo->fesq){
			empilha_filho_esquerda(grafo);
		}
	}
}

/*Procedimento que efetua a regra de redução do combinador Tl
 * segundo a regra
 * Tl (:ab) -> b
 * */
void reduz_Tl(Celula *grafo){
	contar_argumentos(1);

	pop();//Desempilha Tl

	//Pegando a raiz da lista enquanto o node pai da lista é desempilhado
	Celula *arg = eval(pilha[topo--]->fdir);

	//Se o operador nao estiver sendo aplicado a uma lista vazia
	if(arg->tipo == 0xF0000016){
		//topo--;
		Celula *b = arg->fdir;

		//Tl (:ab) -> b
		Celula *newB = copiar_alocar(b);
		Celula *pai  = NULL;

		if(topo >= t_eval){
			pai = pilha[topo];
		}

		if(pai!= NULL){
			pai->fesq = newB;
			empilha_filho_esquerda(newB);
		}
		else{
			grafo->tipo = newB->tipo;
			grafo->fdir = newB->fdir;
			grafo->fesq = newB->fesq;
			//if(grafo->fesq){
			//	empilha_filho_esquerda(grafo);
			//}
		}

	}
	else if(arg->tipo == 0xF0000017){
		printf("#######################################\n");
		printf("\t Erro na aplicacao de tl Tl\n");
		printf("#######################################\n");
		exit(0);
	}
	else{
		grafo->tipo = arg->tipo;
		grafo->fdir = arg->fdir;
		grafo->fesq = arg->fesq;
		if(grafo->fesq){
			empilha_filho_esquerda(grafo);
		}
	}
}

/*Procedimento que efetua a regra de redução do combinador Tl
 * segundo a regra
 * Hd (:ab) -> a
 * */
void reduz_Hd(Celula *grafo){
	contar_argumentos(1);

	pop();//Desempilha H

	//Pegando a raiz da lista enquanto o node pai da lista é desempilhado
	Celula *arg = eval(pilha[topo--]->fdir);

	//Se o operador nao estiver sendo aplicado a uma lista vazia
	if(arg->tipo ==  0xF0000016){
		//topo--;
		Celula *a = arg->fesq;

		//Hd (:ab) -> a
		Celula *newA = copiar_alocar(a);
		Celula *pai  = NULL;

		if(topo >= t_eval){
			pai = pilha[topo];
		}

		if(pai!= NULL){
			pai->fesq = newA;
			empilha_filho_esquerda(newA);
		}
		else{
			grafo->tipo = newA->tipo;
			grafo->fdir = newA->fdir;
			grafo->fesq = newA->fesq;
			if(grafo->fesq){
				empilha_filho_esquerda(grafo);
			}
		}

	}
	else if(arg->tipo == 0xF0000017){
		printf("#######################################\n");
		printf("\t Erro na aplicacao de Hb\n");
		printf("#######################################\n");
		exit(0);
	}
	else{
		grafo->tipo = arg->tipo;
		grafo->fdir = arg->fdir;
		grafo->fesq = arg->fesq;
		if(grafo->fesq){
			empilha_filho_esquerda(grafo);
		}
	}
}

/*Procedimento contendo a regra de redução para a funlção
 * map, a qual dados uma lista e uma função, a mesma é aplicada a
 * cada elemento da lista, e a lista com o resultado é retornada.
 * Map f x = if x= [] then [], else : (f (Hd x)) Map f (Tl x))
 * */
void reduz_MAP(Celula *grafo){
	contar_argumentos(7);//Conta somente a nova célula do tipo : que será alocada
	pop();//Desempilha M

	Celula *function = pilha[topo--]->fdir;
	Celula *list = pilha[topo--]->fdir;

	if(list->tipo != 0xF0000017){
		char comb = ':';
		Celula *tipo_lista = cria_combinador(&comb);
		Celula *ap  =cria_aplicacao();
		ap->fesq = function;
		ap->fdir = eval(list->fesq);
		tipo_lista->fesq  = eval(ap);
		//aplicando Tl a lista
		comb = 'G'; //tl
		Celula  *tl   = cria_combinador(&comb);
		Celula *ap_tl = cria_aplicacao();
		ap_tl->fesq   = tl;
		ap_tl->fdir   = list;
		//Avalia a aplicacao de tl
		ap_tl  = eval(ap_tl);
		//Cria o combinador Map
		comb = 'M'; //MAp
		Celula  *map   = cria_combinador(&comb);
		//cria mais duas aplicacoes
		Celula *ap_map  =  cria_aplicacao();
		Celula *ap_f_tl = cria_aplicacao();
		ap_map->fesq = map;
		ap_map->fdir = function;
		ap_f_tl->fesq = ap_map;
		ap_f_tl->fdir = ap_tl; //Pega o resultado da avaliacao de ap tl;
		//avaliando a aplicacao do map a cauda da lista
		tipo_lista->fdir = eval(ap_f_tl);
		Celula* pai = NULL;
		if(topo >= t_eval){
			pai = pilha[topo];
		}

		if(pai != NULL){
			pai->fesq = tipo_lista;
		}
		else{
			grafo->tipo = tipo_lista->tipo;
			grafo->fesq = tipo_lista->fesq;
			grafo->fdir = tipo_lista->fdir;
		}
	}
	else{
		grafo->tipo = list->tipo;
		grafo->fesq = list->fesq;
		grafo->fdir = list->fdir;
	}
}


/*Procedimento auxiliar para efetuar a  avalia��o de subarvore de um operador
 * */
Celula * eval(Celula *grafo){

	if(grafo->tipo == 0xF0000008){
			int antigo_t_eval = t_eval;
			int antigo_topo = topo;
			// GAMBIARRA! NÃO MEXER!!!=
			/**/topo = topo+1;       //
			/**/t_eval = topo+1;	 //
			//=========================
			empilha_grafo(grafo);
			//while(topo != NULL){
			while(topo >= t_eval){
				//switch(topo->dado->tipo){
				switch(pilha[topo]->tipo){
					//case'K':
					case 0xF0000000:
						reduz_K(grafo);
						break;
					//case 'S':
					case 0xF0000001:
						reduz_S(grafo);
						break;
					//case 'I':
					case 0xF0000002:
						reduz_I(grafo);
						break;
					//case 'B':
					case 0xF0000003:
						reduz_B(grafo);
						break;
					//case 'C':
					case 0xF0000004:
						reduz_C(grafo);
						break;
					//case 'D':
					case 0xF0000005:
						reduz_D(grafo);
						break;
					//case 'E':
					case 0xF0000006:
						reduz_E(grafo);
						break;
					//case 'F':
					case 0xF0000007:
						reduz_F(grafo);
						break;
					case 0xF0000009:
						reduz_SOMA(grafo);
						break;
					case 0xF000000A:
						reduz_SUB(grafo);
						break;
					case 0xF000000B:
						reduz_MULT(grafo);
						break;
					case 0xF000000C:
						reduz_DIV(grafo);
						break;
					case 0xF000000D:
						reduz_TRUE(grafo);
						break;
					case 0xF000000E:
						reduz_FALSE(grafo);
						break;
					case 0xF0000010:// >
						reduz_GT(grafo);
						break;
					case 0xF0000011:// <
						reduz_LT(grafo);
						break;
					case 0xF0000012:// =
						reduz_EQ(grafo);
						break;
					case 0xF0000013:// &
						reduz_AND(grafo);
						break;
					case 0xF0000014:// |
						reduz_OR(grafo);
					break;
					//Operador de turner Y
					case 0xF0000015:
						//reduz_Y(grafo);
						knot_tiening(grafo);
						break;
					//Case Tl
					case 0xF0000018:
						reduz_Tl(grafo);
						break;
					//Case Hd
					case 0xF0000019:
						reduz_Hd(grafo);
						break;
					//Operadores adicionados a posteriori
					case 0xF000001C:
						reduz_POW(grafo);
						break;
					case 0xF000001D:
						reduz_MAP(grafo);
						break;
				}
			}
		// GAMBIARRA! NÃO MEXER!!!==
		/**/t_eval = antigo_t_eval;//
		/**/topo = antigo_topo;	   //
		//==========================
		return grafo;
	}
	else{
		return grafo;
	}
}

int main(){
	/**
	 * Criação e alocaçao do grafo.
	 * */
	heap = calloc(H,sizeof(Celula));

	double clk_ps = (double)  CLOCKS_PER_SEC;
	aloca_freelist();
	clock_t toc = clock();
	Celula *grafo = cria_grafo(string);
	//Celula *grafo = cria_lista(string);
	//imprime_grafo_para_string(grafo);
	//imprime_grafo(grafo);
	clock_t tic = clock();
	printf("\n");
	printf("Tempo Criação do grafo = %lf", (double)((tic - toc)/clk_ps));

	int iterations  = 0;
	toc = clock();
	double a = (double) toc;
	t_eval = 0;
	empilha_grafo(grafo);
	//while(topo != NULL){
	while(topo >= 0){
		//switch(topo->dado->tipo){
		switch(pilha[topo]->tipo){
			//case'K':
			case 0xF0000000:
				reduz_K(grafo);
				break;
			//case 'S':
			case 0xF0000001:
				reduz_S(grafo);
				break;
			//case 'I':
			case 0xF0000002:
				reduz_I(grafo);
				break;
			//case 'B':
			case 0xF0000003:
				reduz_B(grafo);
				break;
			//case 'C':
			case 0xF0000004:
				reduz_C(grafo);
				break;
			//case 'D':
			case 0xF0000005:
				reduz_D(grafo);
				break;
			//case 'E':
			case 0xF0000006:
				reduz_E(grafo);
				break;
			//case 'F':
			case 0xF0000007:
				reduz_F(grafo);
				break;
			case 0xF0000009:
				reduz_SOMA(grafo);
				break;
			case 0xF000000A:
				reduz_SUB(grafo);
				break;
			case 0xF000000B:
				reduz_MULT(grafo);
				break;
			case 0xF000000C:
				reduz_DIV(grafo);
				break;
			case 0xF000000D:
				reduz_TRUE(grafo);
				break;
			case 0xF000000E:
				reduz_FALSE(grafo);
				break;
			case 0xF0000010:// >
				reduz_GT(grafo);
				break;
			case 0xF0000011:// <
				reduz_LT(grafo);
				break;
			case 0xF0000012:// =
				reduz_EQ(grafo);
				break;
			case 0xF0000013:// &
				reduz_AND(grafo);
				break;
			case 0xF0000014:// |
				reduz_OR(grafo);
			break;
			//Operador de turner Y
			case 0xF0000015:
				//reduz_Y(grafo);
				knot_tiening(grafo);
				break;
			//Case Tl
			case 0xF0000018:
				reduz_Tl(grafo);
				break;
			//Case Hd
			case 0xF0000019:
				reduz_Hd(grafo);
				break;
			//Operadores adicionados a posteriori
			case 0xF000001C:
				reduz_POW(grafo);
				break;
			case 0xF000001D:
				reduz_MAP(grafo);
				break;
		}
		iterations++;
	}
	tic = clock();
	double b = (double) tic;


	if(grafo != NULL){
		//printf("\n%c\n",converte_celula_caractere(grafo->tipo));
		//printf("\n%d\n",grafo->tipo);
		printf("\n");
		imprime_grafo_para_string(grafo);
	}
	printf("\n");
	printf("Tempo Redução grafo = %lf", (double)((b - a)/clk_ps));
	printf("\nNumero de iterações = %d\n",iterations);

	return 0;
}
