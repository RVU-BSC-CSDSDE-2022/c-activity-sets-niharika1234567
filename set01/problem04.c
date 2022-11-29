#include <stdio.h>

int main() {
 int a,b,sum;
 a=input();
 b=input();
 sum=add(a,b,sum);
 output(a,b,sum);
  }

int input()
{
  int a;
  scanf("%d",&a);
  return a;
}

int add(int a,int b,int *sum)
{
  int sum=a+b;
  return sum;
}

void output(inta,int b,int sum)
{
  printf("the sum of %d and %d",a,b,sum);)
}
