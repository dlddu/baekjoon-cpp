#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool is_han_number(int n)
{
	vector<int> splited_number;

	for (char digit : to_string(n))
		splited_number.push_back(digit - '0');

	bool is_han_number = true;

	if (splited_number.size() < 3) return true;

	for (int i = 0; i < splited_number.size() - 2; i++)
	{
		if (splited_number[i] - splited_number[i + 1] != splited_number[i + 1] - splited_number[i + 2])
		{
			is_han_number = false;
			break;
		}
	}

	return is_han_number;
}

int q1065()
{
	std::ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, han_number_number{ 0 };

	cin >> n;

	for (int i = 1; i <= n; i++)
		if (is_han_number(i)) han_number_number++;

	cout << han_number_number;

	return 0;
}