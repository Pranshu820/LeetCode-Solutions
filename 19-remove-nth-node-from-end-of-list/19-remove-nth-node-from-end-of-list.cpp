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
    int length(ListNode* head){
        int cnt = 0;
        while(head){
            head = head -> next;
            cnt++;
        }
        
        return cnt;
    }
    
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(n == length(head)) return head -> next;
        int del = length(head) - n - 1;
        
        ListNode* temp = head;
        
        while(del--){
            temp = temp -> next;
        }
        
        temp -> next = temp -> next -> next;
        return head;
    }
};