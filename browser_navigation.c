#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 200

// -------- Linked List Node --------
struct Node {
    char url[MAX];
    struct Node *next;
};

struct Node *top = NULL;

// -------- Push (Visit new page) --------
void visit(char url[]) {
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed!\n");
        return;
    }
    strcpy(newNode->url, url);
    newNode->next = top;
    top = newNode;
    printf("✔ Visited: %s\n", url);
}

// -------- Pop (Go back) --------
void goBack() {
    if (top == NULL) {
        printf("No previous page! You are at the start.\n");
        return;
    }

    printf("← Going back from: %s\n", top->url);
    struct Node *temp = top;
    top = top->next;
    free(temp);

    if (top != NULL)
        printf("✔ Now at: %s\n", top->url);
    else
        printf("No more pages in history.\n");
}

// -------- Display current page --------
void currentPage() {
    if (top == NULL)
        printf("No page currently open.\n");
    else
        printf("Current Page: %s\n", top->url);
}

// -------- Display all history --------
void displayHistory() {
    if (top == NULL) {
        printf("Browsing history is empty.\n");
        return;
    }

    struct Node *temp = top;
    int i = 1;
    printf("\n===== Browsing History (Recent First) =====\n");
    while (temp != NULL) {
        if (i == 1)
            printf("%d. %s  <-- Current\n", i, temp->url);
        else
            printf("%d. %s\n", i, temp->url);
        temp = temp->next;
        i++;
    }
    printf("===========================================\n");
}

// -------- Free all memory --------
void clearHistory() {
    while (top != NULL) {
        struct Node *temp = top;
        top = top->next;
        free(temp);
    }
    printf("History cleared.\n");
}

// -------- Main Menu --------
int main() {
    int choice;
    char url[MAX];

    printf("======================================\n");
    printf("   Browser Back Navigation System     \n");
    printf("======================================\n");

    while (1) {
        printf("\n---- MENU ----\n");
        printf("1. Visit a Webpage\n");
        printf("2. Go Back\n");
        printf("3. Current Page\n");
        printf("4. Display History\n");
        printf("5. Clear History\n");
        printf("6. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        getchar(); // consume newline

        switch (choice) {
            case 1:
                printf("Enter URL: ");
                fgets(url, MAX, stdin);
                url[strcspn(url, "\n")] = '\0';
                if (strlen(url) == 0)
                    printf("URL cannot be empty!\n");
                else
                    visit(url);
                break;

            case 2:
                goBack();
                break;

            case 3:
                currentPage();
                break;

            case 4:
                displayHistory();
                break;

            case 5:
                clearHistory();
                break;

            case 6:
                clearHistory();
                printf("Exiting browser. Goodbye!\n");
                return 0;

            default:
                printf("Invalid choice! Try again.\n");
        }
    }
}
