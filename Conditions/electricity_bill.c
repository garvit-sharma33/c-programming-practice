#include <stdio.h>
int main(){
    int units;
    float total;

    printf("Enter your units:\n");
    scanf("%d",&units);

    if(units < 0){
        total = 0;
        
    }
    else if(units >= 0 && units <+ 100){
        total = units * 5;
        
    }
    else if(units > 100 && units <= 200){
        total =  (5 * 100) + 7 * (units - 100);
        
    }
    else {
        total = (5 * 100) + (7 * 100) + (10 * (units - 200));
        
    }
    printf("Your Bill: %.2f",total);
    return 0;
}