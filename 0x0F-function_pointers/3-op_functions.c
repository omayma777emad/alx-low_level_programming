#include<stdio.h>
#include"3-calc.h"

/**
 * op_add - add integers
 * op_sub - sub integers 
 * op_div - divided integers
 * op_mul - multiple integers
 * op_mod - module divition
*/

int op_add(int a, int b)
{
	return (a +b);
}
int op_sub(int a, int b)
{
	return (a - b);
}
int op_div(int a, int b)
{
	return (a / b);
}
int op_mul(int a, int b)
{
	return (a * b);
}
int op_mod(int a, int b)
{
	return (a % b);
}
