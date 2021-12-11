//  LINK=https://www.hackerrank.com/challenges/longest-increasing-subsequent/problem

#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'longestIncreasingSubsequence' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER_ARRAY arr as parameter.
 */

int longestIncreasingSubsequence(vector<int> arr) {
    int n=arr.size();
std::vector<int> dp(n + 1, 1e9);
    dp[0] = -1e9;
    dp[1] = arr[0];

    for (int i = 1; i < n; i++) {
        int pos = upper_bound(dp.begin(),dp.end(), arr[i]) - dp.begin();
        if (dp[pos - 1] < arr[i] and arr[i] < dp[pos]) {
            dp[pos] = arr[i];
        }
    }
    for (int j = n; j >= 0; j--) {
        if (dp[j] != 1e9) {
            return j;
        }
    }
    return 1;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        string arr_item_temp;
        getline(cin, arr_item_temp);

        int arr_item = stoi(ltrim(rtrim(arr_item_temp)));

        arr[i] = arr_item;
    }

    int result = longestIncreasingSubsequence(arr);

    fout << result << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
