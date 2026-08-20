/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */

class Solution {

    
    public ListNode addTwoNumbers(ListNode l1, ListNode l2) {
        int total = 0, num1 = 0, num2 = 0, carry = 0, final_sum = 0;
        ListNode cur1 = l1;
        ListNode cur2 = l2;
        ListNode dummy = new ListNode(0);
        ListNode list = dummy;


        while(cur1 != null || cur2 != null || carry != 0) {
            num1 = (cur1 != null) ? cur1.val : 0;

            num2 = (cur2 != null) ? cur2.val : 0; 

            total = num1 + num2 + carry;

            carry = total/10;
            int node = total % 10;

            
            list.next = new ListNode(node);
            list = list.next;

            if(cur1 != null) cur1 = cur1.next;
            if(cur2 != null) cur2 = cur2.next;

        }
        return dummy.next;
    }
}