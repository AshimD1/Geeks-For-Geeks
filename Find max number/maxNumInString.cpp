class Solution {
  public:
    string findMax(string N) {
        // code here
        sort(N.begin(),N.end(),greater<int>());
        return N;
    }
};