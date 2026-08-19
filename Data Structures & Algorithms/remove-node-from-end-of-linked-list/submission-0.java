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
    public ListNode removeNthFromEnd(ListNode head, int n) {
        
        ListNode res = new ListNode(0, head);
        ListNode pointerOne = res;
        ListNode pointerTwo = res;
        
        for(int i = 0 ; i <= n ; i++) {
            pointerOne = pointerOne.next;
        }

        while(pointerOne != null) {
            pointerOne = pointerOne.next;
            pointerTwo = pointerTwo.next;
        }

        pointerTwo.next = pointerTwo.next.next;

        
        return res.next;
    }
}
