#include "Bank_Database_config.h"
#include "Bank_database.h"


extern unsigned int Counter;
extern Customer_t Customer_Number[MAX_COUSTOMER_NUMBER];



/**
 *
 *
 * @breif Create a new customer in the bank
 * @return Status of the function
 *         E_OK     : The function done successfully
 *         E_NOT_OK : The function has issue to perform this action
 */
#if( CONFIG_ENABLE == CREATE_NEW_CUSTOMER_CONFIGURATION )
STD_Return Create_New_Customer(void)
{
  STD_Return ret = E_OK;
  Customer_t New_Customer ;
  if(0)/*any Checking condition*/
  {
      ret = E_NOT_OK;
  }
  else
  {
      printf("Please,Enter the name of the customer number %d \n",(Counter + 1));
      fflush(stdin);
      scanf("%s",New_Customer.Name);
      Lable: printf("Please,Enter the cash of the customer %d \n",(Counter + 1));
      scanf("%lf",&(New_Customer.Cash));
      if(New_Customer.Cash <= 0)
      {
          printf("the cash should be positive number and greater than zero  \n");
          goto Lable;
      }
      printf("Please,Enter the type of the customer %d (debit or credit) \n",(Counter + 1));
      fflush(stdin);
      scanf("%s",New_Customer.Type);

      printf("Please,Enter the ID of the customer %d \n",(Counter + 1));
      scanf("%i",&(New_Customer.ID));


      Customer_Number[Counter] = New_Customer;
      Counter++;

      ret = E_OK;

  }


  return ret;
}
#endif



/**
 *
 *
 * @breif  This Function used to edited the customer data
 * @pragma ID : user id
 * @return Status of the function
 *         E_OK     : The function done successfully
 *         E_NOT_OK : The function has issue to perform this action
 */
#if( CONFIG_ENABLE == EDIT_CUSTOMER_DATA_CONFIGURATION )
STD_Return Edit_Customer_Data(uint8 ID)
{
    unsigned int index;
    STD_Return ret = E_OK;
  if(ID < 0)/*any Checking condition*/
  {
      ret = E_NOT_OK;
  }
  else
  {
    for(index =0;index <= Counter; index++)
    {
        if(ID == Customer_Number[index].ID)
        {
            printf("Please,Enter the new name \n");
            fflush(stdin);
            scanf("%s",Customer_Number[index].Name);

            printf("Please,Enter the new cash \n");
            scanf("%lf",&(Customer_Number[index].Cash));

            printf("Please,Enter the new type(debit or credit)\n");
            fflush(stdin);
            scanf("%s",Customer_Number[index].Type);

            printf("Please,Enter the new ID \n");
            scanf("%d",&(Customer_Number[index].ID));
            printf("\n\n");

            ret = E_OK;

            break;

        }
    }



  }


  return ret;

}
#endif




/**
 *
 *
 * @breif  This Function used to print the user data
 * @pragma ID : user id
 * @return Status of the function
 *         E_OK     : The function done successfully
 *         E_NOT_OK : The function has issue to perform this action
 */
#if( CONFIG_ENABLE == PRINT_CUSTOMER_DATA_CONFIGURATION )
STD_Return Print_Customer_Data (uint8 ID)
{
    unsigned int index;
    STD_Return ret = E_OK;
  if(ID < 0)/*any Checking condition*/
  {
      ret = E_NOT_OK;
  }
  else
  {

    for(index =0; index <= Counter; index++)
    {
        if(ID == Customer_Number[index].ID)
        {
          printf("The Name of the customer number %d is : %s \n",(index+1),Customer_Number[index].Name);
          printf("The Cash of the customer number %d is : %lf\n",(index+1),Customer_Number[index].Cash);
          printf("The Type of the customer number %d is : %s \n",(index+1),Customer_Number[index].Type);
          printf("The ID   of the customer number %d is : %i \n",(index+1),Customer_Number[index].ID);

          ret = E_OK;

          break;

        }

    }


  }




  return ret;

}
#endif





/**
 *
 *
 * @breif  This function is to transfer balance from customer to another one
 * @pragma Money : the amount of money that the user need to transfer
 * @pragma Source_ID      : is the customer who will transfer from  his account
 * @pragma Destination_ID : is the customer who will take the balance to his account
 * @return Status of the function
 *         E_OK     : The function done successfully
 *         E_NOT_OK : The function has issue to perform this action
 */
#if( CONFIG_ENABLE == TRANSFER_CUSTOMER_MONEY_CONFIGURATION )
STD_Return Transfer_Money(uint8 Source_ID, uint8 Destination_ID,double Money)
{
     signed int i ;
     signed int index_from=-1 ;
     signed int index_to=-1 ;

     STD_Return ret = E_OK;
  if(Money < 0)/*any Checking condition*/
  {
      ret = E_NOT_OK;
  }
  else
  {


L1: for(i=0;i<=Counter;i++)
     {

          if(Customer_Number[i].ID==Source_ID)
          {
              index_from=i ;
          }
          else if (Customer_Number[i].ID==Destination_ID)
          {
              index_to=i ;
          }
          if((index_from!=-1)&&(index_to!=-1))
          {
             break;
          }


    }

    if((index_from==-1)||(index_to==-1))
    {
         printf("Please,Enter a valid ID \n");

    }
    if(Money > Customer_Number[index_from].Cash)
    {
        printf("the Money transfered is greater than your cash \n");
        printf("please enter the Money transfered again and take care :");
        scanf("%lf",&Money);
        goto L1;
    }

     Customer_Number[index_from].Cash = Customer_Number[index_from].Cash - Money;
     Customer_Number[index_to].Cash   = Customer_Number[index_to].Cash + Money;

    ret = E_OK;

  }



  return ret;

}
#endif




/**
 *
 * @breif  This function is to delete data of a specific customer
 * @pragma ID : is the customer id
 * @return Status of the function
 *         E_OK     : The function done successfully
 *         E_NOT_OK : The function has issue to perform this action
 */
#if( CONFIG_ENABLE == CREATE_NEW_CUSTOMER_CONFIGURATION )
STD_Return Delete_Customer_Data (uint8 ID)
{
    unsigned int i ;
    unsigned int index ;
    STD_Return ret = E_OK;
  if(ID < 0)/*any Checking condition*/
  {
      ret = E_NOT_OK;
  }
  else
  {

    for(i=0;i<=Counter-1;i++)
     {
         if(Customer_Number[i].ID == ID)
         {
            index=i ;
           for(i=index; i<=Counter-1 ; i++)
            {
              Customer_Number[i]=Customer_Number[i+1];

            }

         }

      }

        Customer_Number[Counter].Cash =-1;           // -1 indicate this is empty place for new customer
        Customer_Number[Counter].ID =-1 ;            // -1 indicate this is empty place for new customer
        strcpy(Customer_Number[Counter].Name,"-1");  // -1 indicate this is empty place for new customer
        strcpy(Customer_Number[Counter].Type,"-1");  // -1 indicate this is empty place for new customer
        Counter--;


        ret = E_OK;

  }




  return ret;

}
#endif

