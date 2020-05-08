# MiniProject
project title: Management system for HGU students
* functions   
  1.void display_menu()   
  2.void input_handler(char input[], Record records[])   
  3.void initial(Record *records)   
  4.void add_a_rcord(Record[])   
  5.void print_all_records(Record[])   
  6.void update_member(Record[])   
  7.void delete_a_member(Record[])   
  8.void namesearch(Record *records, int num)   
   
1.void display_menu() :   
This function display menu to select.   
```c
void display_menu(){
  printf("******************************\n");
  printf(" Membership management system \n");
  printf("******************************\n");
  printf(" 1. Add a new membber\n");
  printf(" 2. Print all members\n");
  printf(" 3. Update member detail\n");
  printf(" 4. Delete a member\n");
  printf(" 5. Search\n");
  printf(" 99. Quit\n");
}
```   
2.void input_handler(char input[], Record records[]):   
This function executes the corresponding function to user select menu number.   
```c
void input_handler(char input[], Record records[]){
 int num=0;
	// TODO: Modify this function as you need

	if(!strcmp(input, "1"))
		add_a_record(records);
    
	else if(!strcmp(input, "2"))
		print_all_records(records);


  else if(!strcmp(input, "3"))
		update_member(records);

  else if(!strcmp(input, "4"))
		delete_a_member(records);

	else if(!strcmp(input, "5"))
		namesearch(records, num);

	else if(!strcmp(input, "99"))
		printf("Terminating... bye!\n"); // Quit - no operation (an empty statement with a semi-colon)
	else
		printf("Unknown menu: %s \n\n", input);
}
```
  

