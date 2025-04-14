#include<iostream>
using namespace std;
void s(int arr1[],int arr2[],int arr3[],int len1,int len2,int len3){
    for(int i=0;i<len1;i++){
        arr3[i]=arr1[i];
    }
    for(int i=0;i<len2;i++){
        arr3[len1+i]=arr2[i];
    }
}
void output(int arr3[],int len3){
    for(int i=0;i<len3;i++){
        cout<<arr3[i]<<"\n";
    }
}
int main(){
    int arr1[]={1,2,3,4,5};
    int len1=sizeof(arr1)/4;
    int arr2[]={6,7,8,9,10};
    int len2=sizeof(arr2)/4;
    int len3=len1+len2;
    int arr3[len3]={};
    
    s(arr1,arr2,arr3,len1,len2,len3);
    output(arr3,len3);
    return 0;
}