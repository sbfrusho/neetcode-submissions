/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    void reorderList(ListNode* head) {
        if (!head || !head->next) return;
        
        ListNode *slow = head;
        ListNode *fast = head;
        while(fast != nullptr && fast->next != nullptr) {
            cout << slow -> val << endl;
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode *curr = slow->next;
        stack<ListNode*>st;
        while(curr != nullptr) {
            st.push(curr);
            curr = curr->next;
            // cout << curr->val << endl;
        }
        slow->next = nullptr;
        ListNode *current = head;
        while(!st.empty()) {
            ListNode *popedNode = st.top();
            st.pop();

            ListNode *nextCurr = current->next;

            current->next = popedNode;
            popedNode->next = nextCurr;
            current = nextCurr;
            

        }
        
    }
};
