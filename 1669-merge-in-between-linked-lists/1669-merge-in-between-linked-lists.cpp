class Solution {
public:
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
          ListNode*ll=list1;
          int j=0;
          while(ll!=NULL){
            if(j!=b){
                ll=ll->next;
                j++;
            }
            else{
break;
            }
          }
            ListNode*v=ll->next;
          ListNode*ans= new ListNode(-1);
            ListNode*mptr=ans;
            int i=0;
              ListNode*temp=list1;
              while(list1!=NULL){
                if(i!=a){
                    mptr->next=new ListNode(temp->val);
                    mptr=mptr->next;
                    temp=temp->next;
                    i++;
                }
                else{
                    while(list2!=NULL){
                        mptr->next=new ListNode(list2->val);
                        mptr=mptr->next;
                        list2=list2->next;
                    }
                    break;
                }
              }
mptr->next=v;
 mptr=ans->next;
         return mptr;
    }
};