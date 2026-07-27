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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        // long long sum = 0;
        // long long n1 = 0,n2 = 0;
        // long long i1 = 0 , i2 = 0;
        // while(l1 != nullptr) {
        //     n1 = n1 + (l1->val) * pow(10,i1);
        //     l1 = l1->next;
        //     i1++;
        // }
        // while(l2 != nullptr) {
        //     n2 = n2 + (l2->val) * pow(10,i2);
        //     l2 = l2->next;
        //     i2++;
        // }
        
        // sum = n1 + n2;
        // if(sum == 0) {
        //     return new ListNode(0);
        // }

        // ListNode *head = nullptr;
        // ListNode *tail = nullptr;

        // while(sum > 0) {
        //     int digit = sum % 10;
        //     ListNode *newNode = new ListNode(digit);

        //     if(head == nullptr) {
        //         head = tail = newNode;
        //     }
        //     else{
        //         tail->next = newNode;
        //         tail = newNode;
        //     }
        //     sum = sum/10;
        // }
        // return head;

        int carry = 0;
        ListNode *head = nullptr;
        ListNode *tail = nullptr;
        while(l1 != nullptr || l2 != nullptr || carry > 0) {
            int sum = carry;
            if(l1) {
                sum += l1->val;
                l1 = l1->next;
            }
            if(l2) {
                sum += l2->val;
                l2 = l2->next;
            }

            carry = sum/10;
            int digit = sum % 10;
            ListNode *newNode = new ListNode(digit);
            
            if(head == nullptr) {
                head = tail = newNode;
            }
            else{
                tail->next = newNode;
                tail = newNode;
            }
        }
        return head;
    }
};