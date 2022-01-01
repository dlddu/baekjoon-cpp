#include <iostream>
#include <string>

using namespace std;

int q10809()
{
	std::ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	string word;

	cin >> word;

	for (int i = 'a'; i <= 'z'; i++)
	{
		auto index = word.find(i);
		cout << ((index == std::string::npos) ? "-1" : std::to_string(index)) + " ";
	}

	return 0;
}