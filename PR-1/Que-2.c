#include <stdio.h>

int main() 
{
   
 float HRA,DA,TA,SALARY,grossSALARY;
 
   printf("ENTER YOUR SALARY : ");
   
 scanf("%f",&SALARY);

    HRA=SALARY*10/100;
  
  DA=SALARY*5/100;
 
   TA=SALARY*8/100;
  
  grossSALARY=SALARY+HRA+DA+TA;
 
   printf("%f\n",grossSALARY);
 
   return 0;

}
