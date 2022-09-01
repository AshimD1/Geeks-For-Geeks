class Solution{
    public:
    // arr: input array
    // num: size of array
    //Function to find maximum circular subarray sum.
    int kadane(int arr[],int num){
    int currsum =0;
        int maxsum = INT_MIN;
        for(int i=0;i<num;i++){
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
    int circularSubarraySum(int arr[], int num){
        
        // your code here
        int wrapsum;
    int nonwrapsum;

    nonwrapsum = kadane(arr,num);
     if(nonwrapsum<0)
       {
           return nonwrapsum;
       }
    int totalsum =0;
    for(int i =0;i<num;i++){
        totalsum += arr[i];
        arr[i] = -arr[i];
    }
    wrapsum = totalsum + kadane(arr,num);
    return max(wrapsum,nonwrapsum) ;
    }
};