#include<stdio.h>
int input_n()
{
  int n;
  printf("enter the num\n");
  scanf("%d",&n);
  return n;
}
int sum_n(int n)
{
  int i,sum=0;
  for(i=0;i<n;i++)
  {
    sum=sum+i;
  }
  printf("sum of=%d\n",sum);
  return sum;
}
void output(int n,int sum)
{
  for(int i=0;i<n;i++)
  {
    printf("%d+",i);
  }
    printf("%d=%d",n,sum);
  }
  int main()
  {
    int a,b;
    a=input_n();
    b=sum_n(a);
    output(a,b);
    return 0;
  }