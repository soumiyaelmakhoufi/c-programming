#include <stdio.h>
int main()  {
  int a,b,c;
  printf("veuillez entrer la valeur de a:\n ");
  scanf("%d",&a);
  printf("veuillez entrer la valeur de b:\n");
  scanf("%d",&b);
  c=a;
  a=b;
  b=c;
  
  printf("a=%d\n",a);
  printf("b=%d\n",b);
  return 0;
}
  
