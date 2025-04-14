#include<iostream>
using namespace std;
// void d(){
//     // int arr[5]={3,56,89,59,78};
//     // cout<<arr[3];
//     // -----------------
//     // for(int i=0;i<5;i++){
//     //     cout<<arr[i]<<"\n";
//     // }
//     int arr[6]={3,56,9876,4,7,99};
//     int len = sizeof(arr);
//     int flen = len/4;
//     for(int i=0;i<flen;i++){
//         cout<<arr[i]<<"\n";
//     }
// }
// int main(){
//     d();
//     return 0;
// }

// void v(){
//     int arr[]={23,35,56,67,78};
//     int n = sizeof(arr)/4;
//     int max = arr[0];
//     for(int i=1;i<n;i++){
//         if(max<arr[i]){
//             max = arr[i];
//         }
        
//     }
//     cout<<max;
// }
// int main(){
//     v();
//     return 0;
// }

// void t(){
//     int arr[]={23,35,56,67,78};
//     int arr1 = 0;
//     for(int i=0;i<5;i++){
//       arr1=arr1+arr[i];
        
//     }
//     cout<<arr1;
// }
// int main(){
//     t();
//     return 0;
// }

// void t(){
//     int arr[]={23,35,56,67,78};
//     int arr1 = 0;
//     for(int i=0;i<5;i++){
//       arr1=arr1+arr[i];
        
//     }
//     cout<<arr1/5;
// }
// int main(){
//     t();
//     return 0;
// }

// void s(){
//     int arr[]={1,2,3,4,5,6,7,8,9,10};
//     int len = sizeof(arr);
//     int flen = len/4;
//     int dec = 0;
//     int ind =0;
//     int a;
//     cout<<"Enter a Number = ";
//     cin>>a;
//     for (int i = 0; i<flen; i++){
//         if (arr[i]==a)
//         {
//             dec=1;
//             ind=i;
//         }
//     }
//     if (dec==1)
//     {
//         cout<<"number found in array at "<<ind <<"index";
//     }
//     else{
//         cout<<"number not found in array";
//     }
       
// }
   
// int main(){
//     s();
//     return 0;
// }

// void st(){
// //     int sumeven=0;
// //     int sumodd=0;
// //     int arr[]={2,3,4,5,6,9,8};
// //     int len = sizeof(arr);
// //     int flen = len/4;
// //     for(int i=0;i<flen;i++){
// //         if(arr[i]%2==0){
// //             sumeven=sumeven+arr[i];
// //             cout<<arr[i];
// //         }
// //         else{
// //             sumodd=sumodd+arr[i];   
// //         }
// //     }
// // }
// // int main(){
// //     st();
// //     return 0;
// // }

// void mm(){

//     int arr[]={1,2,3,4,5};
//     int len = sizeof(arr);
//     int flen = len/4;
//     int storearr[flen];
//     for (int i = flen-1;i>=0;i--)
//     {
//         cout<<arr[i];
//     }
    
// }

// int main(){
//     mm();
//     return 0;
// }

// void vv(){
//     int arr[]={1,2,3,4,5};
//     int v[]={33,22,55,66,77};
//     for (int i = 0; i < 5; i++)
//     {
//         v[i]=arr[i];
//         cout<<v[i];
//     }
// }
// int main(){
//     vv();
//     return 0;
// }
// wap of accending order
// void s(int arr[],int len){
//     for(int i=0;i<len;i++){
//         for(int j=0;j<len-1;j++){
//             if(arr[i]<arr[j]){
//                 int temp=arr[j];
//                 arr[j]=arr[i];
//                 arr[i]=temp;
//             }
//         }
//     }
// }
// void output(int arr[],int len){
//     for(int i=0;i<len;i++){
//         cout<<arr[i]<<",";
//     }
// }
// int main(){
//     int arr[]={22,33,44,55,66,77};
//     int len=sizeof(arr)/4;
//     s(arr,len);
//     output(arr,len);
//     return 0;
// }

// wap to find second largest eliment
// void s(int arr[],int len){
//         for(int i=0;i<len;i++){
//             for(int j=0;j<len-1;j++){
//                 if(arr[i]>arr[j]){
//                     int temp=arr[j];
//                     arr[j]=arr[i];
//                     arr[i]=temp;
//                 }
//             }
//         }
//     }
//     void output(int arr[],int len){

//          cout<<arr[1]<<" is the second largest array";

//             }
//     int main(){
//         int arr[]={22,33,44,55,88,77};
//         int len=sizeof(arr)/4;
//         s(arr,len);
//         output(arr,len);
//         return 0;
//     }

// void s(int arr[],int len){
//     for(int i=0;i<len;i++){
//         for(int j=0;j<len-1;j++){
//             if(arr[i]>arr[j]){
//                 int temp=arr[j];
//                 arr[j]=arr[i];
//                 arr[i]=temp;
//             }
//         }
//     }
// }
// void output(int arr[],int len){
//            for(int i=0;i<len;i++){
//            cout<<arr[i]<<",";        
//              }
//         }
// int main(){
//     int arr[]={22,33,44,55,88,77};
//     int len=sizeof(arr)/4;
//     s(arr,len);
//     output(arr,len);
//     return 0;
// }

// wap to remove the equal index in an array and reducde size of array

