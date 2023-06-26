/**
 * swap_int - swapping pointer
 * @a:input1
 * @b:input2
 */
void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
