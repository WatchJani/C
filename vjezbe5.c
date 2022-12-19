#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

const int MAX_STRING_LENGTH = 500;
const int MAX_TASKS = 10;

void load_tasks(char tasks[][MAX_STRING_LENGTH], int* size);
void save_tasks(char tasks[][MAX_STRING_LENGTH], int* size);
void print_tasks(char tasks[][MAX_STRING_LENGTH], int* size);
void add_task(char tasks[][MAX_STRING_LENGTH], int* size, char task[]);
void main_menu(char tasks[][MAX_STRING_LENGTH], int* size);
void remove_task(char tasks[][MAX_STRING_LENGTH], int* size, int index_to_remove);


int main(int argc, char* argv[]){
   char tasks[MAX_TASKS][MAX_STRING_LENGTH];
   int size;
   load_tasks(tasks, &size);

   if(argc == 2){
       add_task(tasks, &size, argv[1]);
   }
    main_menu(tasks, &size);
   
}

void save_tasks(char tasks[][MAX_STRING_LENGTH], int* size){
    FILE* file = fopen("tasks.txt", "w");

    if( file == NULL){
        printf("Error: Could not open file for writibg!\n");
    }

    for(int i = 0; i < *size; i++){
        fprintf(file, "%s", tasks[i]);
    }

    fclose(file);
}

void remove_task(char tasks[][MAX_STRING_LENGTH], int* size, int index_to_remove){
    if(index_to_remove < 0 || index_to_remove >= *size){
        printf("Eroor: index to remove pot valid!\n");
        return;
    }

    for(int i = index_to_remove; i< (*size) - 1; i++){
        strcpy(tasks[i], tasks[i+1]);
    }

    *size -= 1;
}

void main_menu(char tasks[][MAX_STRING_LENGTH], int* size){
    print_tasks(tasks, size);
    printf("Write <index> to remove element from list, or just press [entre] to exit: ");


    char line[MAX_STRING_LENGTH];
    fgets(line, sizeof(line), stdin);

    int selected_index;
    if(sscanf(line ,"%i", &selected_index) == 1){
        remove_task(tasks, size, selected_index);
        main_menu(tasks, size);
    }

    save_tasks(tasks, size);
}

void add_task(char tasks[][MAX_STRING_LENGTH], int* size, char task[]){
    if(*size>=MAX_TASKS){
        printf("Error: Can't add new task! Todo list is full!\n");
        return;
    }

    strcat(task, "\n");

    strcpy(tasks[*size], task);
    *size += 1;
}

void print_tasks(char tasks[][MAX_STRING_LENGTH], int* size){
    printf("\nTo-do list:\n");

    for(int i = 0; i < *size; i++){
        printf("%i: %s", i, tasks[i]);
    }

    printf("\n");
}

void load_tasks(char tasks[][MAX_STRING_LENGTH], int* size){
    FILE* file = fopen("tasks.txt", "r");

    if(file == NULL){
        printf("Error: Could not open file for reading\n");
        return;
    }

    char line[MAX_STRING_LENGTH];
    *size = 0;

    while(fgets(line, sizeof(line), file) != NULL){
        strcpy(tasks[*size], line);
        *size += 1;
    }

    fclose(file);
}