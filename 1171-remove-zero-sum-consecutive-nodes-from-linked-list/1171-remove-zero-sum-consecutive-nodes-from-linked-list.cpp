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
    ListNode* removeZeroSumSublists(ListNode* head) {
        int len = 0, j;
        ListNode* temp = head;
        ListNode* temp1 = head;
        ListNode* prev = head;
        while (temp != nullptr) {
            len++;
            temp = temp->next;
        }
        int* arr = new int[len];
        int i = 0, sum;
        temp = head;
        while (temp != nullptr) {
            arr[i++] = temp->val;
            temp = temp->next;
        }
        int flag = 0;
        for (i = 0; i < len; i++) {
            sum = 0;
            for (j = i; j < len; j++) {
                sum = sum + arr[j];
                if (sum == 0) {
                    break;
                }
            }
            if (sum == 0)
                for (int k = i; k <= j; k++)
                    arr[k] = 0;
        }
        i = 0;
        flag = 0;
        temp = head;
        while (i < len) {
            if (arr[i] != 0) {
                flag = 1;
                prev = temp;
                temp->val = arr[i];
                temp = temp->next;
            }
            i++;
        }
        prev->next = nullptr;
        if (flag == 0) {
            head = nullptr;
            return head;
        }
        return head;
    }
};