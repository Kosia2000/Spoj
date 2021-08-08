#include <stdio.h>

void gra(int a, int b)
{
	int r = 0;
	int out = 0;
	if(a > 0 && b > 0)
	{
		while(a != b)
		{
			
			while(a > b)
			{
				a = a-b;
				out = out + b;
				//printf("A = %d\n", a);
				//printf("B = %d\n", b);

			}
			
			while(a < b)
			{
				b = b-a;
				out = out + a;
				
				//printf("A = %d\n", a);
				//printf("B = %d\n", b);

			}
			
			r = a+b;
			//printf("Zostalo = %d\n", r);
		}
		printf("%d\n", r);
	}
}

int main()
{
	int one, two;
	int t;

	scanf("%d", &t);
	if(t > 0 && t < 10)
	{
		for(int i = 0; i < t; i++)
		{
			scanf("%d %d", &one, &two);
			
			gra(one, two);
		}
	}
	return 0;
	
}
