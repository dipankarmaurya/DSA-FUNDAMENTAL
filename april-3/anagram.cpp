class Solution {
public:
    bool isEqual(string s1,string s2){
    
        for(int i=0;i<s1.size();i++){
            if(s1[i]!=s2[i])
                return false;
        }
        return true;
    }
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size())return false;
    
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    if(isEqual(s,t))return true;
    return false;
    }
};