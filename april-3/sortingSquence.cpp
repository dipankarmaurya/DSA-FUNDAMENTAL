class Solution {
public:
    string sortSentence(string s) {
        map<int,string>mp;
        
        string st="";
        for(char c :s){
            if(c==' '){
                st+=' ';
                char ch = st[st.size()-2];
                int order= ch-'0';
                mp[order]=st.substr(0,st.size()-2)+" ";
                st="";
            }else{
               st+=c;  
            }
           
        }
        char ch = st[st.size()-1];
        int order= ch-'0';
        mp[order]=st.substr(0,st.size()-1)+" ";
        string ans="";
        for(auto it:mp){
           // cout<<mp[it];
            ans+=it.second;
        }
        return ans.substr(0,ans.size()-1);
    }
};