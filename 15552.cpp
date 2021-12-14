#include <iostream>

using namespace std;

int q15552()
{
	cin.tie(NULL);
	std::ios_base::sync_with_stdio(false);

	int questionNumber, a, b;

	cin >> questionNumber;

	for (int i = 1; i <= questionNumber; i++)
	{
		cin >> a >> b;
		cout << a + b << "\n";
	}

	return 0;
}