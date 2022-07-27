#include <stdio.h>
int main(){
    double a,b;
    printf("Enter first number: ");
    scanf("%lf",&a);
    printf("Enter second number: ");
    scanf("%lf",&b);
    printf("What operation do you want to perform?\nEnter a number:\n\n1) Addition\n2)Subtraction\n3)Multiplication\n4)Division\n\nEnter your choice: ");
    int n;
    scanf("%d",&n);
    return 0;
}