class Solution {
private:
 void Combinate(int i, string &digits,string &temp,vector<string>&ans,unordered_map<char,string> &m){
        if(i>=digits.length()){
            ans.push_back(temp);
            return;
        }

        string str=m[digits[i]];
        for(int j=0;j<str.length();j++){
            temp.push_back(str[j]);
            Combinate(i+1,digits,temp,ans,m);
            temp.pop_back();
        }
    }
public:
    vector<string> letterCombinations(string digits) {
        

       if(digits.length()==0){  return {}; }
       
        unordered_map<char,string>m;
        m['2']="abc";
        m['3']="def";
        m['4']="ghi";
        m['5']="jkl";
        m['6']="mno";
        m['7']="pqrs";
        m['8']="tuv";
        m['9']="wxyz";

        vector<string>ans;
        string temp;

       Combinate(0,digits,temp,ans,m);
        return ans;
    }
};
