#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

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
void readString(char[]);
Task createTask();

int main(int argc, char *argv[])
{
    Task myTask = createTask();
    printTaskDetails(myTask);

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
    //printf("Task ID: %d\n", task.id);
    printf("Task Name: %s\n", task.name);
    printf("Description: %s\n", task.description);
    printf("Due Date: %s\n", task.dueDate);
    /*
    printf("Priority: %d\n", task.priority);
    printf("Completed: %d\n", task.completed);
    printf("\n");
    */
}

// Function that takes user input and creates a new task to add to the list
Task createTask()
{
    // int b is user input to a boolean
    int id, priority, b;
    char name[100], description[256], dueDate[11];
    bool completed;
    Task newTask;

    printf("Enter a name for this task: ");
    if (fgets(name, sizeof(name), stdin) == NULL)
    {
        printf("Failed to read input stream");
    }
    else {
        name[strcspn(name, "\n")] = '\0';
        strcpy(newTask.name, name);
    }
    printf("Enter a description for this task: ");
    if (fgets(description, sizeof(description), stdin) == NULL)
        printf("Failed to read input stream");
    else
    {
        description[strcspn(description, "\n")] = '\0';
        strcpy(newTask.description, description);
    }
    printf("Enter a deadline for this task: ");
    if (fgets(dueDate, sizeof(dueDate), stdin) == NULL)
        printf("Failed to read input stream");
    else
    {
        dueDate[strcspn(dueDate, "\n")] = '\0';
        strcpy(newTask.dueDate, dueDate);
    }
    /*
    printf("Enter the task ID: ");
    scanf("%d", &id);
    newTask.id = id;
    printf("Enter the task priority: ");
    scanf("%d", &priority);
    newTask.priority = priority;
    printf("Has the task been completed? (0 for no 1 for yes): ");
    scanf("%d", &b);
    if (b)
        completed = true;
    else
        completed = false;
    newTask.completed = completed;
    */
    return newTask;
}
