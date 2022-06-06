#include <stdio.h>
void updateBook();
void displayBook();
int autoIncrement();
void addBook();
void issueBook();
void removeBook();
void returnBook();
void writeToFile();
void displayIssueBook();
//void restore();

int main()
{
    int ch;
	int n=1;
    while(n)
    {
        printf("\n\n");
        printf("<== Library Management System ==>\n");
        printf("1.Add Book\n");
        printf("2.Books List\n");
        printf("3.Remove Book\n");
        printf("4.Issue Book\n");
        printf("5.Issued Book List\n");
        printf("6.Return Book List\n");
        printf("0.Exit\n\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);

        switch(ch)
        {
        case 0:
            n=0;
            break;

        case 1:
        	addBook();    
            break;
	
	    case 2:
            
            displayBook();
            break;
            
            case 3:
            
            removeBook();
            break;
  
            case 4:
            
            issueBook();
            break;
  
            case 5:
            
            displayIssueBook();
            break;
            
            
            case 6:
            
            returnBook();
            updateBook();
            //current_book->book_quantity=current_book->book_quantity+1;
            break;
            
            
        default:
            printf("Invalid Choice...\n\n");

        }
        getchar();
    }
    printf("\nnew one");
    return 0;
}

