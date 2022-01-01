#include <vector>
#include <numeric>

using namespace std;

long long sum(vector<int>& a)
{
	long long to_return{ 0 };
	for (int n : a)
		to_return += n;
	return to_return;
}