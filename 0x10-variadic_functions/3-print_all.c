#include "variadic_functions.h"
/**
 *
 *
 *
 *
 */
void print_all(const char * const format, ...)
{
va_list parametr;
int i = 0, j, k = 0;
char *str;
const char compara[] = "cift";

va_start(parametr, format);

while (format && format[i])
{
j = 0;
while (compara[j])
{
if (format[i] == compara[j] && k)
{
printf(", ");
break;
} j++;
}
switch (format[i])
{
case 'c':
printf("%c", va_arg(parametr, int)), k = 1;
break;
case 'i':
printf("%d", va_arg(parametr, int)), k = 1;
break;
case 'f':
printf("%f", va_arg(parametr, double)), k = 1;
break;
case 's':
str = va_arg(parametr, char *), k = 1;
if (!str)
{
printf("(nil)");
break;
}
printf("%s", str);
break;
} i++;
}
printf("\n"), va_end(parametr);
}
