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
    ListNode *removeNthFromEnd(ListNode *head, int n)
    {
        ListNode *firstPointer = head;
        ListNode *secondPointer = head;
        while (n-- != 0)
        {
            firstPointer = firstPointer->next;
        }
        if (firstPointer != NULL)
        {
            while (firstPointer->next != NULL)
            {
                firstPointer = firstPointer->next;
                secondPointer = secondPointer->next;
            }
        }
        else
        {
            return head->next;
        }
        ListNode *toFree = secondPointer->next;
        secondPointer->next = secondPointer->next->next;
        delete toFree;
        return head;
    }
};