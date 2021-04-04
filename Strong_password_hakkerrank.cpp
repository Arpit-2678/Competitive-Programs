// LINK= https://www.hackerrank.com/challenges/strong-password/problem


#include <bits/stdc++.h>

using namespace std;

// Complete the minimumNumber function below.
int minimumNumber(int n, string pass) {
    int cnt_d=0,cnt_u=0,cnt_l=0,cnt_sp=0;
    int res=0;
    int len=pass.size();
    for(int i=0;i<pass.size();i++)
    {
        if(pass.at(i)>='A' and pass.at(i)<='Z')
            cnt_u++;
        else if(pass.at(i)>='a' and pass.at(i)<='z')
             cnt_l++;
        else if(pass.at(i)>='0' and pass.at(i)<='9')
           cnt_d++;
        else
           cnt_sp++;
    }

    if(cnt_u==0 )
    {
        res++;
        len+=1;
    }
     if(cnt_l==0 )
    {
        res++;
        len+=1;
    }
     if(cnt_d==0)
    {
        res++;
        len+=1;
    }
     if(cnt_sp==0)
    {
        res++;
        len+=1;
    }
    if(len<6)
    return (res+(6-len));
    else {
    return res;
    }
    

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string password;
    getline(cin, password);

    int answer = minimumNumber(n, password);

    fout << answer << "\n";

    fout.close();

    return 0;
}
