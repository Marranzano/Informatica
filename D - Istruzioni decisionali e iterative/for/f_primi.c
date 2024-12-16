#include <stdio.h>
#define Nrprimi 100
int main()
{
    int num, div, num_primo;
    for(num = 2; num <= Nrprimi; num++) 
    {
        num_primo = 1;  
        
        for(div = 2; div * div <= num; div++) 
        {
            if(num % div == 0)  
            {
                num_primo = 0; 
            }
        }
        
        if(num_primo)  
        {
            printf("%d \n", num);
        }
    }
    
    return 0;
}