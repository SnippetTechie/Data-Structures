struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class ReverseList {
public:
    // Recursive approach
    ListNode* reverseList(ListNode* head) {
        // Base case: empty list or single node
        if (head == nullptr || head->next == nullptr) {
            return head;
        }
        
        // Recursively reverse the rest of the list
        ListNode* newHead = reverseList(head->next);
        
        // Make the next node point back to current
        head->next->next = head;
        head->next = nullptr;
        
        return newHead;
    }
};
