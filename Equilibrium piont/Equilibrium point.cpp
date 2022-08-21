class Solution{
    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long a[], int n) {
    
        // Your code here
        int l=0;
        int total = 0;
        for(int i=0;i<n;i++){
            total +=a[i];
        }
        for(int i=0;i<n;i++){
            total-=a[i];
            if(total==l){
                return i+1;
            }
            l+=a[i];
        }
        return -1;
    }

};