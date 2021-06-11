#include <stdio.h>
#include <stdlib.h>

int main()
{
  char x;
  scanf("%d",&x);
  if ((x>=0)&&(x<=49))
  {
      printf ("false");
  }
  else if((x>=50)&&(x<=64))
  {
           printf ("Pass");
  }
   else if((x>=65)&&(x<=74))
  {
           printf ("Good");
  }
   else if((x>=75)&&(x<=84))
  {
           printf ("Very.Good");
  }
  else if((x>=85)&&(x<=100)) // after change
  {
      printf("Excellent");
  }
  else
    printf("Enter a valid number from 1 to 100 ");
    return 0;
}
