#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int q2577()
{
	std::ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int A, B, C;
	string sum;

	cin >> A >> B >> C;
	sum = to_string(A * B * C);

	for (int i = 0; i < 10; i++)
		cout << count(sum.begin(), sum.end(), to_string(i)[0]) << '\n';

	return 0;
}