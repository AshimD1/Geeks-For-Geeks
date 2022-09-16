vector<int> find(int arr[], int n , int x )
{
    // code here
    vector<int> ans(2);
    ans[0]= -1;
    ans[1]= -1;
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            ans[1]=i;
        }
    }
     for(int i=n;i>=0;i--){
        if(arr[i]==x){
            ans[0]=i;
        }
    }
    return ans;
}