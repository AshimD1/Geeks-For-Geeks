class Solution {
  public:
    long long int nthFibonacci(long long int n){
        // code here
         const unsigned int M = 1000000007;
       if(n<=1) return n;
            long long int a=0,b=1,c;
            for(int i=2;i<=n;i++){
            c=a+b;
            c%=M;
            a=b;
            b=c;
        }
        return c;
    }
};