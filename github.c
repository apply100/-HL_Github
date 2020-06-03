#include<stdio.h>

int main(){
  int a,b;
  printf("hello world");
  
  printf("숫자두개 입력 : ");
  scanf("%d%d",&a,&b);
  
  printf("%d+%d=%d",a,b,a+b);
  printf("%d-%d=%d",a,b,a-b);
  printf("%d/%d=%d",a,b,a/b);
  printf("%d%%d=%d",a,b,a%b);

  printf("%d*%d=%d",a,b,a*b);
}