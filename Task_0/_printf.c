#include "main.h"
#include <stdarg.h>

/* print a character */

int _printf(const char *format, ...)
{
	char c;
    	va_list ap;
    	va_start(ap, format);

    	if (format == "%c")
	{
		c = va_arg(ap, char);
		return (write(1, c, 1));
	}
	va_end(ap);
}
	
/* print a string */
		
 int _printf(const char *format, ...)
 {
	 char *str = va_arg(ap, char *);
	 
	 int length = 0;
	 
	 while (str[length] != '\0')
		 length++;
	 	 
	 if (format == "%s")
	 {
		 length = _strlen(str) + 1;
		 return (write(1, str, 1));
	 }
 }
