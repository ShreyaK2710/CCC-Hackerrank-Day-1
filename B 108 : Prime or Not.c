#include <stdio.h> 
int main()
{
    int number, is_prime = 1, i;
    scanf("%d", &number);
    for(i=2; i<number; i++)
        if(number%i==0)            
            is_prime = 0;    
    if(number < 2) 
        is_prime = 0;
    if (is_prime == 1) 
        printf("yes");
    if (is_prime == 0) 
        printf("no");
    return 0;
}
