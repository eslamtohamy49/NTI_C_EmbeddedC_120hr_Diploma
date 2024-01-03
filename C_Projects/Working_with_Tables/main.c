#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct TableRow
{
    char **values;
    struct TableRow *next;
};


struct Table
{
    char *tableName;
    char **columns;
    struct TableRow *rows;
    struct Table *next;
};

void selectFromTable(const struct Table *table);
void insertIntoTable(struct Table *table, char **values);
struct Table* createTable(const char *tableName, char **columns) ;

int main()
{

    char *columns[] = {"ID", "Name", "Age", NULL};

    struct Table *myTable = createTable("Person", columns);


    insertIntoTable(myTable, (char*[]){"1", "John", "25", NULL});
    insertIntoTable(myTable, (char*[]){"2", "Jane", "30", NULL});
    insertIntoTable(myTable, (char*[]){"3", "Bob", "22", NULL});

    selectFromTable(myTable);

    free(myTable->tableName);
    free(myTable);

    return 0;
}


// Function to create a table
struct Table* createTable(const char *tableName, char **columns)
{
    struct Table *table = (struct Table*)malloc(sizeof(struct Table));
    table->tableName = strdup(tableName);
    table->columns = columns;
    table->rows = NULL;
    table->next = NULL;
    return table;
}


// Function to insert a row into a table
void insertIntoTable(struct Table *table, char **values)
{
    struct TableRow *newRow = (struct TableRow*)malloc(sizeof(struct TableRow));
    newRow->values = values;
    newRow->next = NULL;

    char *primaryKeyValue = values[0];

    struct TableRow *currentRow = table->rows;
    while (currentRow != NULL)
    {
        if (strcmp(currentRow->values[0], primaryKeyValue) == 0)
        {
            printf("Error: Primary key constraint violated.\n");
            free(newRow);
            return;
        }
        currentRow = currentRow->next;
    }


    newRow->next = table->rows;
    table->rows = newRow;

}


// Function to select data from a table
void selectFromTable(const struct Table *table)
{

    for (int i = 0; table->columns[i] != NULL; ++i)
    {
        printf("%s\t", table->columns[i]);
    }
    printf("\n");


    struct TableRow *currentRow = table->rows;
    while (currentRow != NULL)
    {
        for (int i = 0; currentRow->values[i] != NULL; ++i)
        {
            printf("%s\t", currentRow->values[i]);
        }
        printf("\n");
        currentRow = currentRow->next;
    }
}
