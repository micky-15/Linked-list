#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
struct node *head = NULL;
struct node *tail = NULL;
// struct node *head2 = NULL;
// struct node *tail2 = NULL;
void list_from_array(int arr[], int n)
{

    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = arr[0];
    temp->next = NULL;
    head = temp;
    tail = temp;
    for (int i = 1; i < n; i++)
    {
        struct node *temp = (struct node *)malloc(sizeof(struct node));
        tail->next = temp;
        temp->data = arr[i];
        temp->next = NULL;
        tail = temp;
    }
}
void display()
{
    struct node *temp = head;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    list_from_array(arr, 5);

    display();
}