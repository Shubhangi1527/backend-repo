#include<stdio.h>
int main()

{
  int a,b,c;

  printf("enter two angle of the triangle");
  scanf("%d%d",&a,&b);

  c=180-(a+b);

  printf("third angle of the triangle=%d",c);
}
