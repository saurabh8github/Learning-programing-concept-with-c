/*simple intrest data enterd by user
 programer-Saurabh kumar Bharti
Date-3/12/2021*/
#include<stdio.h>
int main(){ 
            int p,n;   //variable declaration
            float r,si;
            printf("ENTER THE PRINCIPAL VALUE: ");
            scanf("%d",p);                           //geting input from the user 
            printf("ENTER TIME : ");
            scanf("%d",n);
            printf("ENTER THE RATE VALUE: ");
            scanf("%f",r);

         /*formula for simple intrest*/
            
            si=p*n*r/100;
            printf("THE VALUE OF SIMPLE INTREST IS:%d",si);
            return 0;
           }

/*abow program is to lengthy and a littel bit of complex so we can use another way of geting simple intrest */



#include<stdio.h>
int main(){  
            int p,n; float r,si;
            printf("ENTER VALUE OF P,N,R");
            scanf("%d%d%f",&p,&n,&r);
            si=p*n*r/100;
            printf("the simple intrest is %f\n",si);
            return 0;
           }
          