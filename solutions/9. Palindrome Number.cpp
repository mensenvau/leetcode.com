class Solution {
public:
    bool isPalindrome(int x) {
        
        if(x<0) return 0;
        
        long int s = 0, y=x ; 
        while(x!=0){
            s = s*10 + x%10 ;
            x = x/10;
        }
        
        return (s==y);
    }
};
