#include <stdio.h>
int main(){
    float a,b,c;

    printf("Enter the first side:");
    scanf("%f",&a);
    printf("Enter the second side:");
    scanf("%f",&b);
    printf("Enter the third side:");
    scanf("%f",&c);

    if( a+b > c && b+c > a && a+c > b){

        if(a==b && b==c && a==c){
        printf("Equilateral traingle");
    }

    else if(a==b || b==c || a==c){
        printf("Isoceles traingle");
    }
    
    else{
        printf("Scalene Traingle");
    }
         
    }

    else{
        printf("Invalid Traingle");
    }

    

   



    return 0;
}
