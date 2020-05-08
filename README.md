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
   
1.void display_menu() : This function display menu to select.   
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
  

