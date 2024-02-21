class Solution {
public:
    bool halvesAreAlike(string s) {
 
    vector<char> vowels = {'a','e','i','o','u', 'A', 'E', 'I', 'O','U'};
    int a = 0, b = 0;
    int n = s.size();
    int mid = n / 2;
    
    for (int i = 0; i < mid; i++) {
        if (find(vowels.begin(), vowels.end(), s[i]) != vowels.end()) { a++; }
        if (find(vowels.begin(), vowels.end(), s[i + mid]) != vowels.end()) { b++; }
    }
    if (a == b) { return true; }
      
    return false;
    }
};
