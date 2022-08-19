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
int linear_search(struct Array arr){
    int elem;
cout<<"Eter the element you want to search";
cin>>elem;
for (int i = 0; i < arr.size; i++ )
{
    if(arr.array[i]==elem)
    return i;
}
return -1;

}

int main(){
    struct Array arr;
    input(&arr);

        cout<<"Elemet found at index: "<< linear_search(arr)<<endl;
    
}