class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n){
        
        // Your code here
        int currsum =0;
        int maxsum = INT_MIN;
        for(int i=0;i<n;i++){
            currsum+=arr[i];
            if (currsum > maxsum){
                maxsum = currsum;
            }
            if(currsum <0){
                currsum =0;
            }
        }
        return maxsum;
    }
      
};