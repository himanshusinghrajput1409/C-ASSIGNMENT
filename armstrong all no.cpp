 #include<stdio.h>
int main ()
{
	int i=1,a,b,c;
	printf("armstrong number\n");
	while(i<1000)
	{a=i%10;
	b=i%100;
	b=(b-a)/10;
	c=i/100;
	if (a*a*a+b*b*b+c*c*c==i)
	{printf("%d\n",i);
	}i++;
	}
}