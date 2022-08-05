/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        map<ListNode*,int>m;
        int i=0;
        while(head)
        {
            if(m.find(head)==m.end())
                m[head]=i;
            else
                return head;
            i++;
            head=head->next;
        }
       return NULL; 
    }
};