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

        ListNode* ans = nullptr;
        ListNode* temp = nullptr;
        int p = 0;

        // Both lists have nodes
        while (l1 != nullptr && l2 != nullptr) {

            int c = p + l1->val + l2->val;

            int digit = c % 10;
            p = c / 10;

            if (ans == nullptr) {
                ans = new ListNode(digit);
                temp = ans;
            }
            else {
                temp->next = new ListNode(digit);
                temp = temp->next;
            }

            l1 = l1->next;
            l2 = l2->next;
        }

        // Remaining nodes of l1
        while (l1 != nullptr) {

            int c = p + l1->val;

            int digit = c % 10;
            p = c / 10;

            temp->next = new ListNode(digit);
            temp = temp->next;

            l1 = l1->next;
        }

        // Remaining nodes of l2
        while (l2 != nullptr) {

            int c = p + l2->val;

            int digit = c % 10;
            p = c / 10;

            temp->next = new ListNode(digit);
            temp = temp->next;

            l2 = l2->next;
        }

        // Remaining carry
        if (p != 0) {
            temp->next = new ListNode(p);
        }

        return ans;
    }
};