pair<long long, long long> getMinMax(long long a[], int n) {
    int maxi = INT_MIN;
    int mini = INT_MAX;
    
    for(int i=0;i<n;i++){
        if(a[i]>maxi){
            maxi=a[i];
        }
        if (a[i]<mini){
            mini = a[i];
        }
    }
    return {mini,maxi};
}