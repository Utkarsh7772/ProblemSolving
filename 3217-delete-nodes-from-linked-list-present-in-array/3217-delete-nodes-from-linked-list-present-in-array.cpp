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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        if (head == NULL) {
            return NULL;
        }
        unordered_set<int> numsSet(nums.begin(), nums.end());

        ListNode* temp = head;
        ListNode* prev = nullptr;
        while (temp != NULL) {
            if (numsSet.find(temp->val) != numsSet.end()) {
                if (prev == NULL) {
                    head = temp->next;
                } else {
                    prev->next = temp->next;
                }
                ListNode* toDelete = temp;
                temp = temp->next;  
                delete toDelete;   
            } else {
                prev = temp;
                temp = temp->next;
            }
        }
        return head;
    }
};