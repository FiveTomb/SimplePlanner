#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#define INITIAL_SIZE 5

// Defining what a "Task" contains
typedef struct {
    int id;
    char name[100];
    char description[256];
    char dueDate[11];
    int priority;
    bool completed;
} Task;

// Function prototypes
void welcomeMessage(void);
void printTaskDetails(Task task);
Task createTask();

int main(int argc, char *argv[])
{
    createTask();
    /*
    welcomeMessage();
    scanf("%d", &choice);
    */

    return 0;
}

void welcomeMessage()
{
    printf("Welcome to SimplePlanner!\n");
    printf("1) Add a task\n");
    printf("2) Finish a task\n");
    printf("3) Edit a task\n");
    printf("4) View tasks\n");
    printf("Enter an option: ");
}

void printTaskDetails(Task task)
{
    printf("Task ID: %d\n", task.id);
    printf("Task Name: %s\n", task.name);
    printf("Description: %s\n", task.description);
    printf("Due Date: %s\n", task.dueDate);
    printf("Priority: %d\n", task.priority);
    printf("Completed: %d\n", task.completed);
    printf("\n");
}

// Function that takes user input and creates a new task to add to the list
Task createTask()
{
    int id, priority;
    char name[100], description[256], dueDate[11];
    bool completed;
    Task newTask;

    scanf("%d", &id);
    newTask.id = id;
    strcpy(newTask.name, name);
    strcpy(newTask.description, description);
    strcpy(newTask.dueDate, dueDate);
    newTask.priority = priority;
    newTask.completed = completed;

    return newTask;
}
