/**
 * *_strcat - copies a string
 * @dest: dest pointer for example
 * @src: src pointer fox example
 *
 * Description: updates value of pointer
 * Return: destination string (success)
 */
#include "main.h"

char *_strcat(char *dest, char *src)
{
int i = 0;  /*contador para la copia*/
	int j = 0; /* contador para el source*/

	char *aux = dest; /* puntero auxiliar con el valor de dest para el return*/
	char *aux2 = src;
	/* puntero aux para el puntero de src */
	while (*dest) /* while para printear el content de dest */
		dest++;
	while (*src++) /* while para printear el content de src */
		j++;
	while (i < j) /* while de la copia a partir de src
*/
	{
		*dest++ = *aux2++;
		i++;
	}
	*dest = '\0';
	return (aux);
}
