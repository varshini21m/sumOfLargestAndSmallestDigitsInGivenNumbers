//****
How to attempt? Question :

Find Key:

You are provided with 3 numbers: input1, input2 and input3. Each of these are four digit numbers within the range >=1000 and <=9999.

i.e.

1000 <=input1 <=9999

1000<input2 <= 9999

1000<input3 <= 9999

You are expected to find the Key using the below formula -

Key = (Sum of Largest digits of all the 3 numbers)+ (Sum of Smallest digits of all the 3 numbers) For e..g. if input1 = 3521, Input2-2452, Input3-1352, then Key = (5+5+5)+(1+2+1) 19

Assuming that the 3 numbers are passed to the given function, Complete the function to find

and return the Key.
*****//

//******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
   
    int num,key,remider,max=0,i,min=0;
    for(i=0;i<3;i++){
        int Largest= 0,smallest=9; 
        printf ("Enter the Number :");
        scanf ("%d", &num);
        while (num > 0)
        {
            remider = num % 10;
            if (Largest < remider)
            {
                Largest = remider;
            }
           if(smallest>remider)
           {
               smallest=remider;
               }
               num = num / 10;
            
        }
        max=max+Largest;
        min=min+smallest;
        
    }
    printf("sum of all largest digit in given numbers =%d\n",max);
    printf("sum of all smallest digit in given numbers=%d\n",min);
    key=max+min;
    printf("sum of largest and smallest digit %d",key);
}