#include <stdio.h>
int main() {
    int number = 50;
    int guess;
    int attempt = 0;

    do
    {
        printf("Enter your guess number:");
        scanf("%d",&guess);
        attempt++;

        if (guess < number){
            printf("Too Low!\n");
        }

        else if (guess > number){
            printf("Too High!\n");
        }

        else{
            printf("Correct!!\n");
        }
    } while (guess != number);

    printf("Attempts: %d",attempt);
    
    return 0;
}