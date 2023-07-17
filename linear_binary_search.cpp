#include <iostream>

#include <chrono>
using namespace std::chrono;
using namespace std;

class data
{
    public:
    int key, size = 0;
    int *Arr = new int[size];

    int linear_search()
    {
        int t = 0;
        int flag = 0;
        int count=0;
        while (t < size)
        {
            count++;
            if (Arr[t] == key)
            {
                //printf("element found at position %d", t + 1);
                flag = 1;
            }
            t++;
        }
        if (flag == 0)
            //printf("element not found");
        //cout<<"\nCount: "<<count;

        return count;
    }
    void binary_search()
    {
        int t = 0;
        int flag = 0;
        int start = 0;
        int end = size - 1;
        int mid = (start + end) / 2;
        while (start <= end)
        {
            if (Arr[mid] > key)
            {
                end = mid;
                mid = (start + end) / 2;
            }
            else if (Arr[mid] < key)
            {
                start = mid;
                mid = (start + end) / 2;
            }
            else if (Arr[mid] == key)
            {
                //printf("element found at position %d", mid + 1);
                flag = 1;
                break;
            }
        }
        if (flag == 0){}
            //printf("element not found");

    }

    void fill_Arr()
    {
        for (int i = 0; i < size - 1; i++)
        {
            Arr[i] = i;
        }
    }
    void print_Arr()
    {
        for (int i = 0; i < size; i++)
        {
            cout << Arr[i] << "  ";
        }
    }
};

int main()
{
    data obj;
    /* int f = 0;
    obj.fill_Arr();
    // obj.print_Arr();
    printf("Enter the key element to be searched: ");
    cin >> obj.key;
    while(1)
    {
        printf("\n1.Linear Search");
        printf("\n2.Binary Search");
        printf("\n3.exit\nEnter your choice: ");
        int ch;
        scanf("%d", &ch);
        switch(ch)
        {
        case 1:
            obj.linear_search();
            break;
        case 2:
            obj.binary_search();
            break;
        case 3:
            exit(0);
            break;
        default:
            printf("invalid choice :( ");
            break;
        }
    } */

    int arr[1000];
    cout<<"[";
    for(int i=1;i<=1000;i++)
    {
        obj.size=i;
        obj.fill_Arr();
        obj.key=i;
        int count=obj.linear_search();
        cout<<count<<",";
        arr[i-1]=count;
    }
    /* sort.size=100;
    sort.fill_Arr();
    sort.print_Arr();
    cout<<endl;
    sort.selection_sort();
    sort.print_Arr(); */
    cout<<"]"<<endl;
}
