#include <cstdio>

int main(void)
{
  double eps = 1.0;
  double one = 1.0;

  for (int i = 0; i<=1200; i++){
    eps = eps/2.0;
    one = 1.0 + eps;
    std::printf("%10d %24.16e %24.16e\n", i, one, eps);
  }
  return 0;
}
    
  
  
