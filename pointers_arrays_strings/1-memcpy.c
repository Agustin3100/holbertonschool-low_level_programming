/**
 * *_memcpy -  copies an area of memory
 * @src: char pointer variable for examle
 * @dest: char pointer for example
 * @n: unsigned int
 *
 * Description: printz numberz
 * Return: value of dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	unsigned int q = 0;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[q];
		q++;
	}
	return (dest);
}
