// checking sorting of an array
// #include<iostream>
// using namespace std;

// bool sort(int arr[],int n){

//     if(n==1){
//         return true;
//     }
//     return (arr[0]<=arr[1] && sort(arr+1,n-1));
// }

// int main()
// {
//     int a[] = {1,2,3,4,5};
//     cout<<sort(a,5);
//     return 0;
// } 


// to find the first and the last occurences 

#include<iostream>
using namespace std;

int first(int arr[],int n, int i, int key){
   if(i==n){
       return -1;
   }
    if(arr[i]==key){
        return  i;
    }
    return  first(arr,n,i+1,key);
}

int last(int arr[],int n, int i, int key){
   if(i==n){
       return -1;
   }
    int lastkey =  last(arr,n,i+1,key);
    if(lastkey!=-1){
        return lastkey;
    }
    if(arr[i]==key){return i;}
    return -1;
}

int main()
{ 
    int a[] = {1,5,6,5,7,5};
    cout<<first(a,6,0,5)<<endl;
    cout<<last(a,6,0,5)<<endl;
    
    return 0;
}