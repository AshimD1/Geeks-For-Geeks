class Solution{
  public:
    int thirdLargest(int arr[], int n)
    {
         //Your code here
        if (n < 3)
	        return -1;
	    int firstHighest = 0;
	    int secondHighest = 0;
	    int thirdHighest = 0;
	    for(int i=0; i<n; i++){
	        if(arr[i] > firstHighest){
	            thirdHighest = secondHighest;
	            secondHighest = firstHighest;
	            firstHighest = arr[i];
	        }else if(arr[i] > secondHighest){
	            thirdHighest = secondHighest;
	            secondHighest = arr[i];
	        }else if(arr[i] > thirdHighest){
	            thirdHighest = arr[i];
	        }
	    }
	    return thirdHighest;
        
         
    }

};