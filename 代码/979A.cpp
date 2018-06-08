#include <stdio.h>

//计算某一个较大数据时，
//由于python和matlab在高位上得不到客观正确结果
//故采用c语言编写，题目特别简单。
int main()
{
  long long int n;
  scanf("%lld",&n);
  if((n+1)%2==0&&n!=0)
  {
    printf("%lld",(n+1)/2);
  }
  if((n+1)%2==1&&n!=0)
  {
    printf("%lld",(n+1));
  }
  if(n==0)
  {
    printf("0");
  }
  return 0;
}
