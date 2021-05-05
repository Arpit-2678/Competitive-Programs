#include <bits/stdc++.h>
using namespace std;
void generate(vector<string> v,int cnt)
{
  for(int i=0;i<16;i++)
  {
         int pos=0,cnt=0;
         int j=i;
         while(j>0)
         {
           if((j&1))
            cout<<v[pos]<<" ";

            pos++;
            j=j>>1;
          }
          cout<<"\n";
  }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    std::vector<string> v={"dtp", "ctq", "rts", "etp"};
    generate(v,0);

}
