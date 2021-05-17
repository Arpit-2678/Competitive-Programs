// LINK=https://www.codechef.com/MAY21C/problems/TCTCTOE/


#include<bits/stdc++.h>
#define ll long long int
#define test while(t--)
#define pb push_back
#define ub upper_bound
#define lb lower_bound
#define mp make_pair
#define xxx exit(0)
#define ain(arr) for (auto &it : arr) cin >> it;    
#define fs first
#define sec second
#define op(container) for(auto it: container)  cout<<it<<" ";
#define clr  cin.ignore(numeric_limits<streamsize>::max(), '\n')
using namespace std;
const int inf = 1e9+7;

//   for calculating a to power b...
ll binpow(ll a, ll b)
{
   ll res = 1;
   while (b > 0)
   {
       if (b & 1)
           res = ((res%inf) * (a%inf))%inf;
       a = ((a%inf) * (a%inf))%inf;
       b >>= 1;
   }
   return (res%inf);
}
//  for calculating gcd..
ll gcd(ll a,ll b)
{
   if (b==0) return a;
   return gcd(b,a%b);
}
//  for converting string to uppercase....
string to_upper(string a)
{
   for (int i=0;i<(int)a.size();++i) if (a[i]>='a' && a[i]<='z') a[i]-='a'-'A';
   return a;
}
///  for converting string to lowercase....
string to_lower(string a)
{
   for (int i=0;i<(int)a.size();++i) if (a[i]>='A' && a[i]<='Z') a[i]+='a'-'A';
   return a;
}

bool cmp(int a, int b)
{
   
   if (a % 2 == 0 && b % 2 == 0)
       return a < b;

   if (a % 2 != 0 && b % 2 != 0)
       return b < a;


   if (a % 2 != 0)
       return true;

   return false;
}

int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0); cout.tie(0);
   ll t;
   cin>>t;
   test{
 char Board[3][3];
       int X_count=0,O_count=0;
       vector<pair<int,int>>vec_X;
       vector<pair<int,int>>o;
       for(size_t i=0;i<3;i++)
       {
           for(size_t j=0;j<3;j++)
           {    cin>>Board[i][j];
                   if(Board[i][j]=='X')
                    {      X_count++;
                          vec_X.pb({i,j});
                    }
                    if(Board[i][j]=='O')
                        {
                            o.pb({i,j});
                            O_count++;
                        }
                    
              
               
           }
           
       }
        int cnt_x=X_count, cnt_o=O_count;
       char My_tictactoe[3][3];
       int k=1;
       int point=0;
       for(size_t i=0;i<3;i++)
       {   
           for(size_t j=0;j<3;j++)
            {   
                if(X_count==0 and O_count==0)
                {
                     break;
                }
                
                if(k&1)
                {
                if(vec_X.size()!=0)
                {  auto it=vec_X.rbegin();
                    My_tictactoe[it->first][it->second]='X';
                    vec_X.pop_back();
                     X_count--;
                }
                else
                {
                    point++;
                    break;
                }
                }
                else
                {
                if(o.size()!=0)
                {  auto it=o.rbegin();
                    My_tictactoe[it->first][it->second]='O';
                    o.pop_back();
                     O_count--;
                }
                else
                {
                    point++;
                    break;
                }
                }
                k++;
                
            }
            if(point or (X_count==0 and O_count==0))
             break;
       }
   
       if(point)
       {
            cout<<3<<"\n";
       }
       else
       {     int x=264,o=237,X_win=0;
            int Right_dia=0,Left_dia=0,sum_c=0,sum_r=0,blank=0,hit=0;
            
           for(size_t i=0;i<3;i++)
           {       size_t j=0;
               for( j=0;j<3;j++)
               {   
                   if(Board[i][j]=='_')
                     {
                         blank++;
                     }
                   if(i==j)
                   {
                       Left_dia+=Board[i][j];
                   }
                  if(i+j==2)
                  {
                      Right_dia+=Board[i][j];
                  }
                  sum_c+=Board[j][i];
                  sum_r+=Board[i][j];
               }
               if(sum_c==x or sum_c==o)
               {     if(Board[i][i]=='X')
                        {
                            X_win++;
                        }
                   hit++;
               }
               if(sum_r==x or sum_r==o)
               {   if(Board[i][0]=='X')
                     {
                         X_win++;
                     }
                   
                 hit++;
               }
               sum_r=0;
               sum_c=0;
           }
           if(Left_dia==x or Left_dia==o)
           {    if(Board[1][1]=='X')
                    X_win++;
                hit++;
           }
           if(Right_dia==x or Right_dia==o)
           {   if(Board[1][1]=='X')
                    X_win++;
               hit++;
           }
         if(hit==1) 
         {     if(X_win>0)
             {
             if((cnt_x>cnt_o))
             cout<<1<<"\n";
             else
             cout<<3<<"\n";
             }
             else
             {
                 if(cnt_x==cnt_o)
                  {
                      cout<<1<<"\n";
                  }
                  else
                  {
                      cout<<3<<"\n";
                  }
             }
                 
        }
         else if(hit==0 and blank==0)
         {
             cout<<1<<"\n";
         }
         else if(hit>1 and X_win==2)
          {
              cout<<1<<"\n";
          }
         else if(hit>1)
         {
              cout<<3<<"\n";
         }
         else
         {
             cout<<2<<"\n";
         }
       }
   }
    return 0;

}
