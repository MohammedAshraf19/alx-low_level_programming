/**
* _isalpha - check is char letter or not if letter return 1 not return 0
* @c: The integer to check
*
* Return: On success 1.
*/
int _isalpha(int c)
{
		if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
			return (1);
		else
			return (0);
}
