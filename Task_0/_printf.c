#include "main.h"
#include <unistd.h>
#include <string.h>
#include <stdarg.h>

int _printf(const char *format, ...)
{
	char c;
    	char *string;
    	int length;
    	va_list ap;
    	va_start(ap, format);
    	if (format == "%s")
	{
        string = va_arg(ap, char *);
        length = strlen(string) + 1;
        return(write(1, string, length));
    	}
 	else if (format == "%c")
	{
        c = va_arg(ap, int);
        return(write(1, &c, 1));
    	}
	va_end(ap);
}
