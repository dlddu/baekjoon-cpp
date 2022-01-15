#include <iostream>
#include <string>

using namespace std;

int q2908()
{
	std::ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	string a, b;

	cin >> a >> b;

	reverse(a.begin(), a.end());
	reverse(b.begin(), b.end());

	auto a_int = stoi(a);
	auto b_int = stoi(b);

	cout << max(a_int, b_int);

	return 0;
}