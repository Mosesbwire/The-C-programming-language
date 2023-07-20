#include <stdio.h>

/* prints Celcius to Fahrenheit table */

int main(int argc, char **argv)
{
	float fahr, celcius;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	celcius = lower;

	printf("Celcius\tFahrenheit\n");
	while (celcius <= upper)
	{
		fahr = celcius * (9.0 / 5.0) + 32.0;
		printf("%3.0f\t%6.1f\n", celcius, fahr);
		celcius += step;
	}
	return (0);
}
