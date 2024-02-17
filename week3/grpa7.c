#include <stdio.h>
int main() 
{
    // Initialize required Variables
    double wPackage;
    double shipRate;

    // Read Inputs: weight of the package (in kilograms) and shipping rate
    scanf("%lf", &wPackage);
    scanf("%lf", &shipRate);

    // Calculate the shipping cost
    double shipCost = wPackage*shipRate;

    // Print the shipping cost as double upto two decimal point
    printf("%.2lf", shipCost);

    return 0;
}