
class Solution
{
    public:
    vector<vector<int> > subsets(vector<int>& A)
    {
      vector<vector<int>>ans;
        ans.push_back({});
        for(int i=0;i<A.size();i++)
        {
            int n=ans.size();
            for(int j=0;j<n;j++)
            {
                vector<int>output=ans[j];
                output.push_back(A[i]);
                ans.push_back(output);
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};