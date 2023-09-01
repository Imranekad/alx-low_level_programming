#include "main.h"

/**
 * binary_to_unit - convert funcions
 * @b: char input
 * @result: insigned int
 *
 * Description: convert a binary to an unsigned intiger
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
