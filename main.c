#include <stdio.h>
#include <string.h>
#include "base.h"
#include "extras.h"
#include "record.h"

#define MAX_RECORDS 1000

// function prototypes
void input_handler(char[], Record[]);
void display_menu();
void namesearch(Record *records, int num);

//추가
void initial(Record *records){
  int i;
  for(i=0;i<SIZE;i++){
  records[i].num=-1;
  }
}

// main function
int main(){

	Record records[MAX_RECORDS];
  //추가
  initial(records);
  int num=0;
	char user_input[64] = "";
	while(strcmp(user_input, "99") != 0){
		display_menu();
		printf("\nSelect a menu> ");
		fgets(user_input, 64, stdin);
		user_input[strlen(user_input)-1] = '\0';
		input_handler(user_input, records);
    
}
return 0;
}


// Function: input_handler()
// Input: record - array of Records; this may contain empty elements in the middle
// Output: none
// - Handles the user input and invokes functions that correspond to the user input
void input_handler(char input[], Record records[]){
  int num=0;
	// TODO: Modify this function as you need

	if(!strcmp(input, "1"))
		add_a_record(records);
    
	else if(!strcmp(input, "2"))
		print_all_records(records);	
    
	else if(!strcmp(input, "5"))
		namesearch(records, num);
		
	else if(!strcmp(input, "99"))
		printf("Terminating... bye!\n"); // Quit - no operation (an empty statement with a semi-colon)
	else
		printf("Unknown menu: %s \n\n", input);


}







// Function: display_menu()
// Input: none
// Output: none
// - Leave a brief information about the function
void display_menu(){

	// TODO: Modify this function as you need
	printf("******************************\n");
	printf(" Membership management system \n");
	printf("******************************\n");
	printf(" 1. Add a new membber\n");
	printf(" 2. Print all members\n");
	printf(" 3. Optimize (defragment) the records\n");
	printf(" 4. Member statistics\n");
	printf(" 99. Quit\n");
}
