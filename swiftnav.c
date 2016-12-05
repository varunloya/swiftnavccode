/*For this test there are overlapping condition.
3 and 5 are prime number and also they are divisible by itself.
So the code can print either BuzzFizz or it can print Buzz or Fizz,
for 3 and 5 respectively. I am printing the prime number condition (BuzzFizz) instead of printing 3 and 5 as Buzz or Fizz
Used long long for big numbers of fibonacci series*/
#include<assert.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>

void FizzBuzz();
int prime();
int main()
{
	
	unsigned long long next;
	unsigned long long n; 
	unsigned long long first = 0; 
	unsigned long long second = 1; 
	unsigned long long c;
 	printf("Enter the number\n");
	scanf("%d",&n);
 	printf("First %d terms of Fibonacci series are:\n",n)

	for ( c = 0 ; c < n ; c++ )  // 0 is divisible by 3,5 and 15 and is not a prime number. So for 0 case I am writing the divisibility test for 15.
   	{
      if ( c <= 1 )
        {
		  next = c;
		}
      else
      {
         next = first + second;
         first = second;
         second = next;
      }
      assert(next>=0); 
      FizzBuzz(next);

	}	
    getch();
	return 0;
}

void FizzBuzz(unsigned long long x)
{
		
		assert(x>=0); 
	if(x%3==0 && x%5==0)
	  		{
	  			printf("FizzBuzz\n");
	  		}
	else if(prime(x))
 			{
 				printf("BuzzFizz\n");
	 		}
	else if(x%3==0)
      		{
      			printf("Buzz\n");
	  		}
   	else if(x%5==0)
   			{
   				printf("Fizz\n");
			}
 		else
			{
	
				printf("%d\n",x);
			}
			
	return;	
	
}

int prime(n)
{
	unsigned long long x,a;
	x=floor(sqrt(n));
	if(n<2)
		{
			return 0;
		}
	if(n==2)
		{
			return 1;
		}
	else if(n%2==0)
		{
			return 0;
		}
	else
		{
			for (a=3;a<=x;a=a+2) 
			{
        		if (n%a==0) 
				{
           			return 0;
        		}
        		
 			}
      	return 1;
					
		}
}
