#include <stdio.h>

int main(void)
{
  int n;

  printf("n = ");
  scanf("%d", &n);

  if( (n & 1) == 0 ){ //（）を付けてn&1が0に等しいということにすればよい
    printf("%d は偶数です\n", n);
  }
  return 0;
}
