// LINK=https://www.hackerrank.com/challenges/find-digits/problem



#include <bits/stdc++.h>

using namespace std;

// Complete the findDigits function below.
int findDigits(int n) {
    int temp=n;
    int rem=0;
    int cnt=0;
    while(temp!=0)
    {
        rem=temp%10;
        if( rem!=0 and n%rem==0)
        {
            cnt++;
        }
        temp/=10;
    }
    return cnt;


}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int t_itr = 0; t_itr < t; t_itr++) {
        int n;
        cin >> n;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        int result = findDigits(n);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
