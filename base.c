#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "base.h"
#define SIZE 100
#define MAX_RECORDS 1000
// Function: print_all_records()
// Input: record - array of Records; this may contain empty elements in the middle
// Output: none
// - Leave a brief information about the function





void print_all_records(Record *records){
	// TODO: Modify this function as you need
   int i;
  for(i=0;i<SIZE;i++){
    if(records[i].num==-1){
      printf("\n");

    }else{
      printf("%d. %s | %d | %d |\n",  records[i].num,records[i].name,records[i].id,records[i].age);
    }
  }
	
}


void add_a_record(Record *records){
	// TODO: Modify this function as you need
  int i;
  for(i=0;i<SIZE;i++){
   if (records[i].num==-1){
     break;
   }
	
}
  records[i].num=1+i;
  printf("\nName: ");
  scanf("%s",records[i].name);

  printf("Student id: ");
  scanf("%d",&records[i].id);

  printf("Age: ");
  scanf("%d",&records[i].age);

  FILE *fp= fopen("record.txt", "a+");
  fprintf(fp, "%s\t%d\t%d\t\n", records[i].name, records[i].id, records[i].age);
  fclose(fp);
  
}


  
  void update_member(Record *records){
 
    int i;
    char search[SIZE], ch[SIZE];
    printf("\nInput name to be updated: ");
    scanf("%s",search);
    for (i=0;i<MAX_RECORDS;i++){
          
    if (strcmp(records[i].name, search) == 0)
    {
      printf("Choose Id or Age to be updated: ");
      scanf("%s",ch);
       if(strcmp(ch, "Id") == 0){
        
          
                   
                        printf("%s's id before updated: %d\n",search,records[i].id);

                        printf("Input %s's new id: ", search);

                        scanf("%d",&records[i].id);
                        printf("%s's id after updated: %d\n",search,records[i].id);
                        printf("%s's Id is updated\n",search);  
                        break;
                        }
    }
                        
      else{
               printf("There's no data about input name.\n");
               break;
            }

      if(strcmp(ch, "Age") == 0){
        
          
                   
                        printf("%s's age before updated: %d\n",search,records[i].age);

                        printf("Input %s's new age: ", search);

                        scanf("%d",&records[i].age);
                        printf("%s's age after updated: %d\n",search,records[i].age);
                        printf("%s's Age is updated\n",search);  
                        break;
                        }
    
                        
      else{
               printf("There's no data about input name.\n");
               break;
            }

          
        }
  }
          
  
  

void delete_a_member(Record *records)
{
    int i = 0;
    char search[SIZE];  
    char s1[SIZE], s2[SIZE];  
    char nullStr[SIZE] = {"\0"};  
    
    printf("\nInput name to be deleted: ");
    scanf("%s", search); 
  
    for (i=0;i<MAX_RECORDS;i++)
    {
        if (strcmp(records[i].name, search) == 0) 
        {
          
                    strcpy(records[i].name, nullStr); 
                    sprintf(s1, "%d", records[i].id); 
                    strcpy(s1, nullStr); 
                    sprintf(s2, "%d", records[i].age);
                    strcpy(s2, nullStr);
                   
                    printf("%s's data is deleted.\n", search);
                    
                    break;
                
            

        }
        
    }
     printf("There's no data about input name.\n");
}
