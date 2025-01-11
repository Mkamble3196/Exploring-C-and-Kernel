#include<stdio.h>

typedef int Fun(int, int);
Fun sum, sub, mul, dive;
typedef int(*FPTR)(int, int);

int main(void){

	FPTR p[4] = {sum, sub, mul, dive}; 
	
	int i = 10;
	int j = 20;
	int r1,r2,r3,r4;
	r1 = p[0] (i,j);
	r2 = p[1] (i,j);
	r3 = p[2] (i,j);
	r4 = p[3] (i,j);
	printf("sum=%d\nsub=%d\nmul=%d\ndive=%d\n",r1, r2, r3, r4);
	

	return(0);
}

int sum(int m, int n)
{
	return m + n;
}

int sub(int m, int n)
{
	return m - n;
}
int mul (int m, int n)
{
	return m * n;
}

int dive(int m, int n)
{
	return m / n;
}
