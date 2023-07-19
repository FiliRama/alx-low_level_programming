#include "3-calc.h"

/**
 * op_add - adds a and b
 * @a: input number 1
 * @b: input  number 2
 * Return: sum
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts a and b
 * @a: input number 1
 * @b: input  number 2
 * Return: difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - product of a and b
 * @a: input number 1
 * @b: input  number 2
 * Return: Multplication
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides a by b
 * @a: input number
 * @b: input  number
 * Return: division
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - modulus of a by b
 * @a: input number 1
 * @b: input  number 2
 * Return: returns the remainder of the division
 */
int op_mod(int a, int b)
{
	return (a % b);
}
