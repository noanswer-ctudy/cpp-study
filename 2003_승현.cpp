#include<iostream>

int main()
{
	int n, m;
	int sum = 0;
	int count = 0;
	std::cin >> n >> m;
	int i[10000] = { 0 };

	for (int j = 0; j < n; j++)
	{
		std::cin >> i[j];
	}

	int finger = 0;
	for (int head = 0; head < n; head++)
	{
		while (sum < m)
		{
			sum = sum + i[finger];
			++finger;
			if (sum == m)
			{
				++count;
			}
		}
		finger = head + 1;
		sum = 0;
	}
	std::cout << count;
}