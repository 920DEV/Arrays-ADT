// In this function we find the average of sum of all th numbers in given array
#include<iostream>

using namespace std;
struct Array

{
    int size;
    int *array;

};

// Makin input function to take the input form the user.

void input(struct Array *arr){                          // taking input  for the user.
arr->array=new int[arr->size];                          // Allocating array to the heap,by taking 'array' as address.


 cout<<"Enter the elements of an array:"<<endl;
 
    for (int i = 0; i <arr->size; i++)
    {
        cin>>arr->array[i];
    }
    
};

int sum(struct Array arr){
    int sum =0;

    for (int i = 0; i < arr.size; i++)
    {
        sum= sum+arr.array[i];                   // it will sum all the elements in array taking one elements at a time in sum.

    }
    return sum;
}

int main(){
    struct Array arr;
    cout<<"Enter the size of the array: ";
    cin>>arr.size;
input(&arr);

    cout<< "The average of all the elements in the array is : "<<sum(arr)/2<<endl;
}


