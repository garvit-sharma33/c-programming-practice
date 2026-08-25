#include <stdio.h>
int main(){
    int a,b,c;

    printf("Number a:");
    scanf("%d",&a);
    printf("Number b:");
    scanf("%d",&b);
    printf("Number c:");
    scanf("%d",&c);

    if(a==b && b==c){
        printf("All Three Numbers are equal");
    }

    else if( a==b && a > c){
        printf("Both a and b are equal and grater than c.");
    }

    else if( a==c && a > b){
        printf("Both a and c are equal and grater than b.");
    }

    else if( b==c && b > a){
        printf("Both a and c are equal and grater than b.");
    }

    else if(a>b && a>c){
        printf("a is grater");
    }

    else if(c>b && c>a){
        printf("c is grater");
    }

    else if(b>a && b>c){
        printf("b is grater");
    }
    return 0;
}