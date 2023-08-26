/**
 * _strcpy - funtion that copies the content of a str
 * @dest: address of the string destination
 * @src: address to copy from
 * Return: The address of the copy
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
