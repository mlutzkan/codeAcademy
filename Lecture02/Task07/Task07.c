#include<stdio.h>

int main()
{
    int number;
    do{
        printf("Enter a number: ");
        scanf("%d", &number);
    }while(number<2||number>=12);
    printf("The number is: %d", number);


    return 0;
}
