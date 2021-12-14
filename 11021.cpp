#include <iostream>

using namespace std;

int q11021()
{
	cin.tie(NULL);
	std::ios_base::sync_with_stdio(false);

	int questionNumber, a, b;

	cin >> questionNumber;

	for (int i = 1; i <= questionNumber; i++)
	{
		cin >> a >> b;
		cout << "Case #" << i << ": " << a + b << "\n";
	}

	return 0;
}