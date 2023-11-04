#include "main.h"
#include <stdarg.h>

/**
 * error_handler - handles errors
 * @exit_code: exit variable
 * @message: function to provide error message
 * @type: format for data type 
 *
 */

void error_handler(int exit_code, char *message, char type, ...)
{
	va_list args;

	va_start(args, type);
	if (type == 's')
		dprintf(STDERR_FILENO, message, va_arg(args, char *));
	else if (type == 'd')
		dprintf(STDERR_FILENO, message, va_arg(args, int));
	else if (type == 'N')
		dprintf(STDERR_FILENO, message, "");
	else
		dprintf(STDERR_FILENO, "Error: Type does not have any match\n");
	va_end(args);
	exit(exit_code);
}
