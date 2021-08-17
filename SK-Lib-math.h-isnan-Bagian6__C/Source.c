#include <stdio.h>
#include <math.h>
#include <float.h>
#include <conio.h>

/*
    Source by CPPReference
    Modified For Learn by RK
    I.D.E : VS2019
*/

int main(void) {
    printf("isnan(NAN)         = %d\n", isnan(NAN));
    printf("isnan(INFINITY)    = %d\n", isnan(INFINITY));
    printf("isnan(0.0)         = %d\n", isnan(0.0));
    printf("isnan(DBL_MIN/2.0) = %d\n", isnan(DBL_MIN / 2.0));
    printf("isnan(0.0 / 2.0)   = %d\n", isnan(0.0 / 2.0));
    printf("isnan(Inf - Inf)   = %d\n", isnan(INFINITY - INFINITY));

    _getch();
    return 0;
}