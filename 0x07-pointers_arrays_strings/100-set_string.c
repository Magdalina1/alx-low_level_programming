# include "main.h"

/**
 * set_string - sets the value of a pointer to a char.
 * @s: the string to change the value.
 * @to: the value
 */

void set_string(char **s, char *to)
{
	*s = to;
}
