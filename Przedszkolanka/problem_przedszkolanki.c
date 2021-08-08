#include <stdio.h>


void NWD(int a, int b, int *t)
{
	int z = a, l = b;
	while(a != b)
	{
		if(a>b)
		{
			a = a-b;
		} 
		else
		{
		 	b = b-a;
		}		
	}
	
	int c, ab = z * l;
	
	
	c = ab/a;
	t[0] = c; 
	
}
	
	



int main()
{
	int test;
	int nk, mk;
	int t[1];
	scanf("%d", &test);
	for(int i = 0; i < test; i++)
	{
		scanf("%d", &nk);
		scanf("%d", &mk);
		NWD(nk, mk, t);
		printf("%d\n", t[0]);
	}
	return 0;
}
