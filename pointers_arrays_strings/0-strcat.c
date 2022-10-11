#include "main.h"
int _strlen(char *s);
char *_strcat(char *dest, char *src)
{
int i = 0;  /*contador para la copia*/
	int j = 0; /* contador para el source*/
		  
	char *aux = dest; /* variable auxiliar con el valor de dest para el return*/
        char *aux2 = src; /*variable aux para el puntero de src ( para la copia) */

	while (*dest) /* while para printear el content de dest */
		dest++;
	while (*src++) /* while para printear el content de src */
		j++;
	while (i < j) /* while de la copia a partir del inicio de src con su puntero para copiar el valor de src a traves de aux 2 hacia dest*/
	{
		*dest++ = *aux2++; 
		i++;
	}
	*dest = '\0'; 
	return (aux); 
}      	
