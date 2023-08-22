#include <unistd.h>
#include "main.h"

/**
 *  _putchar - writes the character C to stdout
 *  @C: The character to print
 *
 *  Return: on Success 1.
 *          on error, -1 is returned, and errno is set appropiately.
*/
int  _putchar(char C)
{
	return (write(1, &C, 1));
}
