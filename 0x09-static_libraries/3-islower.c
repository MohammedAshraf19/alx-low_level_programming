/**
* _islower - writes the integer 1 or 0 to stdout
* @c: The integer to check
*
* Return: On success 1.
* On error, -1 is returned, and errno is set appropriately.
*/
int _islower(int c)
{
		if (c >= 'a' && c <= 'z')
			return (1);
		else
			return (0);
}
