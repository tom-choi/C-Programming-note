#include <iostream>
using namespace std;
struct ListNode {
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2)
    {

        int res = 0;
        ListNode* Ans = new ListNode;
        ListNode* r = Ans;
        while (l1 && l2)
        {
            ListNode* l3 = new ListNode;
            r->next = l3;
            r = l3;
            l3->val = ((l1->val + l2->val + res)) % 10; res = ((l1->val + l2->val + res)) / 10;
            l1 = l1->next; l2 = l2->next;
        }
        while (l1)
        {
            ListNode* l3 = new ListNode;
            r->next = l3;
            r = l3;
            l3->val = (l1->val + res) % 10; res = (l1->val + res) / 10;
            l1 = l1->next;
        }
        while (l2)
        {
            ListNode* l3 = new ListNode;
            r->next = l3;
            r = l3;
            l3->val = (l2->val + res) % 10; res = (l2->val + res) / 10;
            l2 = l2->next;
        }
        if (res != 0)
        {
            ListNode* l3 = new ListNode;
            r->next = l3;
            l3->val = res;
        }
        Ans = Ans->next;
        return Ans;
    }
};