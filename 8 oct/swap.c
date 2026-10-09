#include <stdio.h>
int main()
{
int a=0;
int b=0;
scanf("%d", &a);
scanf("%d", &b);
int tmp=0;
tmp=a;
a=b;
b=tmp;
printf("%d %d\n", a, b);
return 0;
}
