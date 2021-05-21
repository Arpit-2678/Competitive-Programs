#include<iostream>
#include<algorithm>
using namespace std;
int main()
{   int size;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++)
       cin>>arr[i];
       sort(arr,arr+size);
       int ele;
      //  cout<<"Enter the element for which you want to find the triplet: ";
         cin>>ele;
       for(int i=0;i<size;i++)
       {    int start=i+1;
            int end=size-1;
            while(start<end)
            {      if(arr[i]+arr[start]+arr[end]==ele)
                     {     cout<<arr[i]<<", "<<arr[start]<<" and "<<arr[end]<<endl;
                              start++;
                              end--;
					 }
				else if(arr[i]+arr[start]+arr[end]>ele)
				      {    end--;
					  }
					else
					start++;  
                   	 
			}
	   }
}
