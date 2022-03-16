#include <unistd.h>
main.h
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int main(void)
{
	char name[10] = "_putchar";

	putchar(name);
	return (0);
}
