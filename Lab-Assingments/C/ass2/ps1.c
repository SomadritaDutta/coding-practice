#include<stdio.h>
int main(){
    int choice;
    float a, b, res;
    printf("Calculation\n");
    printf("1.Addition\n");
    printf("2.Substraction\n");
    printf("3.Multiplication\n");
    printf("4.Division\n");
    printf("Enter your choice:\n ");
    scanf("%d",&choice);
    printf("Enter two number of your choice: ");
    scanf("%f %f",&a,&b);
    switch (choice)
    {
    case 1:
        res = a+b;
        printf("%f",res);
        break;
    case 2:
        res = a-b;
        printf("%f",res);
        break;
    case 3:
        res = a*b;
        printf("%f",res);
        break;
    case 4:
        if(b!=0){
        res = a/b;
        printf("%f",res);
        }
        else{
            printf("Number cannot be divisible by zero.");
        }
        break;

    default:
        printf("Invalid");
        break;
    }
}
    