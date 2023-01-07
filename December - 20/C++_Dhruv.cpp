#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9;

int t, n, a[150001], w[150001], dp[150001][109];

int main() {
    cin >> t;
    while (t--) {
        cin >> n;
        for (int i = 1; i <= n; i++) cin >> a[i];
        for (int i = 1; i <= n; i++) cin >> w[i];

        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= 109; j++) {
                if (j == a[i]) dp[i][j] = w[i];
                else dp[i][j] = -INF;
            }
        }

        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= 109; j++) {
                for (int k = 1; k < i; k++) {
                    if (j < a[i]) dp[i][j] = max(dp[i][j], dp[k][j]);
                }
            }
        }

        int result = 0;
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= 109; j++) {
                result = max(result, dp[i][j]);
            }
        }
        cout << result << endl
