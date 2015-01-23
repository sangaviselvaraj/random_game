#include<stdio.h>
void main()
{
int n,a,x;
a=rand()%100;
for(x=1;x<=5;x++)
{
printf("please guess the random number generated: ");
scanf("%d",&n);
if(a<n)
{
printf("the number you have guessed is greater than the generated number,please guess again: ");
}
else
if(a>n)
{
printf("the number you have guessed is less than the generated number ,please guess again: ");
}
else
printf("bingo!!!, you have got the right answer !!!");
}
printf("the right answer is :%d", a);
}


