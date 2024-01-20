class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) {
            return false;
        }
        /*
        This approch also good in which we sort string values by its    ascii value and check the sequenced or not 
            sort(s.begin(),s.end());
            sort(t.begin(),t.end());
            return s==t;
        */ 
        unordered_map<char,int> stemp;
        unordered_map<char,int> ttemp;
        
        for (int i=0;i<s.size();i++) {
            stemp[s[i]]++;
            ttemp[t[i]]++;
        }
        
        for (int i=0;i<stemp.size();i++) {
            if (stemp[i] != ttemp[i]) {return false;}
        }
        
        return true;
    }
};
