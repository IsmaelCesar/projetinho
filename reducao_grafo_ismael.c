#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//#define N 100000000
#define N 200
//#define H 10000000
#define H 200

//char string[N]= "S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))((S(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(S(S(KS)(S(KK)(SKK)))(K(S(SKK)(SKK))))(KK))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K)\0";
//char string[N] =  "D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)((D(FBI(SII))I(B(FBI(SII))I)(KK))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K)\0";
//char string[N] ="FKIIK\0";
//char string[N] ="K(SKS(KKK(KIK)))(K(SKS)SS)K\0";
char string[N]    = "C(C((KKI)(IK)(SKKK))(C(SKKI)I(KKK))(C(CKIK)(CKIK)I))(SKKK)(KIK)\0";
//char string[N]  = "K((K(KIK)I)(KKK)KK)K\0";
//char string[N]  = "K((KIK)(KKK)KK)K\0";

typedef struct  Celula{
	char tipo;
	char mark;
	struct Celula *fesq;
	struct Celula *fdir;
}Celula;


Celula heap[H];

///      Alocacao de dados
Celula *fl;

/*Estrutura auxiliar para empilhar as celulas
 * */
typedef struct NodePilha{
	struct Celula *dado;
	struct NodePilha *prox;
}NodePilha;

NodePilha *topo = NULL;



//						ALOCACAO DADOS


/*Procedimentos para inserir e remover elementos da pilha
 * */
void push(Celula *c){

	NodePilha *nptr = calloc(1,sizeof(NodePilha));
	nptr->dado = c;
	nptr->prox = topo;
	topo = nptr;
}

void pop(){
	if(topo != NULL){
		NodePilha *aux;
		aux =topo;
		topo = topo->prox;
		free(aux);
	}
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

/*Procedimento cria uma celula do tipo combinador.
 * */
Celula *cria_combinador(char *entrada){
	Celula *combinador;

	combinador = aloca_espaco();
	if(combinador != NULL){
		combinador->tipo = entrada[0];
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
		aplicacao->tipo = '@';
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

/*Procedimento pega a string de entrada e a partir da mesma cria o grafo
 * fazendo uma busca em ordem de baixo para cima
 * */
Celula* cria_grafo(char *entrada){

	Celula *raiz = cria_aplicacao();
	//Celula *raiz = NULL;

	while(entrada[0] != '\0'){

			if(entrada[0] == ')'){
					return raiz;
			}
			else if(entrada[0] == '('){
				if(raiz->fdir != NULL){
					Celula *ap = cria_aplicacao();
					Celula *aux = raiz;
					ap->fesq = aux;
					ap->fdir = cria_grafo(entrada + 1);
					raiz = ap;
				}
				else{
					raiz->fdir= cria_grafo(entrada + 1);
				}
				int end   = 1;
				casa_parenteses(entrada,&end);
				for(int i = 0; i < end; i++){
					entrada++;
				}
			}
			else{
				if(raiz->fesq == NULL){
					Celula *comb = cria_combinador(entrada);
					raiz->fesq = comb;
					entrada++;
				}
				else if(raiz->fdir == NULL){
					Celula *comb = cria_combinador(entrada);
					raiz->fdir = comb;
					entrada++;
				}
				else{
					Celula *ap = cria_aplicacao();
					Celula *aux  = raiz;
					ap->fesq  = aux;
					raiz  = ap;
				}
			}
	}

	return raiz;
}

Celula* cria_grafo2(char *entrada){

	Celula *raiz = NULL;

	while(entrada[0] != '\0'){

			if(entrada[0] == ')'){
					return raiz;
			}
			else if(entrada[0] == '('){
				Celula *ap = NULL;
				//Celula *aux = NULL;

				if(raiz != NULL){
					ap = cria_aplicacao();
					//aux = raiz;
					ap->fesq = raiz;
					ap->fdir = cria_grafo2(entrada + 1);
				}
				else{
					ap = cria_grafo2(entrada + 1);
				}
				int end   = 1;
				casa_parenteses(entrada,&end);
				for(int i = 0; i < end; i++){
					entrada++;
				}
				//Transforma a aplicacao na nova raiz;
				raiz = ap;
			}
			else{
				if(raiz != NULL){
					Celula *aux = NULL;
					if(raiz->tipo == '@'){
						if(raiz->fdir != NULL){
							aux = cria_aplicacao();
							aux->fesq = raiz;
							raiz = aux;
							aux->fdir = cria_combinador(entrada);
						}
						else{
							raiz->fdir = cria_combinador(entrada);
						}
					}
					else{
						aux = cria_aplicacao();
						aux->fesq = raiz;
						raiz = aux;
						raiz->fdir = cria_combinador(entrada);
					}
				}
				else{
					raiz = cria_combinador(entrada);
				}
				entrada++;
			}
	}

	return raiz;
}


//						IMPRIMIR GRAFO

/*Procedimento dedicado a impressao do grado no console
 * para verificar se o grafo criado esta correto.
 * */
void imprime_grafo_para_string(Celula *cel){


	if(cel->fesq != NULL){
		imprime_grafo_para_string(cel->fesq);
	}
	else if(cel->tipo == '@'){
		printf("grafo Errado");
		exit(0);
	}
	if(cel->fdir != NULL){
		if(cel->fdir->tipo  == '@'){
			printf("(");
			imprime_grafo_para_string(cel->fdir);
			printf(")");
		}
		else{
			imprime_grafo_para_string(cel->fdir);
		}
	}
	else if(cel->tipo == '@'){
		printf("grafo Errado");
		exit(0);
	}

	if(cel->tipo != '@'){
		printf("%c",cel->tipo);
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

	pop();//Desempilha K

	//Buscando argumentos
	///NodePilha *arg1 = topo;
	Celula *a  = topo->dado->fdir;
	pop();// Desenpilha a
	pop();// Desempilha b

	Celula *pai = NULL;

	//K a b -> a
	Celula *newA = aloca_espaco();
	newA->tipo = a->tipo;
	newA->fdir = a->fdir;
	newA->fesq = a->fesq;
	//Adicionou verifica��o do pai
	if(topo != NULL){
		pai = topo->dado;
	}


	//Mudou de topo para pai
	if(topo != NULL){
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
	pop();//Desempilha S
	Celula *a = topo->dado->fdir;
	pop();

	Celula *b = topo->dado->fdir;
	pop();

	Celula *c = topo->dado->fdir;
	pop();

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

	if(topo != NULL){
		pai = topo->dado;
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
	pop();//Desempilha I

	//Busca argumentos
	Celula *a = topo->dado->fdir;
	pop(); //Desempilha a

	Celula *pai = NULL;

	// I a -> a
	Celula *newA = aloca_espaco();

	newA->tipo = a->tipo;
	newA->fdir = a->fdir;
	newA->fesq = a->fesq;

	if(topo != NULL){
		pai = topo->dado;
	}

	if(topo != NULL){
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
	pop();//Desempilha B

	//busca argumentos
	Celula *f = topo->dado->fdir;
	pop();//desempilha f

	Celula *g = topo->dado->fdir;
	pop();//desempilha g

	Celula *x = topo->dado->fdir;
	pop();//desempilha x

	//aloca espaco
	Celula *newF  = copiar_alocar(f);
	Celula *newG  = copiar_alocar(g);
	Celula *newX = copiar_alocar(x);

	//B f g x -> f ( g  x)
	Celula *pai   = NULL;
	if(topo != NULL){
		pai = topo->dado;
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
	pop();//Desempilha C

		//Busca argumentos

	Celula *f = topo->dado->fdir;
	pop();//Desempilha f

	Celula *g = topo->dado->fdir;
	pop();//Desempilha g

	Celula *x = topo->dado->fdir;
	pop();//Desempilha x

	//aloca espaco
	Celula *pai = NULL;
	if(topo!= NULL){
		pai = topo->dado;
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

	pop();//Desempilha D

		//Busca argumentos
		Celula *c = topo->dado->fdir;
		pop();//Desempilha c

		Celula *f = topo->dado->fdir;
		pop();//Desempilha f

		Celula *g = topo->dado->fdir;
		pop();//Desempilha g

		Celula *x = topo->dado->fdir;
		pop();//Desempilha x

		//alocacao de dados
		Celula *pai = NULL;
		if(topo != NULL){
			pai = topo->dado;
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
		ap_filha4->fesq = newC;
		ap_filha4->fdir = ap_filha3;

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

}

/*Procedimnto efetua a reducao do combinador de turner D segundo no grafo
 *  a regra:
 * F c f g x -> c (f x ) g
 * */
void reduz_F(Celula *grafo){

}

int main(){
	/**
	 * Criação e alocaçao do grafo.
	 * */
	aloca_freelist();
	double clk_ps = (double)  CLOCKS_PER_SEC;
	clock_t toc = clock();
	Celula *grafo = cria_grafo2(string);
	//imprime_grafo_para_string(grafo);
	//imprime_grafo(grafo);
	clock_t tic = clock();
	printf("\n");
	printf("Tempo Criação do grafo = %lf", (double)((tic - toc)/clk_ps));

	int iterations  = 0;
	toc = clock();
	double a = (double) toc;
	empilha_grafo(grafo);
	while(topo != NULL){


		switch(topo->dado->tipo){
			case'K':
				reduz_K(grafo);
				break;
			case 'S':
				reduz_S(grafo);
				break;
			case 'I':
				reduz_I(grafo);
				break;
			case 'B':
				reduz_B(grafo);
				break;
			case 'C':
				reduz_C(grafo);
				break;
			case 'D':
				reduz_D(grafo);
				break;
			case 'E':
				reduz_E(grafo);
				break;
			case 'F':
				reduz_F(grafo);
				break;
		}
		iterations++;
	}
	tic = clock();
	double b = (double) tic;


	if(grafo != NULL){
		printf("\n\n%c\n\n",grafo->tipo);
	}
	printf("\n");
	printf("Tempo Redução grafo = %lf", (double)((b - a)/clk_ps));
	printf("\n\nNumero de iterações = %d\n",iterations);

	return 0;
}
