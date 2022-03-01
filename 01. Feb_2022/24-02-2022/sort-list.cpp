//Using extra space
//We can use vector to store all the elements and then sort vector 
//AModify list in sorted order
//Time complexity:O(N)
//Space complexity: O(N)

//Insertion sort
//Time complexity:O(N*N)
//Space complexity: O(1)
class Solution {
public:
    ListNode* sortList(ListNode* head) {
        if(head==NULL){
            return head;
        }
        ListNode* node=head->next;
        while(node){
            ListNode* root=head;
            while(root!=node){
                if(root->val>node->val){
                    swap(root->val,node->val);
                }
                root=root->next;
            }
            node=node->next;
        }
        return head;
    }
};

//Merge sort
//Time complexity:O(NLog(N))
//Space complexity: O(N)
class Solution {
public:
    ListNode* sortList(ListNode* head) {
        if (!head || !head->next)
            return head;
        ListNode* mid = getMid(head);
        ListNode* left = sortList(head);
        ListNode* right = sortList(mid);
        return merge(left, right);
    }

    ListNode* merge(ListNode* list1, ListNode* list2) {
        ListNode dummyHead(0);
        ListNode* ptr = &dummyHead;
        while (list1 && list2) {
            if (list1->val < list2->val) {
                ptr->next = list1;
                list1 = list1->next;
            } else {
                ptr->next = list2;
                list2 = list2->next;
            }
            ptr = ptr->next;
        }
        if(list1) ptr->next = list1;
        else ptr->next = list2;

        return dummyHead.next;
    }

    ListNode* getMid(ListNode* head) {
        ListNode* midPrev = nullptr;
        while (head && head->next) {
            midPrev = (midPrev == nullptr) ? head : midPrev->next;
            head = head->next->next;
        }
        ListNode* mid = midPrev->next;
        midPrev->next = nullptr;
        return mid;
    }
};