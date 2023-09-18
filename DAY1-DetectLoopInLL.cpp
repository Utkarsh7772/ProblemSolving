#include <iostream>

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* slow = head;
        ListNode* fast = head;
        bool hasCycle = false;
        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
            if (slow == fast) {
                hasCycle = true;
                break;
            }
        }
        if (hasCycle) {
            slow = head;
            while (slow != fast) {
                slow = slow->next;
                fast = fast->next;
            }
            return slow;
        }
        return nullptr;
    }
};
int main() {
    // Create a linked list with a cycle for demonstration
    ListNode* head = new ListNode(3);
    ListNode* cycleNode = new ListNode(2);
    head->next = new ListNode(1);
    head->next->next = new ListNode(-4);
    head->next->next->next = cycleNode;
    cycleNode->next = head->next; // Create a cycle here

    Solution solution;
    ListNode* cycleStart = solution.detectCycle(head);

    if (cycleStart) {
        std::cout << "Cycle detected. Start of the cycle: " << cycleStart->val << std::endl;
    } else {
        std::cout << "No cycle detected." << std::endl;
    }
    return 0;
}