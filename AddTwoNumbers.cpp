/*
    You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order and each of their nodes contain a single digit.
    Add the two numbers and return it as a linked list. You may assume the two numbers do not contain any leading zero, except the number 0 itself.
    Example:
        Input: (2 -> 4 -> 3) + (5 -> 6 -> 4)
        Output: 7 -> 0 -> 8
        Explanation: 342 + 465 = 807.
    Complexity Analysis
        Time complexity : O(max(m,n)). Assume that mm and nn represents the length of l1l1 and l2l2 respectively, the algorithm above iterates at most max(m,n) times.
        Space complexity : O(max(m,n)). The length of the new list is at most max(m,n)+1.
        
*/

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
class Solution
{
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        int carry = 0;
        ListNode *head = new ListNode(0);
        ListNode *tmp = head;
        while (l1 != NULL || l2 != NULL)
        {
            int n1 = 0, n2 = 0;
            if (l1 != NULL)
                n1 = l1->val;
            if (l2 != NULL)
                n2 = l2->val;
            int res = carry + n1 + n2;
            head->next = new ListNode(res % 10);
            head = head->next;
            carry = res / 10;
            if (l1 != NULL)
                l1 = l1->next;
            if (l2 != NULL)
                l2 = l2->next;
        }
        if (carry != 0)
            head->next = new ListNode(carry);
        return tmp->next;
    }
};
