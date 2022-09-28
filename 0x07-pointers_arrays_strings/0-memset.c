#include "main.h"
<<<<<<< HEAD

/**

 * _memset - fills memory with a constant byte,

 * @s: memory area.

 * @b: constant byte.

 * @n: bytes filled.

 * Return: the pointer to dest.

 */

char *_memset(char *s, char b, unsigned int n)

{

	unsigned int i;



	for (i = 0; i < n; i++)

		*(s + i) =  b;



	return (s);

}

=======
/**
 * _memset - fills memory with a constant byte,
 * @s: memory area.
 * @b: constant byte.
 * @n: bytes filled.
 * Return: the pointer to dest.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(s + i) =  b;

	return (s);
}
>>>>>>> 04e464a1349ee4ad7be15fbb698fcd6a31401ffd
