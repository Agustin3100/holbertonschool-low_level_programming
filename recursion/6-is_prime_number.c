int is_prime_number(int n)
{    if(n == 0)
   {	return 0;
	return is_prime_number(n -1);
   }
if(n % 1 == 0)
{   return 1;	
}

}
