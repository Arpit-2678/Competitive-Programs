/* LINK= https://practice.geeksforgeeks.org/problems/leaders-in-an-array-1587115620/1/?category[]=Mathematical&category[]=Arrays&category[]=Strings&category[]=Hash&category[]=Mathematical&category[]=Arrays&category[]=Strings&category[]=Hash&problemStatus=unsolved&problemType=functional&page=1&sortBy=submissions&query=category[]Mathematicalcategory[]Arrayscategory[]Stringscategory[]HashproblemStatusunsolvedproblemTypefunctionalpage1sortBysubmissionscategory[]Mathematicalcategory[]Arrayscategory[]Stringscategory[]Hash    */


class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int arr[], int n){
        stack<int>st;
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            if(st.empty())
            st.push(arr[i]);
            else if(st.top()<arr[i])
            {
                while(!st.empty() and st.top()<arr[i] )
                {
                    st.pop();
                }
                st.push(arr[i]);
            }
            else
            //(st.top>arr[i])
            st.push(arr[i]);
        }
        while(!st.empty())
        {
            v.push_back(st.top());
            st.pop();
        }
        reverse(v.begin(),v.end());
        return v;
        
    }
};



//  For full question refer the above mentioned link.
