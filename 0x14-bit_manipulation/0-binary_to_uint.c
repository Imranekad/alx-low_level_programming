#include "main.h"

/**
 * binary_to_unit - convert a binary string to an unsigned int.
 * @b: pointer to the binary string.
 *
 * Return: the converted number or 0 for errors
 * Description: the function convert a binary string to an unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	if (b == NULL)
		return (0);

	unsigned int result = 0;

	for (int i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		result <<= 1;

		if (b[i] == '1')
			result += 1;
	}
	return (result);
}
