/**
 * reverse_array - reverse an int array
 * @a: pointer for example 
 * @n: int representing the numbers of elemnts of the array
 *
 * Description: prints numberz
 * Return: void (nothing)
 */
void reverse_array(int *a, int n)
{
   
  
   int i, temp;
   
   
  for( i = 0; i < n -1; i++)
  {
        temp = a[n - 1];
	a[n -1] = a[i];
	a[i] = temp;
        n--;
  }
  	

}  
