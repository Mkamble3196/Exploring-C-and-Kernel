#include <stdio.h>

int main(void)
{
        double m1 = 0.0;  /* Variable to store the mass of object 1 in kgs */
        double m2 = 0.0;  /* Variable to store the mass of object 2 i kgs */
        double r = 0.0;   /* Variable to store the distance between the object*/
        double G = 6.67e-11; /* 6.67 X 10^-11 the universal constant of gravity*/
        double F = 0.0; /* Variable to store the value of gravitational force */
        
        printf("Enter Mass of object 1 in kgs: ");
        scanf("%lf",&m1);

        printf("Enter mass of object 2 in kgs:");
        scanf("%lf", &m2);
        printf("Enter distance between the objects in meters:");
        scanf("%lf", &r);

        F = (G * m1 * m2) / (r * r);

        printf("The gravitational force between two objects = %.12lf Netwons\n",F);


return(0);
}
