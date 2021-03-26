/*  Given N leaves numbered from 1 to N . A caterpillar at leaf 1, jumps from leaf to leaf in multiples of Aj (Aj, 2Aj, 3Aj).
j is specific to the caterpillar. Whenever a caterpillar reaches a leaf, it eats it a little bit.. You have to find out how many leaves, from 1 to N, are left uneaten after all K caterpillars have reached the end. Each caterpillar has its own jump factor denoted by Aj, and each caterpillar starts at leaf number 1.

Input:
The first line consists of a integer T denoting the number of testcases. T test cases follow. Each test case consists of two lines of input. The first line consists of two integers: N, which denotes the number of leaves; and K, which denotes the number of caterpillars. Second line of each test case consists of K space seperated integers denoting the jumping factor of caterpillars.

Output:
For each testcase, in a new line, print a  single integer denoting the number of uneaten leaves.

Constraints:
1 <= T <= 100
1 <= N <= 107
1 <= K <= 107
1 <= Aj <= 100

Example:
Input:
1
10 3
2 3 5
Output:
2

Explanation:
Testcase1: The leaves eaten by the first caterpillar are (2, 4, 6, 8, 10).
The leaves eaten by the second caterpilllar are (3, 6, 9)
The leaves eaten by the third caterpilllar are (5, 10)
Ultimately, the uneaten leaves are 1, 7 and their number is 2   */
#include <bits/stdc++.h>
using namespace std;

int jumpingCaterpillars(int arr[], int K, int N)
{
    vector<bool> visited(N + 1, false);
    
    for(int i = 0; i < K; i++)
    {
        if(visited[arr[i]] == false)
        {
            for(int j = arr[i]; j <= N; j += arr[i])
            {
                visited[j] = true;
            }
        }
    }
    
    int count = 0;
    for(int i = 1; i <= N; i++)
    {
        if(visited[i] == false)
        {
            count++;
        }
    }
    
    return count;
}

int main()
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0);cout.tie(0);
    
    int T;
    cin >> T;
    
    while(T--)
    {
        int N, K;
        cin >> N >> K;
        
        int arr[K];
        for(int i = 0; i < K; i++)
        {
            cin >> arr[i];
        }
        
        cout << jumpingCaterpillars(arr, K, N) << "\n";
    }
    
    return 0;
}
