class Solution {
public:
    string longestCommonPrefix(vector<string>& s) {
        
        for(int i=0;i<200;i++){
            int x=1; char y = '#';
            for(int j=0;j<s.size();j++){
                if(i>=s[j].size()) { x=0; break ; }
                
                if(y=='#') y = s[j][i];
                if(s[j][i]!=y) { x=0; break ; }
            }
            
            if(x==0) return s[0].substr(0,i);
        }
        
        return "";
    }
};
