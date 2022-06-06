#include<stdio.h>
#include<string.h>
#include<stdlib.h>



typedef struct Books
{
    int book_id;
    char book_name[20];
    char book_author[20];
    int book_quantity;
    
    struct Books *next;
}Books;

Books *head_book=NULL, *current_book=NULL;


typedef struct Users{
    int book_id;
    char book_name[20];
    char user_name[20];
    int book_quantity;
    
    struct Users *next;
}Users;


Users *head_user=NULL, *current_user=NULL;




int autoIncrement(){
    int id=0;
    for(current_book=head_book;current_book;current_book=current_book->next)
        id=current_book->book_id;
    return id+1; 
}

void addBook()
{

    Books b, *node;
    printf("Enter Book Name : ");
    scanf("%s",b.book_name);
    
    printf("Enter Book Author : ");
    scanf("%s",b.book_author);
    
    printf("Enter Book Quantity : ");
    scanf("%d",&b.book_quantity);
    
    node = (Books*)malloc(sizeof(Books));
    node->book_id=autoIncrement();

    strcpy(node->book_name, b.book_name);
    strcpy(node->book_author, b.book_author);
    node->book_quantity=b.book_quantity;

    node->next=NULL;
    
    if (head_book==NULL)
    {
        head_book=node;
    }
    else
    {
        current_book=head_book;
        while(current_book->next!=NULL)
            current_book=current_book->next;
            
        current_book->next=node;
    }
    
    
}

void removeBook()
{
	int id;
	printf("Enter Book id you want to remove");
	
	Books b, *node;
	
	printf("\nEnter book id to delete book\n");
	
	scanf("%d",&id);
	
	
	for(current_book=head_book;current_book;current_book=current_book->next)
	{
		if (id==current_book->book_id && current_book->book_quantity>=1)
		{
			printf("youuuuu go it right\n");
	
	
				//int n=4;
				struct Books * temp1 = head_book;
				struct Books * temp2 = head_book;
				while(temp1!=NULL){

				if(temp1->book_id==current_book->book_id)
				{

				//printf("Record with roll number %d Found !!!\n", house_number);

				if(temp1==temp2)
				{
				// this condition will run if
				// the record that we need to delete is the first node
				// of the linked list
				head_book = head_book->next;
				free(temp1);
				}
				else
				{
				// temp1 is the node we need to delete
				// temp2 is the node previous to temp1
				temp2->next = temp1->next;
				free(temp1);
				}

				printf("Record Successfully Deleted !!!\n");
				return;

				}
				temp2 = temp1;
				temp1 = temp1->next;

		}
	
	}
	}
}


void displayBook()
{
    printf("\n%-5s%-20s%-20s%5s\n","Id","BOOK NAME","BOOK AUTHOR","BOOK QUANTITY");
    printf("-------------------------------------------------------------------\n");
    //current_book->book_quantity=current_user->book_quantity;
    for(current_book=head_book;current_book;current_book=current_book->next){
    
    
    	if(current_book->book_quantity!=0)
    	{
        printf("%-5d%-20s%-20s%5d\n",current_book->book_id,current_book->book_name,current_book->book_author,current_book->book_quantity);
    	}
    	if(current_book->book_quantity==0){
    		printf("%s, out of stock\n",current_book->book_name);
    	}
    	}
    printf("-------------------------------------------------------------------\n\n\n");
    // system("pause");
}
	
	
void updateBook(){
	
			Users u, *node;
			
				
				int id;
				
				printf("\nenter book id to return that book\n");
			scanf("%d",&id);
			
			
	
			for(current_book=head_book;current_book;current_book=current_book->next)
			{
			
				if(id==current_book->book_id){
				

					current_book->book_quantity=current_book->book_quantity+1;
			}	}
			printf("\nI am here in update function\n");

}
void returnBook(){
	printf("\nhere we return book\n");
		int id;
	printf("Enter Book id you want to remove");
	
	Users u, *node;
	
	printf("\nEnter book id to delete book\n");
	
	scanf("%d",&id);
	
	//current_user->book_quantity=current_user->book_quantity+1;
	for(current_user=head_user;current_user;current_user=current_user->next)
	{
		if (id==current_user->book_id)
		{
			
			printf("youuuuu go it right\n");
	
	
				//int n=4;
				struct Users * temp1 = head_user;
				struct Users * temp2 = head_user;
				while(temp1!=NULL){

				if(temp1->book_id==current_user->book_id)
				{

				//printf("Record with roll number %d Found !!!\n", house_number);
				
				if(temp1==temp2)
				{
				head_user = head_user->next;
				free(temp1);
				}
				else
				{
				temp2->next = temp1->next;
				free(temp1);
				}

				printf("Record Successfully Deleted !!!\n");
				
				
				//printf("\nthis was for testing 1 -->> %d",current_book->book_quantity);
				//current_book->book_quantity=current_book->book_quantity+1;
				//printf("\nthis was for testing 2 -->> %d",current_book->book_quantity);			
				
				//node->book_id=current_book->book_id;
				//current_book->book_quantity=current_book->book_quantity+1;	
						
				return;

				}
				temp2 = temp1;
				temp1 = temp1->next;
				printf("did removing");

		}
		
	
	}
	}

	for(current_book=head_book;current_book;current_book=current_book->next){
		current_book->book_quantity=current_book->book_quantity+1;
		}
	}
	
void issueBook(){

	Users u, *node;
	
	
    	
    	printf("\nhere we will issue the book\n");
	printf("Enter Book Id to issue\n");
	
	
	scanf("%d", &u.book_id);
	
	
	
    	
	

	for(current_book=head_book;current_book;current_book=current_book->next){
		if (u.book_id==current_book->book_id && current_book->book_quantity>=1){
			printf("yes i found");
			
			current_book->book_quantity=current_book->book_quantity-1;
			
			//(current_book->book_quantity)-1;
			
			
			node = (Users*)malloc(sizeof(Users));
			printf("\n\nEnter User Name : ");
    			scanf("%s",u.user_name);
			
			
			strcpy(node->book_name, current_book->book_name);
			strcpy(node->user_name,u.user_name);
			node->book_id=current_book->book_id;
			node->book_quantity=current_book->book_quantity;
			node->next=NULL;
			    
			    if (head_user==NULL)
			    {
				head_user=node;
			    }
			    else
			    {
				current_user=head_user;
				while(current_user->next!=NULL)
				    current_user=current_user->next;
				current_user->next=node;
			    }
						
			
			}
			
			}
	
}


void displayIssueBook()
{
    printf("\n%-5s%-20s%-20s\n","Id","BOOK NAME","USER NAME");
    printf("-------------------------------------------------------------------\n");
    for(current_user=head_user;current_user;current_user=current_user->next)
        printf("%-5d%-20s%-20s\n",current_user->book_id,current_user->book_name,current_user->user_name);
    printf("-------------------------------------------------------------------\n\n\n");
    // system("pause");
}





void writeToFile(){
    FILE *fp =fopen("Books.txt","a+");
    
    for(current_book=head_book;current_book;current_book=current_book->next){
        fprintf(fp,"%d,%s,%s,%d\n",current_book->book_id,current_book->book_name,current_book->book_author,current_book->book_quantity);
    }
    fclose(fp);
}	



