// LINK=https://leetcode.com/contest/biweekly-contest-51/problems/seat-reservation-manager/



class SeatManager {
public:
    set<int>st;
   void in(int n)
   {
       for(int i=1;i<=n;i++)
       {
           st.insert(i);
       }
   }  
   SeatManager(int n) {
      in(n);
   }
   
   int reserve() {
       int x=*st.begin();
        st.erase(x);
       return x;
   }
   
   void unreserve(int seatNumber) {
       st.insert(seatNumber);
   }
};
