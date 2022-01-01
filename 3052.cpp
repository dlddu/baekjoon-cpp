#include <iostream>
#include <set>

using namespace std;

int q3052()
{
	std::ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int a;
	set<int> b;

	for (int i = 0; i < 10; i++)
	{
		cin >> a;
		b.insert(a % 42);
	}
	
	cout << b.size();

	return 0;
}