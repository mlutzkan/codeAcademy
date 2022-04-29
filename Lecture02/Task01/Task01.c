#include<stdio.h>

int main()
{
    float weight;
    printf("Enter your weight in kg: ");
    scanf("%f", &weight);
    float moon_weight=weight*0.17;

    printf("Your weight on the moon would be %f", moon_weight);



    return 0;
}
