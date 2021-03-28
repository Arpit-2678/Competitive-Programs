/* LINK= https://practice.geeksforgeeks.org/problems/anagram-1587115620/1#  */

//  This is only the function.. Full question you can see from the link


  bool isAnagram(string a, string b){
        
        int av=0,bv=0;
        long long pav=0,pbv=0;
        for(int i=0;i<a.length();i++)
        {
            av+=(int)(a.at(i));
            pav*=(int)(a.at(i));
        }
         for(int i=0;i<b.length();i++)
        {
            bv+=(int)(b.at(i));
            pbv*=(int)(b.at(i));
        }
        if(av==bv and pav==pbv)
        return true;
        else
        return false;
        
    }
