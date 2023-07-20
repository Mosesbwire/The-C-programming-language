#include <stdio.h>

/* prints Fahrenheit to celcius table */

int main(int argc, char **argv)
{
	float fahr, celcius;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	fahr = lower;

	printf("Fahrenheit\tCelcius\n");
	while (fahr <= upper)
	{
		celcius = 5.0 * (fahr - 32.0) / 9.0;
		printf("%3.0f\t\t%6.1f\n", fahr, celcius);
		fahr += step;
	}
	return (0);
}
