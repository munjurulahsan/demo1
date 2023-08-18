#include<stdio.h>
int main(){
    int number1,number2;
    printf("Enter the value of Number1 :");
    scanf("%d",&number1);
    printf("Enter the value of Number2 :");
    scanf("%d",&number2);
    printf("Before Swapping Number: %d %d\n",number1,number2);

    //Swapping version 2
    number1=number1+number2;
    number2=number1-number2;
    number1=number1-number2;
    printf("After swapping: %d %d",number1,number2);
    return 0;
}