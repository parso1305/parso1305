#include <stdio.h>
int main()
{
  int n;
  printf("enter a number");
  scanf("%d", &n);

  int sum = 0;
  int i;
  for ( i = 0; i <= n; i++)
  {
    sum = sum + i;
  }
  printf("sum is %d", sum);
  return 0;
}
