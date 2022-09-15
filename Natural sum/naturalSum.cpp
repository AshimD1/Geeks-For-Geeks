
class Solution{
	public:
   	int find(int n){
   	    int i = 1, sum = 0;
   	    while(n > 0) {
   	        sum++;
   	        n = n-i;
   	        i++; }
   	    return (n == 0) ? sum : -1;
   	}    
};