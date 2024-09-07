#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* modifiedList(vector<int>&nums,ListNode* head){
    unordered_set<int> valuesToDelete(nums.begin(), nums.end());

    // create a dummy node 
    ListNode* dummy = new ListNode(-1);
    dummy->next = head;
    ListNode*current = dummy;

    // Traverse the LinkedList 
    while(current->next != nullptr){
        if(valuesToDelete.count(current->next->val)){
            ListNode*temp = current->next;
            current->next = current->next->next;
            delete temp;//Free Memory 
        }else{
            current = current->next;
        }
    }

    ListNode* newHead = dummy->next;
    delete dummy;
    return newHead;
}

void printList(ListNode* head){
    ListNode* currernt = head;
    while(currernt != nullptr){
        cout << currernt->val<<"->";
        currernt = currernt->next;
    }
    cout<< "nullptr"<<endl;
}

int main(){
    vector<int> nums{1,2,3};
    ListNode* head = new ListNode(1);
    ListNode* node1 = new ListNode(2);
    ListNode* node2 = new ListNode(3);
    ListNode* node3 = new ListNode(4);
    ListNode* tail = new ListNode(5);

    head->next = node1;
    node1->next = node2;
    node2->next = node3;
    node3->next = tail;

    printList(head);

    modifiedList(nums,head);

}