/*
// Definition for a Node.
class Node {
    int val;
    Node next;
    Node random;

    public Node(int val) {
        this.val = val;
        this.next = null;
        this.random = null;
    }
}
*/

class Solution {
    public Node copyRandomList(Node head) {

        Map<Node, Node> copyToOld = new HashMap<>();
        Node cur = head;
        // create copy of all nodes
        while(cur != null) {
            copyToOld.put(cur, new Node(cur.val));
            cur = cur.next;
        }
        cur = head;

        while(cur != null) {
            Node copy = copyToOld.get(cur);
            copy.next = copyToOld.get(cur.next);
            copy.random = copyToOld.get(cur.random);
            cur = cur.next;
        }
        return copyToOld.get(head);
    }

}