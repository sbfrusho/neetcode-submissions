

//  struct ListNode {
//      int val;
//      ListNode *next;
//      ListNode() : val(0), next(nullptr) {}
//      ListNode(int x) : val(x), next(nullptr) {}
//      ListNode(int x, ListNode *next) : val(x), next(next) {}
//  };


class Solution {
public:

    ListNode* vectorToList(vector<int> &v) {
        if(v.size() == 0) return nullptr;
        ListNode *head = new ListNode(v[0]);
        ListNode *tail = head;
        for(int i = 1 ; i < v.size() ; i++) {
            tail -> next =new ListNode(v[i]);
            tail = tail->next;
        }
        return head;
    }

    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {

        vector<int>v = {};
        ListNode* temp1 = list1;
        while (temp1 != NULL) {
            v.push_back(temp1->val);
            temp1 = temp1->next;
        }
        ListNode* temp2 = list2;
        while (temp2 != NULL) {
            v.push_back(temp2->val);
            temp2 = temp2->next;
        }

        sort(v.begin(),v.end());

        return vectorToList(v);
        

    }
};
