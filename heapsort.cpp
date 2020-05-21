#include <bits/stdc++.h>
using namespace std;

void view(int arr[], int length)
{
    for (int i = 0; i < length; ++i)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

void createheapMin(int arr[], int length, int srt)
{
    int num;
    for (int i = 0; i < length; ++i)
    {
        cin >> arr[i];
        num = i + 1;
        int tmp;
        while (num != 1)
        {
            if (arr[num - 1] < arr[(num / 2) - 1])
            {
                tmp = arr[num - 1];
                arr[num - 1] = arr[(num / 2) - 1];
                arr[(num / 2) - 1] = tmp;
            }
            else
            {
                break;
            }
            num = num / 2;
        }
    }
    if (srt == 0)
    {
        cout << "The array is\n";
        view(arr, length);
    }
}

void createheapMax(int arr[], int length, int srt)
{
    int num;
    for (int i = 0; i < length; ++i)
    {
        cin >> arr[i];
        num = i + 1;
        int tmp;
        while (num != 1)
        {
            if (arr[num - 1] > arr[(num / 2) - 1])
            {
                tmp = arr[num - 1];
                arr[num - 1] = arr[(num / 2) - 1];
                arr[(num / 2) - 1] = tmp;
            }
            else
            {
                break;
            }
            num = num / 2;
        }
    }
    if (srt == 0)
    {
        view(arr, length);
    }
}

void heapifyMax(int strt, int arr[], int length)
{
    int tmp;
    if (!(strt > length / 2))
    {
        if (strt == length / 2 && length % 2 == 0)
        {
            if (arr[strt - 1] < arr[(strt * 2) - 1])
            {
                tmp = arr[strt - 1];
                arr[strt - 1] = arr[(strt * 2) - 1];
                arr[(strt * 2) - 1] = tmp;
                heapifyMax(strt * 2, arr, length);
            }
        }
        else
        {
            if ((arr[strt - 1] < arr[(strt * 2) - 1]) || arr[strt - 1] < arr[strt * 2])
            {
                if (arr[(strt * 2) - 1] > arr[strt * 2])
                {
                    tmp = arr[strt - 1];
                    arr[strt - 1] = arr[(strt * 2) - 1];
                    arr[(strt * 2) - 1] = tmp;
                    heapifyMax(strt * 2, arr, length);
                }
                else
                {
                    tmp = arr[strt - 1];
                    arr[strt - 1] = arr[(strt * 2)];
                    arr[(strt * 2)] = tmp;
                    heapifyMax((strt * 2) + 1, arr, length);
                }
            }
        }
    }
}

void heapifyMin(int strt, int arr[], int length)
{
    int tmp;
    if (!(strt > length / 2))
    {
        if (strt == length / 2 && length % 2 == 0)
        {
            if (arr[strt - 1] > arr[(strt * 2) - 1])
            {
                tmp = arr[strt - 1];
                arr[strt - 1] = arr[(strt * 2) - 1];
                arr[(strt * 2) - 1] = tmp;
                heapifyMin(strt * 2, arr, length);
            }
        }
        else
        {
            if ((arr[strt - 1] > arr[(strt * 2) - 1]) || arr[strt - 1] > arr[strt * 2])
            {
                if (arr[(strt * 2) - 1] < arr[strt * 2])
                {
                    tmp = arr[strt - 1];
                    arr[strt - 1] = arr[(strt * 2) - 1];
                    arr[(strt * 2) - 1] = tmp;
                    heapifyMin(strt * 2, arr, length);
                }
                else
                {
                    tmp = arr[strt - 1];
                    arr[strt - 1] = arr[(strt * 2)];
                    arr[(strt * 2)] = tmp;
                    heapifyMin((strt * 2) + 1, arr, length);
                }
            }
        }
    }
}

void maxh(int arr[], int length)
{
    int i = (length / 2);
    int tmp;
    while (i != 0)
    {
        if (i == (length / 2) && length % 2 == 0)
        {
            if (arr[(i * 2) - 1] > arr[i - 1])
            {
                tmp = arr[(i * 2) - 1];
                arr[(i * 2) - 1] = arr[i - 1];
                arr[i - 1] = tmp;
                heapifyMax(i * 2, arr, length);
            }
        }
        else
        {
            if (arr[(i * 2) - 1] > arr[i - 1] || arr[(i * 2)] > arr[i - 1])
            {
                if (arr[(i * 2) - 1] > arr[(i * 2)])
                {
                    tmp = arr[(i * 2) - 1];
                    arr[(i * 2) - 1] = arr[i - 1];
                    arr[i - 1] = tmp;
                    heapifyMax(i * 2, arr, length);
                }
                else
                {
                    tmp = arr[(i * 2)];
                    arr[(i * 2)] = arr[i - 1];
                    arr[i - 1] = tmp;
                    heapifyMax((i * 2) + 1, arr, length);
                }
            }
        }
        --i;
    }
    view(arr, length);
}

void minh(int arr[], int length)
{
    int i = (length / 2);
    int tmp;
    while (i != 0)
    {
        if (i == (length / 2) && length % 2 == 0)
        {
            if (arr[(i * 2) - 1] < arr[i - 1])
            {
                tmp = arr[(i * 2) - 1];
                arr[(i * 2) - 1] = arr[i - 1];
                arr[i - 1] = tmp;
                heapifyMin(i * 2, arr, length);
            }
        }
        else
        {
            if (arr[(i * 2) - 1] < arr[i - 1] || arr[(i * 2)] < arr[i - 1])
            {
                if (arr[(i * 2) - 1] < arr[(i * 2)])
                {
                    tmp = arr[(i * 2) - 1];
                    arr[(i * 2) - 1] = arr[i - 1];
                    arr[i - 1] = tmp;
                    heapifyMin(i * 2, arr, length);
                }
                else
                {
                    tmp = arr[(i * 2)];
                    arr[(i * 2)] = arr[i - 1];
                    arr[i - 1] = tmp;
                    heapifyMin((i * 2) + 1, arr, length);
                }
            }
        }
        --i;
    }
    view(arr, length);
}

void sortmin()
{
    int length;
    cout << "Enter the number of elements\n";
    cin >> length;
    int arr[length];
    createheapMin(arr, length, 1);
    
    while (length != 0)
    {
        cout << arr[0] << " ";
        arr[0] = arr[length - 1];
        length--;
        heapifyMin(1, arr, length);
    }
    cout << "\n";
}

void sortmax()
{
    int length;
    cout << "Enter the number of elements\n";
    cin >> length;
    int arr[length];
    createheapMax(arr, length, 1);
    
    while (length != 0)
    {
        cout << arr[0] << " ";
        arr[0] = arr[length - 1];
        --length;
        heapifyMax(1, arr, length);
    }
    cout << "\n";
}

void create(int x)
{
    int length;
    cout << "Enter the number of elements you want to insert into the heap\n";
    cin >> length;
    int arr[length];
    if (x == 1)
    {
        createheapMin(arr, length, 0);
    }
    else
    {
        createheapMax(arr, length, 0);
    }
}



int main()
{
    int ch = 5, x;
    int length;
    int arr[100001];
    //char choice;
    while (ch != 0)
    {
        cout << "Choose\n";
        cout << "1. Create a minnheap\n";
        cout << "2. Create a maxheap\n";
        cout << "3. Convert a array to minheap or maxheap\n";
        cout << "4. Heapsort\n";
        cout << "0.Quit\n";
        cin >> ch;
        switch (ch)
        {
        case 1:
            create(1);
            break;
        case 2:
            create(2);
            break;
        case 3:
            cout << "Choose\n";
            cout << "1. Minheap\n";
            cout << "2. Maxheap\n";
            cin >> x;

            cout << "Enter the number of elements\n";
            cin >> length;
            for (int i = 0; i < length; ++i)
            {
                cin >> arr[i];
            }
            if (x == 1)
            {
                minh(arr, length);
            }
            else
            {
                maxh(arr, length);
            }

            
            break;
        case 4:
            cout << "heapsort using:-\n";
            cout << "1. minheap\n";
            cout << "2. maxheap\n";
            cin >> x;
            if (x == 1)
            {
                sortmin();
            }
            else
            {
                sortmax();
            }
            break;
        case 0:

            break;
        }
    }
    return 0;
}