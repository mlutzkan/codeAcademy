#include<stdio.h>

int main()
{
    int oz;
    int glasses;

    printf("How many ounces of lager would you like, mate? ");
    scanf("%d", &oz);

    glasses=oz/8;

    //leaving it as an integer on purpose as no bartender would serve one third of a glass
    printf("*British bartender pouring %d glasses of beer*", glasses);


    return 0;
}
