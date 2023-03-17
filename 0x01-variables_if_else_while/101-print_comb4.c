#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: This function will print the all combination of
 * Three digits without repeating the combination by using putchar
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int first;
	int second;
	int third;

	for (first = 0; first < 8; first++)
	{
		for (second = first + 1; second < 9; second++)
		{
			for (third = second + 1; third < 10; third++)
			{
				putchar(first + '0');
				putchar(second + '0');
				putchar(third + '0');
				if (first < 7 || second < 8 || third < 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
