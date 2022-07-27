#include <stdio.h>
int main(){
    double a,b;
    printf("Enter first number: ");
    scanf("%lf",&a);
    printf("Enter second number: ");
    scanf("%lf",&b);
    printf("What operation do you want to perform?\nEnter a number:\n\n1) Addition\n2) Subtraction\n3) Multiplication\n4) Division\n\nEnter your choice: ");
    int n;
    scanf("%d",&n);
    switch(n){
        case 1:
            printf("Addition is : %lf",a+b);
            break;
        case 2:
            printf("Subtraction is : %lf",a-b);
            break;
        case 3:
            printf("Multiplication is : %lf",a*b);
            break;
        case 4:
            if(b==0)printf("We do not allow division by zero, sorry.");
            else printf("Division is : %lf",a/b);
            break;
        default:
            printf("The number you entered is not a valid choice. Too high expectations from our lil calulator :(");
            break;
    }
    return 0;
}