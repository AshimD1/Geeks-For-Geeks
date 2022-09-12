class Solution
{
public:
    vector<int> sieveOfEratosthenes(int N)
    {
        // Write Your Code here
        vector<int>res;
    int prime[N+1] = {0};

    for(int i=2;i<=N;i++){
        if(prime[i]==0){
            for(int j=i*i;j<=N;j+=i){
                prime[j]=1;
            }
        }
    }
    for(int i=2;i<=N;i++){
        if(prime[i]==0){
            res.push_back(i);
        }
    }
    return res;
    }
};