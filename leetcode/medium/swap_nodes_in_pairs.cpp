#include <bits/stdc++.h>
using namespace std;

struct ListNode {
 int val;
 ListNode *next;
 ListNode() : val(0), next(nullptr) {}
 ListNode(int x) : val(x), next(nullptr) {}
 ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if(head == nullptr) return nullptr;
        ListNode* ret = head->next;
        ListNode* current = head;
        ListNode* prev = nullptr; 
        
        while(current != nullptr && current->next != nullptr) { 
            // swap
            ListNode* nextNext = current->next->next;
            current->next->next = current;
            // current->next should be connected to previous
            if(prev != nullptr) prev->next = current->next;
            current->next = nextNext;
            prev = current;
            current = nextNext;
        }
        
        return ret == nullptr ? head : ret;
    }
};
