#include <bits/stdc++.h>
#include <algorithm>
#include <unordered_map>

using namespace std;



int main(void) {

	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	int house[1001][3];

	house[0][0] = 0;
	house[0][1] = 0;
	house[0][2] = 0;
	
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		int r, g, b;

		cin >> r >> g >> b;

		house[i][0] = min(house[i - 1][1], house[i - 1][2]) + r;
		house[i][1] = min(house[i - 1][0], house[i - 1][2]) + g;
		house[i][2] = min(house[i - 1][0], house[i - 1][1]) + b;
	}

	cout << min(house[n][0], min(house[n][1], house[n][2]));

}