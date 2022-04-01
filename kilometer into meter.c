/*program to convert killometer into meter
programer- Saurabh Kumar Bharti
Date-3/12/2021*/
 #include<stdio.h>
 int main(){
            float km,m,cm,ft,inch;                    //variable declaration
            printf("ENTER DISTANCE IN KILOMETER:");  
            scanf("%f",&km);
            m = km * 1000;
            cm=m*100;
            inch=cm/2.5;
            ft=inch/12;
            printf("THE DISTANCE IN METER IS:%f\n",m);
            printf("THE DISTANCE IN CENTIMETER IS:%f\n",cm);
            printf("THE DISTANCE IN INCH IS:%f\n",inch);
            printf("THE DISTANCE IN FEET IS:%f\n",ft);
            return 0;

            }