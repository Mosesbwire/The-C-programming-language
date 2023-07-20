#include <stdio.h>

/* print fahr to celcius conversion table in reverse */

int main(int argc, char **argv)
{
	float fahr, celcius;
	
	printf("Fahrenheit\tCelcius\n");
	for (fahr = 300; fahr >= 0; fahr -= 20)
	{
		celcius = 5.0 * (fahr - 32.0) / 9.0;
		printf("%3.0f\t\t%6.1f\n", fahr, celcius);

	}

	return (0);
}
