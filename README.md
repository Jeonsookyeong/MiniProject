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
3.void initial(Record *records):   
This function initializes the records num.   
```c
void initial(Record *records){
  int i;
  for(i=0;i<SIZE;i++){
  records[i].num=-1;
  }
}
```   
4.void add_a_rcord(Record[]):   
This function adds a new data from standard input and creates the member record and open file “record.txt” and export the entire data in a report format as a .txt file.   
```c
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
```   
5.void print_all_records(Record[]):   
This function prints all the data we added before.
```c
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
```   
6.void update_member(Record[]):   
This function updates the member data in two way: updating member id and member age.
```c
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
```   
7.void delete_a_member(Record[]):   
This function deletes a certain member data which inputted to be deleted.
```c
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
```   
8.void namesearch(Record *records, int num):   
This function searches the member data by inputting certain name to be searched.
```c
void namesearch(Record *records, int num)
{
    int i,j;
    char search[SIZE];
    char q;
    
        printf("\nName to be searched:");
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
```
