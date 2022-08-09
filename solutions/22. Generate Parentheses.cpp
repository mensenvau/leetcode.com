class Solution {
public:
    void load(string a,string x,string y,int n,vector<string> &ans){
        if(a.size()==n*2){
          ans.push_back(a);
        }
        else
        {
          if(x.size()<n && x.size()<y.size()) load(a+")",x+")",y,n,ans);
          if(y.size()<n) load(a+"(",x,y+"(",n,ans);
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string>  ans; 
        load("","","",n,ans);
        return ans;
    }
};
