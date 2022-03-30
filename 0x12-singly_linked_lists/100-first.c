#include <stdio.h>
/**
 * devolver - prints from init by the loader before main
 */
void devolver(void) __attribute__ ((constructor));
void devolver(void)
{
printf("You're beat! and yet, you must allow,\n");
printf("I bore my house upon my back!\n");
}
