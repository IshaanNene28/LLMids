#include<stdio.h>
#include<math.h>

struct ListNode {
      int val;
      struct ListNode *next;
  };

struct ListNode* middleNode(struct ListNode* head) {
    struct ListNode* nope = head;
    int n=0;
    while(nope!=NULL)
    {
        n++;
        nope=nope->next;
    }
    n = n%2==0?(n/2):(n/2)+0.5;
    struct ListNode* newnope = head;
    while(n!=0)
    {
        newnope = newnope->next;
        n--;
    }
    return newnope;
}
