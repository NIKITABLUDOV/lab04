#include <stdio.h>
int main()
{ int a,b,c,e,e2,e3,e4,e5,g,g2,g3,g4,g5,a1,b1;
    printf("введите число=");    
scanf("%d",&c);
    a = c/1000;
    b = c%1000;
    printf("Ліва частина = %d\n", a);
    printf("Права частина = %d\n", b);
{e = a%10;
e2 = a/10;
e3 = e2%10;
e4 = a/100;
e5 = e4%10;
a1 = e + e3 + e5;}
{g = b%10;
g2 = b/10;
g3 = g2%10;
g4 = b/100;
g5 = g4%10;
b1 = g + g3 + g5;}
    if(a1 == b1){
    printf("Білет є счастливим!");}
    if(a1 != b1){
    printf("Білет не є счастливим!");}
return 0; }
