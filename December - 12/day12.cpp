#include <bits/stdc++.h>
using namespace std;

#define R 4
#define C 4

int minCost(int cost[R][C], int m, int n)
{
	if (n < 0 || m < 0)
		return INT_MAX;
	else if (m == 0 && n == 0)
		return cost[m][n];
	else
		return cost[m][n]
			+ min(minCost(cost, m - 1, n),
				  minCost(cost, m, n - 1));
}

int main()
{
	int cost[R][C]
		= { {9,4,9,9}, {6,7,6,4}, {8,3,3,7}, {7,4,9,10} };

	cout << minCost(cost, R-1, C-1) << endl;

	return 0;
}
