#include<stdio.h>

int main()
{
    float earth_years;
    float jupiter_years;

    printf("Enter the amount of Earth years to convert: ");
    scanf("%f", &earth_years);
    jupiter_years=earth_years/12;

    printf("%f Earth years would be equal to %f years on Jupiter.", earth_years, jupiter_years);


    return 0;
}
