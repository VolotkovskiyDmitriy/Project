#include <stdio.h>
#include <math.h>
#include "funcH.h"
int main(){

    float x;
    printf("Enter the value of X: ");
    scanf("%f", &x);
    printf("Func f(x) = %f\n", funcF(x));
    printf("Func g(x) = %f\n", funcG(x));
    return 0;
    
}
