#include<iostream>
#include<cmath>

int main()
{
	int i;
	int j = 0;
	int k = 0;
	int l;
	int sum = 0;
	int b[28] = { 0 };
	std::cin >> i;

	while (i != 0)
	{
		b[j] = i % 2;
		i /= 2;
		j++;
	}
	l = j-1;
	while (k != j)
	{
		std::cout << b[k]*pow(2,l);
		sum += b[k] * pow(2, l);
		k++;
		l--;
	}
	std::cout << sum;
}