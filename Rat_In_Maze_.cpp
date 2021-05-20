#include<bits/stdc++.h>
using namespace std;
bool isSafe(int **arr,int x,int y,int n)
{     if(x<n and y<n and arr[x][y]==1 )
         {     return true;
		 }
		 return false;
	
}
bool maze(int **arr,int **solArr,int x, int y,int n)
{      if(x==n-1 and y==n-1)
            {  solArr[x][y]=1;   
			  return true;
			}
		
		
		if(isSafe(arr,x,y,n))
		{     solArr[x][y]=1;
		    
		      if(maze(arr,solArr,x+1,y,n))
		        {    
				   return true;
		        }
				if(maze(arr,solArr,x,y+1,n))
				{
					    return true;
				}
			solArr[x][y]=0;
			   return false;
		}
		return false;	
		
}
int main()
{   int n;
     cin>>n;
     //Creating a 2-D array dynamically
     int **arr=new int*[n];
     for(int i=0;i<n;i++)
      {    arr[i]=new int[n];
	  }
	  for(int i=0;i<n;i++)
	  {     for(int j=0;j<n;j++)
	         {     cin>>arr[i][j];
	         	
			 }
	  	 
	  }
	  
	  int **solArr=new int*[n];
     for(int i=0;i<n;i++)
      {    solArr[i]=new int[n];
	         for(int j=0;j<n;j++)
	           { solArr[i][j]=0;
	           	
			   }
	  }
	  if(maze(arr,solArr,0,0,n))
	  {      for(int i=0;i<n;i++)
	  {     for(int j=0;j<n;j++)
	         {     cout<<solArr[i][j]<<" ";
	         	
			 }
			 cout<<endl;
	  }
	  }
	  else
	  {    cout<<"Cant pass";
	  }
	
}
