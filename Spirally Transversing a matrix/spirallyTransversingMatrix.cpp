class Solution
{   
    public: 
    //Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        // code here 
        vector <int> v;
        int row_start =0, row_end = r-1,cols_start=0,cols_end = c-1;

    while(row_start<=row_end && cols_start <= cols_end){
        
        for(int col = cols_start;col<= cols_end;col++){
            v.push_back(matrix[row_start][col]);
        }
        row_start++;

        for(int row = row_start;row<= row_end;row++){
            v.push_back(matrix[row][cols_end]);
        }
        cols_end--;
        
        if(row_start<=row_end){

        for(int col = cols_end;col>= cols_start;col--){
            v.push_back(matrix[row_end][col]);
        }
        row_end--;
        }
        if(cols_start<=cols_end){

        for(int row = row_end;row>= row_start;row--){
            v.push_back(matrix[row][cols_start]);
        }
        cols_start++;
        }
    }
      return v;
    }
};