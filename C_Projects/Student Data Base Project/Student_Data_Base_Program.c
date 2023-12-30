

/**
*****************************************************************************************************

@file        : main.c
@author      : Islam Tohamy Shaban
@brief       : This is a Student Data Base Project

*****************************************************************************************************
**/

/* ********************************* Include section start ****************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <accctrl.h>
#include <acc_prof.h>
#include <activation.h>

/* ******************************* Include section End ********************************************** */

/* ********************************Macro Definition Section Start***************************************** */

#define MAX_FILE_NAME                  80
#define MAX_FILE_PATH                  50
#define MAX_STUDENT_NAME               50
#define MAX_STUDENT_DEPARTMENT         55
#define CHECKING_VALUE_NEGATIVE_ONE    -1
#define CHECKING_VALUE_ZERO             0
#define CHECKING_VALUE_ONE              1
#define CHECKING_VALUE_TWO              2
#define CHECKING_VALUE_THREE            3
#define CHECKING_VALUE_FOUR             4

/* ********************************Macro Definition Section End***************************************** */


/* ************************ Definition section start ************************************************** */

typedef struct
{
    unsigned int ID;
    float Grade;
    char Student_Name[MAX_STUDENT_NAME];             // '\0'
    char Student_Department[MAX_STUDENT_DEPARTMENT]; // '\0'

} Student_DataBase;


int Check_Option = CHECKING_VALUE_NEGATIVE_ONE;
int Check_Create_Append = CHECKING_VALUE_NEGATIVE_ONE;
char File_Path[MAX_FILE_PATH];


/* ************************ Definition section End ************************************************** */



/* ************************ Sub-Program Declaration section Start *********************************** */

int renameFile(const char *old_filename, const char *new_filename);

/* ************************ Sub-Program Declaration section End ************************************* */



/* ****************************** Main section start ************************************************* */

int main()
{

    Student_DataBase student;

    while (CHECKING_VALUE_ONE)
    {

        printf("Enter [0] to create file or [1] to complete in last one and [3] to exit the project finally    \n");
        printf("---------------------------------------------------------------------------------------------  \n");
        printf("If you are first student enter[0] to create data base file after that[1] to enter your data    \n");
        printf("---------------------------------------------------------------------------------------------  \n");
        printf("If YOu want to Exit ALL Program Enter Number [4] \n");
        printf("--------------------------------------------------------------------------------------------   \n");

        scanf("%d", &Check_Create_Append);

        if (Check_Create_Append == CHECKING_VALUE_ZERO)
        {

            printf("Enter File Path to Create  \n");
            scanf("%s", File_Path);

            if (File_Path == NULL)
            {
                printf("Error opening file \n");
                exit(CHECKING_VALUE_ONE);
                return 1;
            }

            FILE *File_Pointer = fopen(File_Path, "w");
            fprintf(File_Pointer, "%s,%s,%s,%s\n", "ID", "Name", "Grade", "Department");
            fclose(File_Pointer);
        }

        else if (Check_Create_Append == CHECKING_VALUE_ONE)
        {

            printf("Enter File Path to Append \n");
            scanf("%s", File_Path);

            if (File_Path == NULL)
            {
                printf("Error opening file \n");
                exit(CHECKING_VALUE_ONE);
                return 1;
            }

            FILE *File_Pointer = fopen(File_Path, "a");

            while (CHECKING_VALUE_ONE)
            {

                printf("\n================================================\n");
                printf("Enter [0] To Adding New Student Data Base \n");
                printf("Enter [1] To Deleting certain student data \n");
                printf("Enter [2] To Loading students data from file \n");
                printf("Enter [3] To Return to this choice lines again \n");
                printf("Enter [4] To Return the previous step create or append \n");
                printf("====================================================\n");

                scanf("%d", &Check_Option);

                if (Check_Option == CHECKING_VALUE_ZERO)
                {

                    printf("Enter the student ID \n");
                    scanf("%d", &student.ID);
                    printf("Enter the student Name \n");
                    scanf("%s", student.Student_Name);
                    printf("Enter the student Grade \n");
                    scanf("%f", &student.Grade);
                    printf("Enter the student Department \n");
                    scanf(" %s", student.Student_Department);

                    fprintf(File_Pointer, "%d,%s,%f,%s\n", student.ID, student.Student_Name, student.Grade, student.Student_Department);
                }

                if (Check_Option == CHECKING_VALUE_ONE)
                {
                    int Counter_Lines = 1;
                    int Line_Number_To_Remove;
                    char File_Path[MAX_FILE_NAME];

                    printf("Enter File Path to Remove Line\n");
                    scanf("%s", File_Path);

                    printf("Check the file path %s \n", File_Path);

                    printf("Enter The line Number to remove\n");
                    scanf("%d", &Line_Number_To_Remove);

                    FILE *File_Pointer = fopen(File_Path, "r");
                    FILE *File_Temp = fopen("F:\\TEST.csv", "w");

                    if (File_Pointer == NULL || File_Temp == NULL)
                    {
                        printf("Error opening file\n");
                        exit(CHECKING_VALUE_ONE);
                    }

                    // Read and process the remaining lines
                    while (fscanf(File_Pointer, "%d %99[^0-9] %f %99[^0-9]\n", &student.ID, student.Student_Name, &student.Grade, student.Student_Department) == 4)
                    {

                        if (Counter_Lines != Line_Number_To_Remove)
                        {
                            fprintf(File_Temp, "%d %s %f %s\n", student.ID, student.Student_Name, student.Grade, student.Student_Department);
                        }

                        Counter_Lines++;
                    }

                    fclose(File_Pointer);
                    fclose(File_Temp);

                    renameFile(File_Pointer, File_Temp);

                    // remove(File_Path);

                    printf("Line [%d] Removed Successfully\n", Line_Number_To_Remove);
                }

                else if (Check_Option == CHECKING_VALUE_TWO) // to load all data on the screen
                {

                    char Dis_File_Path[MAX_FILE_NAME];

                    printf("Enter the file path to display data :  \n");
                    scanf("%s", Dis_File_Path);

                    FILE *Dis_File_Pointer = fopen(Dis_File_Path, "r");

                    if (Dis_File_Pointer == NULL)
                    {
                        printf("Error opening file");
                        exit(1);
                    }

                    while (fscanf(Dis_File_Pointer, "%d %99[^0-9] %f %99[^0-9]\n", &student.ID, student.Student_Name, &student.Grade, student.Student_Department) == 4)
                    {
                        printf("%d %s %.2f %s\n", student.ID, student.Student_Name, student.Grade, student.Student_Department);
                    }

                    fclose(Dis_File_Pointer);
                }

                else if (Check_Option == CHECKING_VALUE_THREE)
                {
                    continue;
                }

                else if (Check_Option == CHECKING_VALUE_FOUR)
                {

                    printf("You Finished Your Operation \n");
                    break;
                }

                else
                {
                    printf("INVALID INPUT \n");
                }
            }

            fclose(File_Pointer);
        }
        else if (Check_Create_Append == CHECKING_VALUE_THREE)
        {
            break;
        }
        else if (Check_Create_Append == CHECKING_VALUE_FOUR)
        {
            printf("You exit the program Finally \n");
            exit(CHECKING_VALUE_ONE);
            return 1;
        }
        else
        {
            printf("INVALID INPUT<> \n");
        }
    }

    return 0;
}

/* ************************ Definition section End ************************************************** */

/* ************************ Sub-Program section Start ************************************************** */

int renameFile(const char *old_filename, const char *new_filename)
{
    if (rename(old_filename, new_filename) == 0)
    {
        printf("file renamed success \n");
        return 0; // Success
    }
    else
    {
        printf("Error renaming file \n");
        return 1; // Failure
    }
}

/* ************************ Sub-Program section End************************************************** */

/**
 Conclusion Code
*****************************************************************************************************
        User                               Date                               Brief
*****************************************************************************************************
    Islam  Tohmay                        26/12/2023                       Student Data Base Program
**/


