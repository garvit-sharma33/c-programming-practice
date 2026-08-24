#include <stdio.h>
int main(){
    int a;
    printf("Enter Your Number:");

    // for input
    scanf("%d",&a);

    if(a % 2 == 0){
        printf("The Number %d is Even Number.",a);
    }
    else{
        printf("The Number %d is Odd Number.",a);
    }
    return 0;
}
