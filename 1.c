#include <stdio.h>

int main(void)
{
  int n;

  printf("n = ");
  scanf("%d", &n);

  if( (n & 1) == 0 ){
    //&はビット演算子であるため、末尾が0となれば偶数であると言える。
    printf("%d は偶数です\n", n);
  }
  return 0;
}
