#include <stdio.h>

int main()
{
	int n,a,b,c;
	int max=0;
	
	printf("Unestie trocifrreni broj: ");
	scanf("%d", &n);
	a=n/100;
	c = n - ((n / 10) * 10);
	b=n/10- (n / 100) * 10;
	
	//provera formata unosa
	if (a==0 && b==0 || a==0 && c==0 || c==0 && b==0 )
	printf("Uneli ste broj sa dve nule");
	
	else if (a >= b && a >= c)
	{
		if(b!=0)
			printf("%d%d%d\n", b,a,c);
		if(c!=0)
			printf("%d%d%d", c,a,b);
	}
	else if (b >= a && b >= c)
	{
		if(a!=0)
			printf("%d%d%d\n", a,b,c);
		if(c!=0)
			printf("%d%d%d", c,b,a);
		
	}
	else if (c >= b && c >= a){
		if(b!=0)
			printf("%d%d%d\n", b,c,a);
		if(a!=0)
			printf("%d%d%d", a,c,b);
		
	}
	return 0;
}
