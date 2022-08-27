#include<iostream>

using namespace std;
struct Array

{
    int size;
    int *array;

};
void input(struct Array *arr){                          // taking input  for the user.
arr->array=new int[arr->size];                          // Allocating array to the heap,by taking 'array' as address.


 cout<<"Enter the elements of an array:"<<endl;
 
    for (int i = 0; i <arr->size; i++)
    {
        cin>>arr->array[i];
    }
    
};

int sorting(struct Array *arr){

    for (int i = 0; i < arr->size; i++)
    {
        if(arr->array[i]<=arr->array[i+1]){
            return true;
        }
    }
    return false;
    
}
// "LINEAR SEARCH "s
int linear_srch(struct Array *arr){          
int x;
cout<<"Enter the Element you want to search : ";
cin>>x;


for (int i=0; i < arr->size;i++){
    if(x==arr->array[i]){

    return i;
    } 


}
return -1;
};


// "BINARY SEARCH"
int binary_search(struct Array *arr,int key){                  // Note: for doing binary search all the elements must be unique & Array must be sorted.

int lower_value=0;                  // initializig lower index value.
int higher_value=arr->size-1;       // initializing higher index value of the array.
int mid_val;                        // mid term vlaue.



while (lower_value<=higher_value)
{
    int mid_val= (lower_value+higher_value)/2;

    if(key==arr->array[mid_val]){
        return mid_val;             // it will return the index whre the searched element is present.
    }
    else if (key<=arr->array[mid_val])
    {
        higher_value=mid_val-1;

    }
    else
        lower_value=mid_val+1;
    
}
     
return -1;
     }


int get(struct Array arr){                  // in get method we can acess any element in an array through their index no.
int index;
cout<<"Enter the index number: ";
cin>>index;

if (index>=0 && index< arr.size)
{
    return arr.array[index];
}


}

// "REPLACING OF ELEMENT"

int set(struct Array arr){
    int index;
    cout<<"Enter the index no: ";
    cin>>index;
    int element;
    cout<<"Enter the elemnt you want to replace with: ";

    cin>>element;
    if(index>=0 && index<arr.size){
      return  arr.array[index]=element;
    }
}
// "MAXIMUM "

int max(struct Array arr){
    int max=0;
    for (int i = 1; i < arr.size; i++)
    {
        if(max<arr.array[i]){
             max = arr.array[i];
        }
    }
    return max;
    
}

// "MINIMUM ELEMENT IN AN ARRAY"

int min(struct Array arr){
    int min=arr.array[0];
    for (int i = 1; i < arr.size; i++)
    {
        if (min>arr.array[i])
        {
            min=arr.array[i];
        }
        
    }
    return min;
    
}

// "SUM OF ALL THE ELEMENT INSIDE AN ARRAY"
int sum(struct Array arr){
    int sum=0;
    for (int i = 0; i < arr.size; i++)
    {
        sum=sum+arr.array[i];
    }
    return sum;
    
}


// "APPENDING ELEMENT"


int append(struct Array *arr){      // Append will add extra element at the end of the array,
int elem;                           // "elem" is the element we wants to add .

cout<<"Enter the element you want to append: "<<endl;
cin>>elem;    


              // increasing the size of the array;
return arr->array[arr->size++]=elem;   // incrementing the size of the array and assigning to the elem.
   
};
// "INSERTION OF ELEMENT"

void insert(struct Array *arr){         // Insertion of an element.
     int index, elem;

    cout<<"At what index you wants to Insert the element. :"<<endl;
    cin>>index;
    cout<<"Element you wants to insert :";
    cin>>elem;

    if (index>=0 && index <= arr->size){

        for (int i = arr->size; i > index; i--)
        {
            arr->array[i]=arr->array[i-1];

        }
        arr->array[index]=elem;
        arr->size++;
        
    }
    else{
        cout<<"Index Number entered by you doesn't exits in this array. Please try again";
    }
    
}

// "DELETION OF ELEMENT"
int dlt(struct Array *arr){              // for deleting an element in an array.
int index,x;
cout<<"At what index You want to delete the element:";
cin>>index;
x=arr->array[index] ;             // assigning the element we want to delete to x.
if (index>=0 && index<= arr->size)
{
for (int i = index; i <= arr->size-1; i++)
{
    arr->array[i]=arr->array[i+1];

}
arr->size--;

return x;
}
};
int reverse(struct Array arr){
    int temp;
    for (int i = 0; i < arr.size/2; i++)
    {
        temp=arr.array[i];
        arr.array[i]=arr.array[arr.size-i-1];
        arr.array[arr.size-i-1]=temp;
        
    }

    
}

// "DISPLAYING OF ARRAY"

void display(struct Array arr){
        cout<<"The elements are:";
        for (int i = 0; i <arr.size; i++)
        {
            cout<<arr.array[i]<<endl;

        }
        
};


int main(){
    
    struct Array arr;
    
    cout<<"Enter the size of the array: ";
    cin>>arr.size;

   input(&arr);

    
  
while (true)
{
    /* code */
    // options provide to users.
  cout<<"Enter the Option you want to perform in an array: "<<endl;
  
    cout<<" 1-> Linear Search.\n 2-> Binary search\n 3-> Append or add an element.\n 4-> Insert an Element \n 5-> Delete an element \n 6-> Display Array.\n 7-> Get the element \n 8-> Replace the element \n 9-> Find maximum \n 10-> Find Mininum \n 11-> Sum of all element \n 12-> Average of sum of all Element \n 13-> Reverse of the array. \n 14-> For exit "<<endl;
    int option;
   cin>>option;

    switch (option)
    {
case 1:
cout<<"The element you have searched is present at the index no: "<<linear_srch(&arr)<<endl;
break;
case 2:
int key;
cout<<"Enter the element you want to search:";
cin>> key;
cout<<"The element you have searched in an array is present at the index no : "<<binary_search(&arr,key)<<endl;
    break;
    
    case 3:
    append(&arr);
    break;

    case 4:                             
    insert(&arr);
    break;

    case 5:
    dlt(&arr);
break;
    case 6:
    display(arr);
break;

    case 7:
    cout<<"Element present in the given index is: "<<get(arr)<<endl;
break;


case 8:
    cout<< "Element you replaced"<<set(arr);
    break;

    case 9:
    cout<< "Highest element present in the array: "<< max(arr)<<endl;
    break;


    case 10:
cout<<"least element present in the array: "<<min(arr)<<endl;

    break;

    case 11:
    cout<<"Sum of all the element in the array is : "<<sum(arr)<<endl;

    break;

    case 12:
    cout<<"Average of all the numbers present in the array is:"<<sum(arr)/arr.size<<endl;

    case 13:
    reverse(arr);
    break;


case 15:
cout<<sorting(&arr);
break;
    default:
    cout<<"You have entered wrong value.";
    }
 if (option == 14){
    break;
 }
}
return 0;
}

