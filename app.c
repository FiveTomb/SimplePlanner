#include <stdio.h>
#include <stdbool.h>

// Defining what a "Task contains"
typedef struct {
    int id;
    char name[100];
    char description[256];
    char dueDate[11];
    int priority;
    bool completed;
} Task;

void welcomeMessage(void);

int main(int argc, char *argv[])
{
    Task myTask;
    int choice;

    welcomeMessage();
    scanf("%d", &choice);
}

void welcomeMessage()
{
    printf("Welcome to SimplePlanner!\n");
    printf("1) Add a task\n");
    printf("2) Finish a task\n");
    printf("4) View tasks\n");
    printf("Enter an option: ");
}
