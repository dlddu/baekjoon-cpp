#include <iostream>

using namespace std;

int q10950()
{
	int questionNumber;

	cin >> questionNumber;

	for (int i = 0; i < questionNumber; i++)
	{
		int a, b;

		cin >> a >> b;
		cout << a + b << endl;
	}

	return 0;
}