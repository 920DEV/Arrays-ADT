// Intersection of two array.
#include<iostream>

using namespace std;

int *intersection(int *arr1, int *arr2,int m, int n){           // function definition.

    int *arr;
    int size=n+m;
    arr=new int (size);


int i,j,k;
i=j=k=0;

    while (i<m && j<n)
    {
        if (arr1[i]==arr2[j])
        {
            arr[k++]=arr1[i++];
        }
        j++;
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

    int n=5;
    int m=6;
    int A[m] = {1, 2, 5, 64, 45,6};
    int B[n] = {1, 2, 3, 4, 5};
    int *c_array;
    c_array = intersection(A, B,m,n);                       // function calling.
    cout << "The union of both the array is:" << endl;
    display(c_array, m);
    return 0;
}
