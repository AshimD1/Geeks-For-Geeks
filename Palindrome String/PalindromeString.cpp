class Solution{
public:	
	
	
	int isPalindrome(string S)
	{
	    // Your code goes here
	    bool check = 1;
	    int n= S.size();
    for(int i=0;i<n;i++){
        if(S[i] != S[n-1-i]){
            check = 0;
            break;
        }
    }
    if (check == true){
        return 1;
    }
    else{
        return 0;
    }
    return 0;
	}

};