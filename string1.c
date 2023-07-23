#include "shell.h"
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	if (dest == src || src == 0)
		return (dest);
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}
char *_strdup(const char *str)
{
	int lenght = 0;
	char *ret;

	if (str == NULL)
		return (NULL);
	while (*str++)
		lenght++;
	ret = malloc(sizeof(char) * (lenght + 1));
	if (!ret)
		return (NULL);
	for (lenght++; lenght--;)
		ret[lenght] = *--str;
	return (ret);
}
void _puts(char *str)
{
	int i = 0;

	if (!str)
		return;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
}
int _putchar(char c)
{
	static int i;
	static char buf[WRITE_BUF_SIZE];

	if (c == BUF_FLUSH || i >= WRITE_BUF_SIZE)
	{
		write(1, buf, i);
		i = 0;
	}
	if (c != BUF_FLUSH)
		buf[i++] = c;
	return (1);
}
