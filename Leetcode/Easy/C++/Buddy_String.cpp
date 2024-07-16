class Solution {
public:
    bool buddyStrings(string sInput, string goalInput) {
        int lengthS = sInput.size(), lengthGoal = goalInput.size();
        if (lengthS != lengthGoal) return false;
      
        int diffCounter = 0;
        vector<int> freqS(26, 0);
        vector<int> freqGoal(26, 0);
      
        for (int i = 0; i < lengthGoal; ++i) {
            ++freqS[sInput[i] - 'a'];
            ++freqGoal[goalInput[i] - 'a'];
            if (sInput[i] != goalInput[i]) ++diffCounter;
        }
      
        bool hasDuplicate = false;
        for (int i = 0; i < 26; ++i) {
            if (freqS[i] != freqGoal[i]) return false;
            if (freqS[i] > 1) hasDuplicate = true;
        }
      
        return diffCounter == 2 || (diffCounter == 0 && hasDuplicate);
    }
};
