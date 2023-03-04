#include<stdio.h>
int main()
{
int a=5,b=6,c,d,e,f,g;
c = a&b;
d = a|b;
e = a^b;
f = a>>b;
g = a<<b;
printf("Binary and :%d\nBinary or:%d\nBinary Xor:%d\nBinary rightshift:%d\nBinary leftshift:%d\n",c,d,e,f,g);
}
