class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        unordered_set<string> filteredEmail;

        for (const string& email : emails) {
            string localName;
            for (int i=0; i<email.size(); i++) {
                if (email[i] == '+' || email[i] == '@') {
                    break;
                }
                if (email[i] == '.') {
                    continue;
                }
                localName += email[i];
            }
            string domainName = email.substr(email.find('@'));
            filteredEmail.insert(localName + domainName);
        }
        return filteredEmail.size();
    }
};
