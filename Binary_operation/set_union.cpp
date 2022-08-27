#include <iostream>

using namespace std;

int *set_union(int *arr1, int *arr2, int n)
{
    int *arr;
    int i, j, k;
    i = j = k = 0;
    int size = 2 * n;
    arr = new int(size);
    while (i < n && j < n)
    {
        if (arr1[i] < arr2[j])
        {
            arr[k++] = arr1[i++];
        }
        else if (arr1[i] > arr2[j])
        {
            arr[k++] = arr2[j++];
            }
            


        else if (arr1[i] == arr2[j])
        {
            arr[k++] = arr1[i++];
            j++;
        }
    }

    for (; i < n; i++)
    {
        arr[k++] = arr1[i];
    }
    for (; j < n; j++)
    {
        arr[k++] = arr2[j];
    }

    return arr;
}

int display(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
}
int main()
{

    int size = 5;
    int A[5] = {1, 2, 3, 4, 5};
    int B[5] = {1, 2, 3, 4, 5};
    int *c_array;
    c_array = set_union(A, B, size);
    cout << "The union of both the array is:" << endl;
    display(c_array, 2 * size);
    return 0;
}