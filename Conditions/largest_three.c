#include <stdio.h>
int main(){
    int a,b,c;
    printf("Enter your first number:");
    scanf("%d",&a);
    printf("Enter your second number:");
    scanf("%d",&b);
    printf("Enter your third number:");
    scanf("%d",&c);

    if(a>b && a>c){
        printf("The gretest number is %d",a);
    }
    else if(b>a && b>c){
        printf("The gretest number is %d",b);
    }
    else{
        printf("The gretes number is %d",c);
    }

    return 0;
}