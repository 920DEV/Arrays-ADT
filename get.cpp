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

cout<<"Enter the size of the array:";
cin>>arr->size;

 cout<<"Enter the elements of an array:"<<endl;
 
    for (int i = 0; i <arr->size; i++)
    {
        cin>>arr->array[i];
    }
    
};
int get(struct Array arr){
    int index;
cout<<"Enter the index for which you want the element.";
cin>>index;

if(index>=0&&index<arr.size){
return arr.array[index];
}
}
int main(){
    struct Array arr;
    input(&arr);

    cout<<"Element present at the given index is :"<<get(arr);
    return 0;
}