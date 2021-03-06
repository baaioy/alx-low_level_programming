#include "main.h"
#include <stdio.h>

/**
 * print_diagsums -  prints the sum of the two
 * diagonals of a square matrix of integers
 *
 * @a: input pointer to array
 * @size: size of the array
 *
 * Return: nothing
 */
void print_diagsums(int *a, int size)
{
/*
*	unsigned int i, j, sum1 = 0, sum2 = 0, s = size;
*
*	for (i = 0; i < size; i++)
*	{
*		for (j = 0; j < size; j++)
*		{
*			if (i == j)
*			{
*				sum1 += *(*(a + i) + j);
*			}
*			if (s % j == 1)
*			{
*				sum2 += *(*(a + i) + j);
*				s--;
*			}
*		}
*	}
*	printf("%u, %u\n", sum1, sum2);
*/
	int i = 0;
	int j = size - 1;
	int sum1 = 0;
	int sum2 = 0;

	while (i <= (size * size))
	{
		sum1 = sum1 + a[i];
		i = i + size + 1;
	}

	while (j < (size * size - 1))
	{
		sum2 += a[j];
		j = j + size - 1;
	}

	printf("%d, %d\n", sum1, sum2);
}
