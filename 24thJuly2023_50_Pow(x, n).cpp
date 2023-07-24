class Solution {
public:
 double solve(double x,int n){
          if(n==0){
            return 1; //power of 0 is 1;
        }
       double temp=myPow(x,n/2);
        temp=temp*temp;
        if(n%2==0){ // if even  return  just without doing nothing
            return temp;
        }
        else{
            return temp*x;//if odd multiple  return by multipling once more with given number
        }
    }
    double myPow(double x, int n) {
        double ans=solve(x,abs(n));
        if(n<0)
            return 1/ans;
            return ans;
       
    }
};
// link : https://leetcode.com/problems/powx-n/solutions/3807721/2-optimised-method-bit-recursion-video-explanation-faster-log-n-solution/
// https://www.youtube.com/results?search_query=pow(x+n)+leetcode+solution
