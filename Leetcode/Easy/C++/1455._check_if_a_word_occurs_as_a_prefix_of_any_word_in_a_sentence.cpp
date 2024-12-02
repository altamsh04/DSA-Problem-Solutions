class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        stringstream ss(sentence);
        string currentWord;
        int wordIndex = 1;
      
        while (ss >> currentWord) {
            if (currentWord.find(searchWord) == 0) {
                return wordIndex;
            }
            ++wordIndex;
        }
        return -1;
    }
};
