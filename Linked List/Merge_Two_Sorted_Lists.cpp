//Leetcode 21

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(!list1){
            return list2;
        }
        if(!list2){
            return list1;
        }

        ListNode* head=NULL;
        ListNode* tail=NULL;

        if(list1->val<=list2->val){
            head=tail=list1;
            list1=list1->next;
        }
        else{
            head=tail=list2;
            list2=list2->next;
        }

        

        while(list1!=NULL && list2!=NULL){
            if(list1->val<=list2->val){
                tail->next=list1;
                tail=tail->next;
                list1=list1->next;
            }
            else{
                tail->next=list2;
                 tail=tail->next;
                list2=list2->next;
            }
        }

        tail->next=(list1)? list1:list2;

        
        return head;
    }
};
