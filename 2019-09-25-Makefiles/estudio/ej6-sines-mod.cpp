#define _USE_MATH_DEFINES

#include <cstdio>
#include <cmath>
#include "ej6-f1.h"
#include "ej6-f2.h"


int main(void){
    int N = 100;
    float dx = (M_PI/4.0)/N;
    double x;
    for(int i = 0; i < N+1; i++){
        x = i*dx;
        std::printf("%d \t %20.16e \t %20.16e \t %20.16e\n", i, f1(x), f2(x), f2(x)-f1(x));
    }
    return 0;
}
