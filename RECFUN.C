#include<stdio.h>
#include<conio.h>
int fact(int n);
void main()
{

  int n;

  clrscr();

  printf("\n\n\n\t Enter the value to get favtorial : ") ;
  scanf("%d",&n);
  printf("\n\tfatc : %ld",fact(n));

 getch();

}

int fact (int n )
{
   if(n!=1)
   {
     return n*fact(n-1);

   }

}