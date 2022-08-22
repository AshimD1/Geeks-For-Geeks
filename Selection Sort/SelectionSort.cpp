class Solution
{
    public:
    int select(int arr[], int i)
    {
        // code here such that selectionSort() sorts arr[]
        
    }
     
    void selectionSort(int arr[], int n)
    {
       //code here
       for (int i=0;i<n-1;i++){
           for(int j=i+1;j<n;j++){
               if(arr[i]>arr[j]){
                   int temp=arr[i];
                   arr[i]=arr[j];
                   arr[j]=temp;
               }
           }
       }
    }
};