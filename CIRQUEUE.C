#include<stdio.h>
#include<conio.h>
int front=-1,rear=-1,x,i,queue[30],n;
void eneque()
{
 if(front==-1&&rear==-1)
	{
	 printf("\nenter the element to be inserted :");
	 scanf("%d",&x);
	 front=rear=0;
	 queue[rear]=x;
	}
 else if((rear+1)%n==front)
	{
	 printf("\n queue is full !!\n");
	}
 else
	{
	 printf("\nenter the element to be inserted :");
	 scanf("%d",&x);
	 rear=(rear+1)%n;
	 queue[rear]=x;
	}
}
void dequeue()
{
 if(rear==-1&&front==-1)
  {
   printf("\nqueue is empty !!\n");
  }
 else if(front==rear)
  {
   printf("\n%d element is deleted \n",queue[front]);
   front=rear=-1;
  }
 else

   {
   printf("\n %d is deleted succesfully !!\n",queue[front]);
   front=(front+1)%n;
  }
}
void display()
{
 if(rear==-1&&front==-1)
  {
   printf("\nqueue is empty\n");
  }
 else
  {
     printf("\nqueu is :");
     for(i=front;i!=rear;i=(i+1)%n)
     {
     printf("%d ",queue[i]);
     }
     printf("%d",queue[rear]);
  }
}
void search()
{
 int s,flag=0;
 if(front==-1&&rear==-1)
 {
  printf("\nqueue is empty!!");
 }
 else
 {
  printf("\nenter the element to search :");
  scanf("%d",&s);
  for(i=front;i!=rear;i=(i+1)%n)
  {
   if(queue[i]==s)
   printf("\n %d found at position %d ",s,i);
   flag=1;
  }
  if(queue[rear]==s)
  printf("\n%dfound at %d pos ",s,rear);
 }
 if(flag==0)
 printf("\nnot found");
}
void main()
{
 int c;
 clrscr();
 printf("\nenter the size of queue :");
 scanf("%d",&n);
 while(1)
	{
	 printf("\nselect a choice :\n1.enequeue\n2.dequeue\n3.dispaly\n4.exit\n5.search\n");
	 scanf("%d",&c);
	 switch(c)
		{
		 case 1:eneque();
			break;
		 case 2:dequeue();
			break;
		 case 3:display();
			break;
		 case 4:exit();
			break;
		 case 5:search();
			break;
		 default:printf("\nenter a valid choice !!\n");
		}
	}
}