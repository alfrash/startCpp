#include <iostream>
using namespace std;



struct node
{
    int value;
    struct node *link;
};


int main()
{
    struct node *head = NULL;
    head = (struct node *) malloc(sizeof(struct node));
    head->value = 1956;
    head->link = NULL;

    printf("%d", head->value );
    return 0;
}