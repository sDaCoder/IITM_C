#include <stdio.h>

int main() 
{	
    //Initialize other required variables
    int age;
    int gender;
    double wt;
    double ht;
    double aFac;

    // Read inputs: age, gender, weight, height and activity factor
    scanf("%d", &age);
    scanf("%d", &gender);
    scanf("%lf", &wt);
    scanf("%lf", &ht);
    scanf("%lf", &aFac);

    // Calculate the recommended daily calorie intake
    double cal;
    if (gender == 1)
    {
        // Write the male calorie intake expression
        // Calories=(88.362+(13.397×weight in kg)+(4.799×height in cm)−(5.677×age in years))×activity factor
        cal = (88.362 + (13.397*wt) + (4.799*ht) - (5.677*age))*aFac;
    }
    if (gender == 2) 
    {
        // Write the female calorie intake expression
        // Calories=(447.593+(9.247×weight in kg)+(3.098×height in cm)−(4.330×age in years))×activity factor
        cal = (447.593 + (9.247*wt) + (3.098*ht) - (4.330*age))*aFac;
        
    }
	// Print the output up to two decimal point
    printf("%.2lf", cal);

    return 0;
}