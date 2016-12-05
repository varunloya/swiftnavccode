#include<stdio.h>
#include<conio.h>
int FizzBuzz();
int prime();
int main(){
	int next;
	int n, first = 0, second = 1, c;
 	printf("Enter the number\n");
	scanf("%d",&n);
 	printf("First %d terms of Fibonacci series are:\n",n);
 	for ( c = 0 ; c < n ; c++ )
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
      FizzBuzz(next);
	}	
    getch();
	return 0;
}

int FizzBuzz(x){
		
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
	return 0;	
	
}

int prime(n)
{
	int a;
	int c=0;	
	for (a=1;a<=n;a++) 
	{
        if (n%a==0) 
		{
           c++;
        }
    }
      if (c == 2) 
	  {
      	printf("%d\n",n);
      }
      
	  return 0;    
}

