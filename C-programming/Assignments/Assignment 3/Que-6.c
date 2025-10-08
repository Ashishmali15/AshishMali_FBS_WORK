void main() 
{
    int n = 28,i=1;
    int sum_of_divisors = 0;

    
    while (i < n) 
	{
        if (n % i == 0) 
		{
            sum_of_divisors += i;
        }
        i++;
    }

    
    if (sum_of_divisors == n) 
	{
        printf("%d is a Perfect Number.\n", n);
    } 
	else 
	{
        printf("%d is not a Perfect Number.\n", n);
    }

    
}