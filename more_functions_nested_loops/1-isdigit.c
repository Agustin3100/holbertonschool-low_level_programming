int _isdigit(int c)
{
   if ( c >= 'a' && c <= 'z')
   {    return (0);
   		   
   }
else if (c >= 'A' && c <= 'Z')
{
return (0);
}
else if(c >= 36 && c <= 136)
{	return(1);
}
else if (c >= 0 || c <= 9)
{
return (1);
}

else
{ return (0);


}
}
