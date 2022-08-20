class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(int arr[], int n, long long s)
    {
        // Your code here
        int i =0;
        int j = 0;
        int sum =0;
        while(j<n || i<n){
            if (sum==s && j!=i){
                return{i+1,j};
            }
            else if(sum<s){
                sum+= arr[j];
                j++;
            }
            else{
                sum-=arr[i];
                i++;
            }
        }
        return{-1};
    }
};