class Solution{
    public:
    int search(int A[], int l, int h, int key){
        // l: The starting index
        // h: The ending index, you have to search the key in this range
        
        //complete the function here
        int i =0;
        while(i<=h){
            if(key == A[i]){
                return i;
            }
            else{
                i++;
            }
        }
         return -1;
    }
};