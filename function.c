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
    //int book_quantity;
    
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
	//int i=1;
    Books b, *node;
    printf("Enter Book Name : ");
    scanf("%s",b.book_name);
    
    printf("Enter Book Author : ");
    scanf("%s",b.book_author);
    
    printf("Enter Book Quantity : ");
    scanf("%d",&b.book_quantity);
    
    node = (Books*)malloc(sizeof(Books));
    node->book_id=autoIncrement();
    
    //b.book_id=i;
    
    //node->book_id=b.book_id;
    
    strcpy(node->book_name, b.book_name);
    strcpy(node->book_author, b.book_author);
    node->book_quantity=b.book_quantity;
    //i+=1;
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
	printf("Enter Book id you want to remove");

	
	}
	
void issueBook(){

	Users u, *node;
	
	
    	
    	printf("\nhere we will issue the book\n");
	printf("Enter Book Id to issue\n");
	
	
	scanf("%d", &u.book_id);
	
    	
	

	for(current_book=head_book;current_book;current_book=current_book->next){
		if (u.book_id==current_book->book_id){
			printf("yes i found");
			
			
			
			node = (Users*)malloc(sizeof(Users));
			printf("Enter User Name : ");
    			scanf("%s",u.user_name);
			
			
			strcpy(node->book_name, current_book->book_name);
			strcpy(node->user_name,u.user_name);
			node->book_id=current_book->book_id;
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


void displayBook()
{
    printf("\n%-5s%-20s%-20s%5s\n","Id","BOOK NAME","BOOK AUTHOR","BOOK QUANTITY");
    printf("-------------------------------------------------------------------\n");
    for(current_book=head_book;current_book;current_book=current_book->next)
        printf("%-5d%-20s%-20s%5d\n",current_book->book_id,current_book->book_name,current_book->book_author,current_book->book_quantity);
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
    //int book_quantity;
    
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
	//int i=1;
    Books b, *node;
    printf("Enter Book Name : ");
    scanf("%s",b.book_name);
    
    printf("Enter Book Author : ");
    scanf("%s",b.book_author);
    
    printf("Enter Book Quantity : ");
    scanf("%d",&b.book_quantity);
    
    node = (Books*)malloc(sizeof(Books));
    node->book_id=autoIncrement();
    
    //b.book_id=i;
    
    //node->book_id=b.book_id;
    
    strcpy(node->book_name, b.book_name);
    strcpy(node->book_author, b.book_author);
    node->book_quantity=b.book_quantity;
    //i+=1;
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
	printf("Enter Book id you want to remove");

	
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
			
			
			node = (Users*)malloc(sizeof(Users));
			printf("\n\nEnter User Name : ");
    			scanf("%s",u.user_name);
			
			
			strcpy(node->book_name, current_book->book_name);
			strcpy(node->user_name,u.user_name);
			node->book_id=current_book->book_id;
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


void displayBook()
{
    printf("\n%-5s%-20s%-20s%5s\n","Id","BOOK NAME","BOOK AUTHOR","BOOK QUANTITY");
    printf("-------------------------------------------------------------------\n");
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
void writeToFile(){
    FILE *fp =fopen("Books.txt","a+");
    
    for(current_book=head_book;current_book;current_book=current_book->next){
        fprintf(fp,"%d,%s,%s,%d\n",current_book->book_id,current_book->book_name,current_book->book_author,current_book->book_quantity);
    }
    fclose(fp);
}	



