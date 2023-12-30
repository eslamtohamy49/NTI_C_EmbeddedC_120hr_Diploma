
#include "Bank_database.h"

unsigned int Counter ;
Customer_t Customer_Number[MAX_COUSTOMER_NUMBER];


int main()
{

 char choice ;
 unsigned int ID_TO;
 unsigned int ID_FROM;
 double Money_Transferd;
 unsigned int Customer_ID;



  while(1)
  {

      printf("##Please,Select one of the following options \n");
      printf("1-Create a new customer  (press 1 to select this option)\n");
      printf("2-Edit a customer data   (press 2 to select this option)\n");
      printf("3-Delete a customer data (press 3 to select this option)\n");
      printf("4-Print a customer data  (press 4 to select this option)\n");
      printf("5-Transfer Money to one  (press 5 to select this option)\n");
      printf("6-Exit the program       (press 6 to select this option)\n");

      fflush(stdin);
      scanf(" %c",&choice);

      switch(choice)
      {

        case '1':
            if(Counter >= MAX_COUSTOMER_NUMBER)
            {
                printf("The maximum of Customers is 5 you can't add anymore \n");
                break;
            }
            Create_New_Customer();
            break;
        case '2':
            printf("Please,Enter the customer ID that you need to edit it's data\n");
            scanf("%d",&Customer_ID);
            Edit_Customer_Data(Customer_ID);
            break;
        case '3':
            printf("Please,Enter the customer ID that you need to delete it's data\n");
            scanf("%d",&Customer_ID);
            Delete_Customer_Data(Customer_ID);
            break;
        case '4':
            printf("Please,Enter the customer ID that you need to print it's data\n");
            scanf("%d",&Customer_ID);
            Print_Customer_Data(Customer_ID);
            break;
        case '5':
            printf("Please,Enter the ID of the customer who the money will transfer from his cash\n");
            scanf("%d",&ID_FROM);
            printf("Please,Enter the ID of the customer who the money will transfer to his cash\n");
            scanf("%d",&ID_TO);
            L12: printf("Please,Enter the money which will be transfered \n");
            scanf("%lf",&Money_Transferd);
            if(Money_Transferd <= 0)
            {
                printf("The money transfered should be positive number and greater than zero \n");
                goto L12;
            }
            Transfer_Money(ID_FROM,ID_TO,Money_Transferd);
            break;
        case '6':
            printf("FINISHED,You will exit the program \n");
            exit(1);
            break;
        default:
            printf("INVALID INPUT<>\n");
            break;


      }


  }




    return 0;
}
