#include<stdio.h>

int main()
{
    int num1;
    int num2;
    int num3;

    printf("Enter a number:");
    scanf("%d", &num1);

    printf("Enter a second number:");
    scanf("%d", &num2);

    printf("Enter a third number:");
    scanf("%d", &num3);

    printf("You entered %d, %d and %d\n", num1, num2, num3);

    int min;
    int mid;
    int max;


// finding the lowest number
    if(num1<num2 && num1<num3)
    {
        min=num1;
    }

    if(num2<num1 && num2<num3)
    {
        min=num2;
    }

    if(num3<num1 && num3<num2)
    {
        min=num3;
    }


//finding the  highest number

 if(num1>num2 && num1>num3)
    {
        max=num1;
    }

    if(num2>num1 && num2>num3)
    {
        max=num2;
    }

    if(num3>num1 && num3>num2)
    {
        max=num3;
    }

//finding the middle number
if(num1!=min && num1!=max)
{
    mid=num1;
}

if(num2!=min && num2!=max)
{
    mid=num2;
}

if(num3!=min && num3!=max)
{
    mid=num3;
}

printf("Order (lowest to highest): %d, %d, %d", min, mid, max);



    return 0;
}
