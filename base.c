#include <stdio.h>
#include "base.h"

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
	/*printf("print_all_records(): this function needs to be implemented\n\n");*/
}


// Function: add_a_record()
// Input: record - array of Records; this may contain empty elements in the middle
// Output: none
// - Leave a brief information about the function
void add_a_record(Record *records){
	// TODO: Modify this function as you need
  int i;
  for(i=0;i<SIZE;i++){
   if (records[i].num==-1){
     break;
   }
	/*printf("add_a_record(): this function needs to be implemented\n\n");*/
}
  records[i].num=1+i;
  printf("Name: ");
  scanf("%s",records[i].name);

  printf("Student id: ");
  scanf("%d",&records[i].id);

  printf("Age: ");
  scanf("%d",&records[i].age);

  FILE *fp= fopen("record.txt", "a+");
  fprintf(fp, "%s\t%d\t%d\t\n", records[i].name, records[i].id, records[i].age);
  fclose(fp);
  
}


// TODO: Add more functions to fulfill the requirements
