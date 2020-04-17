#include <stdio.h>
#include <string.h>
#include "extras.h"
#define MAX_RECORDS 1000
// Function: defragment()
// Input: record - array of Records; this may contain empty elements in the middle
// Output: 1 if successful, otherwise 0
// - Leave a brief information about the function
/*int defragment(Record records[]){
	// TODO: Modify this function as you need
	printf("defragment(): this function needs to be implemented\n\n");
	return 0;	// TODO: return 1 if defragment succeed; return 0 otherwise 
}


// Function: add_a_record()
// Input: record - array of Records; this may contain empty elements in the middle
// Output: none
// - Leave a brief information about the function
void display_stats(Record records[]){
	// TODO: Modify this function as you need
	printf("display_stats(): this function needs to be implemented\n\n"); // TODO: Remove this line
}*/


void namesearch(Record *records)
{
   int i,j;
    char search[100];
    char q;
    /*do{*/
        printf("Name to be searched:");
        scanf("%s",search);
        for (i=0;i<MAX_RECORDS;i++)
        {
            if (strcmp(records[i].name,search) == 0)
            {
              
               
                printf("Name\tId\t\t\tAge\t\t\n");
 
                printf("%s\t",(records[i].name));
                printf("%d\t",(records[i].id));
                printf("%d\t",(records[i].age));
                printf("\n\n");

            }

            else
              printf("There's no data about input name.\n");
              break;
            }

        }
 

// TODO: Add more functions to fulfill the optional requirements
