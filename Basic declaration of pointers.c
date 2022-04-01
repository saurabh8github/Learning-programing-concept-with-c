/* program to show the basic declaration of pointer*/
#include<stdio.h>
void main(void)
{ int m=10,n,0;
  int*z=&m;
printf("\n\nPointer: show the basic declarrationn of pointer");
printf("\n_____________________________________________________\n");
printf("Here is m=10,n and 0 are two integer variable and *z is an integer");
printf("\n\nz stores the address of m=%p\n",z);
printf("\n&m is the address of m=%p\n",&m);
printf("\n&nstores the address of n=%p\n",&n);
printf("\n&0 stres the address of 0=%p\n",&0);
printf("\n&z stores the address of z =%p\n\n",&z);
}