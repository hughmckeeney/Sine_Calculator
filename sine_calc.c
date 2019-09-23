//Written by Hugh Mc Keeney 


//calculating sine using a formula and comparing it with the result of the math library

#include <stdio.h>
#include <math.h>

double sin(double y);


int main(void)
{
	double y,sine,diff;
	
	printf("Enter a number in radians\n");
	scanf("%lf", &y);
	
	sine = sin(y);
	double s = sin(y);
	
	diff = sine - s;
	
	printf("The value of sine using my function is: %lf\n", s);
	printf("The value of sine using the sine function in the math library is: %lf\n",sine);
	printf("The difference in the two values is: %lf\n", diff);
	return 0;
}

double sin(double y)
{
	double s,z,f,fact;
	int n,a;
	
	z = 0;
	s = 0;
	fact = 1;
	
	for(n = 0; n<=100; n++)
	{   
		fact = 1;
		f = (2*n) + 1;
		
		for (a = 1; a <= f; a++)
			{
				fact = fact * a;
			}
		
		z = (pow(-1,n))*(pow(y,((2*n)+1)))/fact;
		s =s+z;	
	}
	
	return s;
	
}