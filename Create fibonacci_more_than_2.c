#include <stdio.h>

//Fibonacci Sequence

int main()
{
	int n = 3; //n>2 or n>= 3
	int m = 10; //Number of terms
	int F1 = 1; //F(1) = 1, initial value n<3 or n<=2
	int F2 = 1; //F(2) = 1, initial value n<3 or n<=2
	int Fn; //F(n)
	int Fn_2; //F(n-2)
	int Fn_1; //F(n-1)

	Fn_2 = F1; //F(n-2) = F(1), initial condition n = 3
	Fn_1 = F2; //F(n-1) = F(2), initial condition n = 3

	printf("%d %d ", F1, F2); //Display initial value  n<3 or n<=2

	for (n; n <= m; n++)
	{
		Fn = Fn_2 + Fn_1; //F(n) = F(n-2) + F(n-1) Fibonacci recurrence relation
		Fn_2 = Fn_1; //F(n-2) = F(n-1), recursive formula
		Fn_1 = Fn; //F(n-1) = F(n), recursive formula
		printf("%d ", Fn); //Display fibonacci sequence n>1 or n>=2
	}

	return 0;
}
