#ifndef BANK_H
#define BANK_H

#include <stdlib.h>
#include <stdio.h>

#define MAX_NAME_LENGTH       50
#define MAX_TYPE_LENGTH       10
#define E_OK                   1
#define E_NOT_OK               0
#define MAX_COUSTOMER_NUMBER   5



typedef unsigned int uint8;
typedef uint8 STD_Return ;


typedef struct
{
    double Cash;
    unsigned int ID;
    char Name[MAX_NAME_LENGTH];
    char Type[MAX_TYPE_LENGTH];

}Customer_t;



STD_Return Create_New_Customer  (void);
STD_Return Edit_Customer_Data   (uint8 ID);
STD_Return Print_Customer_Data  (uint8 ID);
STD_Return Transfer_Money       (uint8 Source_ID, uint8 Destination_ID,double Money);
STD_Return Delete_Customer_Data (uint8 ID);
void flushInputBuffer();





#endif
