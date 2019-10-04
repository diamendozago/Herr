#include <cstdio>
#include <cmath>

double fact (int a);
double term (float b, int c);
double ex (float d, int f);
int main(void){
    float x = 3.141592;
    const double eps = 1.0/1000000;
    for(int n = 1; n < 26; n++){
        if (x >= 0){
            std::printf("%d \t %25.16e \t %25.16e \t %25.16e \n", n, ex(x, n), exp(x), term(std::abs(x), n));
        }
        if (x < 0){
            
            std::printf("%d \t %25.16e \t %25.16e \t %25.16e \n", n, 1.0/ex(-x, n), exp(x), term(std::abs(x), n));   
        }
        if (term(std::abs(x), n) < eps) break;
    }
    return 0;
}

double fact (int a){
    if (a < 2) return 1;
    else return a*fact(a-1);
}

double term(float b, int c){
    return (pow(b,c)/fact(c));
}

double ex(float d, int f){
    double r = 1.0;
    for(int i = 1; i <= f; i++){
        r = r + term(d, i);
    }
    return r;
}
