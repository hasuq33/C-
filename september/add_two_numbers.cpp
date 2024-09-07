#include<iostream>
#include<vector>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* addTwoNumbers(ListNode *l1, ListNode *l2){
    ListNode*dummyHead = new ListNode(0);
    ListNode* current = dummyHead;
    int carry = 0;
    while(l1!=nullptr || l1 != nullptr || carry !=0 ){
        int x =(l1 != nullptr) ? l1->val: 0;
        int y= (l2 != nullptr) ? l2->val: 0;
        int sum = carry + x+ y;
        cout <<sum << endl;
        carry = sum/10;
        current->next = new ListNode(sum%10);
        current = current->next;

        if(l1 != nullptr) l1 = l1->next;
        if(l2 != nullptr) l2 = l2->next;
    }

    return dummyHead->next;
}

ListNode* createLinkedList(const vector<int>& values){
    if(values.empty()) return nullptr;
    ListNode* head = new ListNode(values[0]);
    ListNode* current = head;

    for(int i =1; values.size(); ++i){
        current->next = new ListNode(values[i]);
        current = current->next;
    } 
    return head;
}

int main(){
     vector<int> list1 = {5, 6, 4};
     vector<int> list2 = {7, 0, 8};

     ListNode*head1 = createLinkedList(list1);
     ListNode*head2 = createLinkedList(list2);


}