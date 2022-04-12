class Solution{
public:	
	int isPalindrome(string S)
	{
	    int left=0,right=S.size()-1;
	    while(left<right){
	        if(S[left]!=S[right])
	            return 0;
	         left++;right--;     
	    }
	    return 1;
	    
	}

};