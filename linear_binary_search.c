#include <stdio.h>
#include <stdlib.h>

struct class
{
    int array[10];
    int key;
};

typedef struct class *arr;

void linear_search(arr obj)
{
    int t=0;
    int flag=0;
    while(t<10)
    {
        if(obj->array[t]==obj->key)
        {
            printf("element found at position %d",t+1);
            flag=1;
        }
        t++;
    }
    if(flag==0)
    printf("element not found");
}

void binary_search(arr obj)
{
    int t=0;
    int flag=0;
    int start=0;
    int end=9;
    int mid=(start+end)/2;
    while(start<=end)
    {
        if(obj->array[mid]>obj->key)
        {
            end=mid;
            mid=(start+end)/2;
        }
        else if(obj->array[mid]<obj->key)
        {
            start=mid;
            mid=(start+end)/2;
        }
        else if(obj->array[mid]==obj->key)
        {
            printf("element found at position %d",mid+1);
            flag=1;
            break;
        }
        
    }
    if(flag==0)
    printf("element not found");
}

void main()
{
    arr a=(arr)malloc(sizeof(struct class));
    int f=0;
    while(f<10)
    {
        printf("Enter array element: ");
        scanf("%d",&a->array[f]);
        f++;
    }
    printf("Enter the key element to be searched: ");
    scanf("%d",&a->key);
    while(1)
    {
        printf("\n1.Linear Search");
        printf("\n2.Binary Search");
        printf("\n3.exit\nEnter your choice: ");
        int ch;
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:linear_search(a);
            break;
            case 2:binary_search(a);
            break;
            case 3:exit(0);
            break;
            default:
            printf("invalid choice :( ");
            break;
        }
    }
}
