#include<iostream>
using namespace std;
int main()
{  int arr[101]={0};
    for(int i=1;i<=100;i++)
    {   
            for(int x=i;x<=100;x=x+i)
              {   if(arr[x]==0)
                    arr[x]=1;
                    else if(arr[x]==1)
                     arr[x]=0;
                    //cout<<x<<" ";
                     
			  }
		 //cout<<endl;
	}
	for(int i=1;i<=100;i++)
	cout<<i<<" "<<arr[i]<<endl;
}
