#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;

int q4344()
{

	std::ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, student_number;
	cout << fixed;

	cin >> n;

	while (n--)
	{
		cin >> student_number;

		auto student_scores = vector<int>();
		double sum{ 0 };
		int student_score, student_number_over_average{ 0 };

		for (int _ = 0; _ < student_number; _++)
		{
			cin >> student_score;
			student_scores.push_back(student_score);
		}

		sum = accumulate(student_scores.begin(), student_scores.end(), 0);

		for (int score : student_scores)
		{
			if (score > (sum / student_number))
				student_number_over_average++;
		}

		cout.precision(3);
		cout << student_number_over_average * 100. / student_number << '%' << '\n';
	}

	return 0;
}