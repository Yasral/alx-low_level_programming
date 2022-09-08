#include <stdio.h>
#include <string.h>
/**
 * main - main block
 * Return: 1
 */
int main(void)
{
	char msg[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	fwrite(msg, (sizeof(char) * strlen(msg)), 1, stderr);
	return (1);
}
