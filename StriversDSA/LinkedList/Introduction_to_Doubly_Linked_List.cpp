class Solution {
  public:
    Node* constructDLL(vector<int>& arr) {
        if (arr.size() == 0) {
            return NULL;
        }

        Node* head = new Node(arr[0]);
        Node* tail = head;

        for (int i = 1; i < arr.size(); i++) {
            Node* newNode = new Node(arr[i]);
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }

        return head;
    }
};
