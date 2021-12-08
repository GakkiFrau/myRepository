#include <stdio.h>
#include <stdlib.h>

/*
 * Definition for singly-linked list.
*/
struct ListNode{
    int val;
    struct ListNode *next;
};





struct ListNode *addTwoNumbers(struct ListNode *l1,struct ListNode *l2)
{
    int lan=3;int c=0;
	struct ListNode* result;
    result = (struct ListNode*)malloc(sizeof(struct ListNode));
	struct ListNode* p;//定义结点
	struct ListNode* r;//定义结点
	r= result;
	int i;
	l1=l1->next;
	l2=l2->next;
	while(l1 || l2 || c){
		p = (struct ListNode*)malloc(sizeof(struct ListNode)); /*  生成新结点 */
		p->next=NULL;
		r->next=p;
		r=r->next;
		if(l1!=NULL){
			c+= l1->val;
			l1 = l1->next;
		}
		if(l2!=NULL){
			c+= l2->val;
			l2 = l2->next;
		}
		r->val=c%10;
		c=c/10;
		
	}
      return result;
}



struct ListNode * ListInit(int *num,int n)
{
    struct ListNode * head = (struct ListNode *)malloc(sizeof(struct ListNode));
    struct ListNode *temp = head;

    for(int i=0;i<n;i++){
        struct ListNode * a=(struct ListNode *)malloc(sizeof(struct ListNode));
        
        a->val = num[i];
        a->next=NULL;
        temp->next = a;
        temp = temp->next;
    }
  
    return head;
}

void display(struct ListNode *p){
    struct ListNode *temp = p;
    while(temp->next){
        temp = temp->next;
        printf("%d\n",temp->val);
       //  temp = temp->next;
    }
    printf("\n");
}

int ListTraverse(struct ListNode *L)
{
    struct ListNode * p=L->next;
    while(p)
    {
        printf("%d\n",p->val);
        p=p->next;
    }
    printf("\n");
    return 1;
}


int main()
{
    struct ListNode *l1 = (struct ListNode *)malloc(sizeof(struct ListNode));
    struct ListNode *l2 = (struct ListNode *)malloc(sizeof(struct ListNode));
    struct ListNode *l3 = (struct ListNode *)malloc(sizeof(struct ListNode));
 
    int num1[]={1,2,6,7};
    int num2[]={2,3,8};

   // CreateList(&l1,num1,3);
  //  CreateList(&l2,num2,3);

  
  //  ListTraverse(l3);
    l1 = ListInit(num1,4);
    l2 = ListInit(num2,3);
    ListTraverse(l1);
    display(l2);
    
    l3 = addTwoNumbers(l1,l2);
    ListTraverse(l3);
   /* int i;
    head->next = l1;
    
    for(i=0;i<3;i++){
        scanf("%d",&l1->val);
        l1->next = (struct ListNode *)malloc(sizeof(struct ListNode));
        l1 = l1->next;
    }
    l1 = head->next;
    for(i=0;i<3;i++){
        printf("%d\n",l1->val);
        l1 = l1->next;
    }
    */
   
    


}



/*
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2){
	int i=0;
    struct ListNode* p1=l1;
    struct ListNode* p2=l2;       //创建两个指针分别指向l1,l2，防止修改原链表

    struct ListNode* p;               
    p=(struct ListNode*)malloc(sizeof(struct ListNode));
    p->val=-1;
    p->next=NULL;                    //创建指针存放输出链表，p为头节点

    struct ListNode* f=p;          //结点f用来指向输出位置

    while(p1!=NULL || p2!=NULL){
        struct ListNode* d;
        d=(struct ListNode*)malloc(sizeof(struct ListNode));
        d->val=-1;
        d->next=NULL;
        f->next=d;
        f=f->next;         //创建结点并让f指向它

        //求和 注意：链表长度较短的一方会提前结束，因此需要判断一下是否已经指向最后一个结点，若指向最后一个结点，则需将其值用0表示；
        int sum=0;
        if(p1==NULL){
            sum=0+p2->val+i;
            p2=p2->next;
        }
        else if(p2==NULL){
            sum=0+p1->val+i;
            p1=p1->next;
        }
        else{
            sum=p1->val+p2->val+i;
            p1=p1->next;
            p2=p2->next;
        } 

        //判断和是否大于10，若大于则将进位设置为1，否则为0；将余数存在结点中
        if(sum>=10){
            i=1;
            f->val=sum%10;
        }
        else{
            i=0;
            f->val=sum;
        }
    }
    //最后检查进位是否是1，若是1则说明还有一位需要表示。创建结点来存放这个1。
    if(i==1){
        struct ListNode* d;
        d=(struct ListNode*)malloc(sizeof(struct ListNode));
        d->val=1;
        d->next=NULL;
        f->next=d;
    }
    //返回头结点的下一个结点
    return p->next;
}

*/