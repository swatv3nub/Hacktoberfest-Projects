//just learnt this yesterday along with the sum code. rest all is done by me with minimal help from net and mostly rest with trial and hit error.

#include <stdio.h>
#include <conio.h>

main()

{
  clrscr();  //to clear screen when executing program. must always be before first printf.
  printf("Obsidian Maximus's first project in C hehe\n");  // \n logic taken from py
  printf("\n");  //extra line space


  int c,d,e,f;
  float a,b,x;

  a =(float)15; //using casting in line 15 and 16.
  b =(float)7;  
  c = a+b;
  d = a-b;
  e = a*b;
  f = pow(a,b);
  x = a/b;

  printf("Value of a is : %.f\nValue of b is : %.f\n", a,b);
  printf("Addition of a and b = %d\n", c);
  printf("Subtraction of b from a = %d\n", d);
  printf("Multiplication of a with b = %d\n", e);
  printf("Raising a to the power of b = %d\n", f);
  printf("Dividing a by b in float = %.4f\n", x);  // %.4f denotes taking float number upto 4 decimal places.


}
