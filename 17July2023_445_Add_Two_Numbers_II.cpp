#include<stack>

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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        stack<int> s1;
        stack<int> s2;
        while(l1!=nullptr){
            s1.push(l1->val);
            l1=l1->next;
        }
        while(l2!=nullptr){
            s2.push(l2->val);
            l2=l2->next;
        }
        int sum=0;
        int carry=0;
        ListNode* ans=nullptr;

        while(!s1.empty() || !s2.empty()){
            if(!s1.empty()){
                sum+=s1.top();
                s1.pop();
            }
            if(!s2.empty()){
                sum+=s2.top();
                s2.pop();
            }
            sum+=carry;
            carry=sum/10;
            ListNode* newNode = new ListNode(sum%10);
            newNode ->next=ans;
            ans=newNode;
            sum=0;
        }
        if(carry!=0){
            ListNode* newNode = new ListNode(carry);
            newNode->next=ans;
            ans=newNode;
        }
        return ans;
    }
};
// link : https://www.youtube.com/watch?v=bcqCFKSME7w
