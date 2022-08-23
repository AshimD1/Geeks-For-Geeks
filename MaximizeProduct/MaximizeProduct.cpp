class Solution{
    public:
    int Maximize(int a[],int n)
    {
        // Complete the function
        int mod = 1000000007;
        long int sum=0;
        sort(a,a+n);
        for(int i=0;i<n;i++){
            sum=sum+(long)a[i]*i;
            
        }
        sum = sum%mod;
        return sum;
    }
};