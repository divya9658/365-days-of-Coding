/* Link list Node
struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }

};
*/

/* Should return true if linked list is circular, else false */
class Solution {
  public:
    bool isCircular(Node *head) {
        if (head == nullptr) return true;

        Node *slow = head, *fast = head;
        bool hasCycle = false;
        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
            if (slow == fast) { hasCycle = true; break; }
        }

        if (!hasCycle) return false;
        Node *ptr = slow;
        do {
            if (ptr == head) return true;
            ptr = ptr->next;
        } while (ptr != slow);

        return false;
    }
};
