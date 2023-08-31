#include "main.h"

/**
 * binary_to_uint - converts a binary number to an
 * unsigned int.
 * @b: binary.
 *
 * Return: unsigned int.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int sf;
	int def, base_two;

	if (!b)
		return (0);

	sf = 0;

	for (def = 0; b[def] != '\0'; def++)
		;

	for (def--, base_two = 1; def >= 0; def--, base_two *= 2)
	{
		if (b[def] != '0' && b[def] != '1')
		{
			return (0);
		}

		if (b[def] & 1)
		{
			sf += base_two;
		}
	}

	return (sf);
}
