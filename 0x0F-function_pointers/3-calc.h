#ifndef CALC_H
#define CALC_H

/**
 * Struct op - A structure to define an operation.
 * @op: The Operator as a string
 * @f: The associated function
 * @Struct op: A structure that defines operations
 * where op is the operator symbol
 *
 */

typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
int (*get_op_func(char *s))(int, int);

#endif
