#include <iostream>
#include <vector>
#include <string>

using namespace std;

int q2941()
{
	std::ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	vector<string> book = { "c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z=" };
	string word;

	cin >> word;

	for (string token : book)
	{
		int start_pos;
		while ((start_pos = word.find(token)) != -1)
			word.replace(start_pos, token.size(), "*");
	}

	cout << word.size();

	return 0;
}