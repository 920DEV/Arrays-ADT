#include<iostream>




using namespace std;


int *diff(int *arr1,int *arr2, int m, int n){

    int *arr;
arr=new int [m+n];
    int i,j,k;
    i=j=k=0;

    while(i<m && j<n){

        if (arr1[i]<arr2[j])
        {
            arr[k++]=arr1[i++];        

        }
        else if(arr2[j]<arr1[i]){
            j++;
        }
        else{
            i++;
            j++;
        }
for ( ; i < m; i++)
{
    arr[k++]=arr[i];
}
return arr;
         
}
}

int display(int *arr, int size){
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<endl;
    }
    
}

int main(){
    int m=5;
    int n=5;

    int arr1[m]={2,3,4,5,6};
    int arr2[n]={1,5,8,7,8};
   int * a=diff(arr1,arr2,m,n);
    display(a,m);
}
