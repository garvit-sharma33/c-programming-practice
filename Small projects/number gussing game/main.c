#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0));              // Seed the random number generator

    int random = rand() % 100 + 1; // Random number between 1 and 100

    int gussed_number;
    int no_of_gusses = 0;

    do
    {
        printf("Enter Your Number:");
        scanf("%d",&gussed_number);
        

        if(gussed_number > random){
            printf("Enter Lower Number!\n");
        }
        else if(gussed_number < random){
            printf("Enter Higher Number!\n");
        }
        else{
            printf("Congrats!!");
        }
        no_of_gusses++;

        } while (gussed_number != random);

        printf("\nYour Won This game in %d chance\n",no_of_gusses);
    

    return 0;
}