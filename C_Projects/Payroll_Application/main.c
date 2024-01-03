#include <stdio.h>
#include <stdlib.h>
struct node
{
    int id;
    char name[50];
    int rate;
    int hours;
    struct node * next;
};


void   display             (struct node * first);
void   FIRST_NODDE         (struct node * first);
void   deletelast          (struct node * listptr);
void   Create_Linked_List  (struct node * first);
void   create_n_nodes      (struct node * first,int n);
void   display_node        (struct node * first,int wor);
struct node *deletefirst   (struct node * listptr);
int    sum_salary          (struct node * first);
int    best                (struct node * first);
int    worest              (struct node * first);
int    pos                 (struct node * first,int wor);


int main()
{
    FILE *ptr = fopen("G:\\employee.csv","w");

    fprintf(ptr, "%s, %s, %s, %s, %s\n", "ID","Name","Rate","hours","payment");

    struct node * first=(struct node *)malloc(sizeof(struct node));

    Create_Linked_List(first);

    struct node *list=first;

     while(list!=NULL)
    {
        fprintf(ptr, "%d,%s,%d,%d,%.2f\n",
                list->id,list->name,list->rate,list->hours,((float)list->rate*list->hours));


        list=(list->next);
    }

    int sum=sum_salary(first);


    printf("Total salary for all employee=%d\n",sum);

    int b=best(first);
    int wor=worest(first);
    printf("the best employee :%d\n",b);
    printf("the worst employee :%d\n",wor);

    printf("the best  employee :\n");

    display_node(first,b);

    int position=pos(first,wor);
    printf("the worst position is  :%d\n",position);

    int c = count_nodes(first);
    if(position==1)
    {

        first=deletefirst(first);
    }
    else if (position==c)
    {

        deletelast(first);
    }
    else
    {
        delmid(first,position);
    }
    list=first;
    int counter=1;
     FILE *file2 = fopen("G:\\edit.csv","w");
    fprintf(file2, "%s, %s, %s, %s, %s\n", "ID","Name","Rate","hours","payment");
    for(counter=1;list!=NULL;counter++)
    {
        if(counter!=position)
        {
            fprintf(file2, "%d,%s,%d,%d,%f\n",
                list->id,list->name,list->rate,list->hours,((float)list->rate*list->hours));

        }
        else
        {

            continue;
        }



        printf("list->id=%d\n",list->id);

        list=(list->next);
    }
    display(first);

    return 0;
}
void FIRST_NODDE(struct node * first)
{
    printf("ENTER THE ID OF THE FIRST NODE :");
    scanf("%d",&first->id);
    printf("ENTER THE NAME OF THE FIRST NODE :");
    scanf("%s",&first->name);
    printf("ENTER THR RATE OF THE FIRST NODE :");
    scanf("%d",&first->rate);
     printf("ENTER THR HOURS FOR THR FIRST NODE :");
    scanf("%d",&first->hours);
    first->next=NULL;
}

void create_n_nodes(struct node * address,int n)
{
    int i;
    struct node * new_node;
    for(i=0;i<n;i++)
    {
        new_node=(struct node *)malloc(sizeof(struct node));
        printf("ENTER ID OF THE NODE : %d :",i+2);
        scanf("%d",&new_node->id);
        printf("ENTER THE NAME OF THE NODE  : %d:",i+2);
        scanf("%s",&new_node->name);
        printf("ENTER THE RATE OF THE NODE  :%d :",i+2);
        scanf("%d",&new_node->rate);
        printf("ENTER THE HOURS OF THE NODE : %d :",i+2);
        scanf("%d",&new_node->hours);
        new_node->next=NULL;
        address->next=new_node;
        address=new_node;
    }
}

void Create_Linked_List(struct node * first)
{
    int n;
    printf("IT'S THE PROGRAM PAGE \n");
    printf("FRISTLY , LINKED LIST CREATION \n");
        FIRST_NODDE(first);
        printf("ENTER THE NUMBER OF NODES : \n");
        scanf("%d",&n);
        create_n_nodes(first,n);
}

void display(struct node * first)
{
    int i=0;

    while(first!=NULL)
    {
        printf("ID OF NODE %d : %d : \n",i+1,first->id);
        printf("NAME OF NODE %d: %s : \n",i+1,first->name);
        printf("RATE OF NODE %d : %d :\n",i+1,first->rate);
        printf("HOURS OF NODE %d : %d :\n",i+1,first->hours);
        first=first->next;
        i++;
    }


}

int sum_salary(struct node * first)
{
    int i=0,sum=0;

    while(first!=NULL)
    {
        sum=sum+((first->rate)*(first->hours));
        first=first->next;
        i++;
    }
    return sum;
}

int best(struct node * first)
{
    int i=0,best=0;

    while(first!=NULL)
    {
       if((first->hours)>best)
       {
           best=first->hours;
       }
       else ;
        first=first->next;
        i++;
    }
    return best;
}

int worest(struct node * first)
{
    int i=0,worest=first->hours;

    while(first!=NULL)
    {
       if((first->hours)<worest)
       {
           worest=first->hours;
       }
       else ;
        first=first->next;
        i++;
    }
    return worest;
}

int pos(struct node * first,int wor)
{
    int i=1;
    while(first->hours!=wor)
    {
        first=first->next;
        i++;
    }
    return i;
}

void display_node(struct node * first,int wor)
{
    int i=1;
    while(first->hours!=wor)
    {
        first=first->next;
        i++;
    }
   printf("Best Employee ID is :%d \n",first->id);
   printf("Best Employee NAME is %s\n",first->name);
   printf("Best Employee HOURS is %d\n",first->hours);
   printf("Best Employee RATE is %d\n",first->rate);
}

int count_nodes(struct node * list1)
{
    int count=0;
    struct node * list=list1;
    while(list!=NULL)
    {
        count++;
        list=(list->next);
    }
    return count;
}

void delmid(struct node * listptr,int pos)
{
    struct node * localptr=listptr;
    struct node * dellist;
    int i;
    int size=count_nodes(listptr);
    if((pos<2) || (pos>size-1))
    {
        printf("INVALID POSITION\n");
    }
    else
    {
        for(i=1;i<pos-1;i++)
    {
        localptr=localptr->next;
    }
    dellist=localptr->next;
    localptr->next=localptr->next->next;
    //free(dellist);
    }


}

void deletelast(struct node * listptr)
{
struct node * localptr=listptr;
while(localptr->next->next!=NULL)
{
    localptr=localptr->next;
}

struct node * lastptr=localptr->next;
localptr->next=NULL;
free(lastptr);
}

struct node * deletefirst(struct node * listptr)
{
    struct node *newhead=listptr;
    newhead=listptr->next;
    free(listptr);
    return newhead;

}
