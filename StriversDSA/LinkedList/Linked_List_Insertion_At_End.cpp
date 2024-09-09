class Solution {
  public:
    Node *insertAtEnd(Node *head, int x) {
        Node* new_node = new Node(x);
    
        if (head == nullptr) {
            return new_node;
        }
    
        Node* last = head;
    
        while (last->next != nullptr) {
            last = last->next;
        }
    
        last->next = new_node;
    
        return head;
    }
};
