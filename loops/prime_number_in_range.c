#include <stdio.h>
int main(){
    int a,b;
    

    printf("Starting Number:");
    scanf("%d",&a);
    printf("Ending Number:");
    scanf("%d",&b);

    for (int i = a; i <= b; i++)
    {
        if (i < 2){
            continue;
        }
        int isPrime = 1;

        for (int j = 2; j * j <= i; j++)
        {
            if (i % j == 0)
            {
                isPrime = 0;
                break;
            }


        }

        if (isPrime == 1)
        {
            printf("%d ",i);
        }
        
    }
    
    
    return 0;
}