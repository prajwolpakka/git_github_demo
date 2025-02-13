#include <stdio.h>

int sum(int a[], int size)
{
  int result = 0;
  for (int i = 0; i < size; i++)
  {
    result += a[i];
  }
  return result;
}

int main()
{
  int a[5] = {1, 2, 3, 4, 5};
  printf("The sum is %d", sum(a, 5));
}