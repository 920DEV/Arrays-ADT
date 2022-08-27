#include<iostream>

using namespace std;
struct Array

{
    int size;
    int *array;

};

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
int append(struct Array *arr){
int element;
cout<<"Enter the element";
cin>>element;

arr->array[arr->size++]=element;

}
int main(){
    struct Array arr;
    input(&arr);

    append(&arr);

    cout<<"Elements are :"<<endl;

    for (int i = 0; i < arr.size; i++)
    {
        cout<<arr.array[i]<<endl;
    }
    
}