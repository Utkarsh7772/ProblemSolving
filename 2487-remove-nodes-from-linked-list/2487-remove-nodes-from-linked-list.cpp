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
  pair<int,ListNode*> help(ListNode * head){
     if(head->next==NULL)
         return {head->val,head};
        
        pair<int,ListNode*> p=help(head->next);
        if(p.first>head->val){
            return p;
        }
        else{
              head->next=p.second;
            return {head->val,head};
        }
    }
    ListNode* removeNodes(ListNode* head) {
       ListNode *  newhead=help(head).second;
        return newhead;
    }
};