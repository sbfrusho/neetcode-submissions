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
    public void reorderList(ListNode head) {
        ListNode slow = head;
        ListNode fast = head;

        // finds the middle of the list(slow)
        while(fast != null && fast.next != null) {
            slow = slow.next;
            fast = fast.next.next;
        }

        ListNode second = slow.next;  //4
        slow.next = null;
        ListNode prev = null;
        // 1 2 3 4 5 6 
        while(second != null) {
            ListNode temp = second.next; //5 
            second.next = prev; //null

            prev = second; //node 4
            second = temp; // 5
        }

        ListNode first = head;
        second = prev;
        // reverse order : 1 2 3 6 5 4
        while(second != null) {
            ListNode temp1 = first.next; //2
            ListNode temp2 = second.next; //5

            first.next = second; //6
            second.next = temp1; // 2

            first = temp1; //2
            second = temp2; // 5

        }

    }
}
