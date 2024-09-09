class Solution {
  public:
    int getCount(struct Node* head) {
        if (head == nullptr) return 0;
        
        int count = 0;
        Node* temp = head;
        while (temp != NULL) {
            count++;
            temp = temp->next;
        }
        
        return count;
    }
};
