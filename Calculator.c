// Build a C programme of Simple calculator 
#include<stdio.h>
float result;

    float addition(float number1,float number2)
    {
        result=number1+number2;
        return result;
    }
    float subtraction(float number1,float number2)
    {
        result=number1-number2;
        return result;
    }
    float multipication(float number1,float number2)
    {
        result=number1*number2;
        return result;
    }
    float division(float number1,float number2)
    {
        result=number1/number2;
        return result;
    }
int main()
{
    int choise;
    float number1,number2,result;
    printf("1.Addition\n2.Substraction\n3.Multiplication\n4.Divition\nEnter your Choice: ");
    scanf("%d",&choise);
    printf("Enter the first number: ");
    scanf("%f",&number1);
    printf("Enter the second number: ");
    scanf("%f",&number2);
    switch (choise)
    {
    case 1:
        result=addition(number1,number2);
        printf("Addition is: %.3f ",result);
        break;
    case 2:
        result=subtraction(number1,number2);
        printf("Subtraction is: %.3f ",result);
        break;
    case 3:
        result=multipication(number1,number2);
        printf("Multiplication is: %.3f ",result);
        break;
    case 4:
        result=division(number1,number2);
        printf("Division is: %.3f ",result);
        break;
    
    default:
        printf("Wrong choice! Enter a valid choice");
        break;
    }

    return 0;
}