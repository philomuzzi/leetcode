#include <cstring>

//Definition for singly-linked list.

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

// 我本来的想法是用一个vector来保存所有的项，这样就是用空间来换时间。
// 但是参考他们的讨论：用两个指针，相差n项来移动，则是空间时间双赢啊。

class Solution {
public:
    ListNode *removeNthFromEnd(ListNode *head, int n) {
        if (!head)
            return head;

        ListNode *fast = head;
        ListNode *slow = head;  // 指向要删除的节点之前的节点

        for (; n > 0; n--)
            fast = fast->next;

        // 表示要删除第一个
        if (!fast)
        {
            head = head->next;
            slow->next = NULL;
            return head;
        }

        while(fast->next)
        {
            fast = fast->next;
            slow = slow->next;
        }

        // 主要是为了保证slow->next->next
        if (slow->next)
            slow->next = slow->next->next;

        return head;
    }
};


int main()
{
//    Solution s;
    return 0;
}