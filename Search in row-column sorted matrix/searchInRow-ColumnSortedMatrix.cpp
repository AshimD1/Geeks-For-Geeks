class Solution
{
    public:
    //Function to search a given number in row-column sorted matrix.
    bool search(vector<vector<int> > matrix, int n, int m, int x) 
    {
        // code here 
    int r= 0,c=m-1;
    bool found = false;
    while(r<n and c>=0){
        if (matrix[r][c] == x){
            found = true;
        }
        if (matrix[r][c] > x){
            c--;
        }
        else{
            r++;
        }
    }
    
    if(found){
        return 1;
    }
    else{
        return 0;;
    }

    }
};