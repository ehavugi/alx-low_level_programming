#include <stdio.h>
void greet_main(void) __attribute__((constructor));

/**
 * greet_main - print text before main function execution
 *
 * Return: void
 */
void greet_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
