#include<iostream>
using namespace std;
// int main(){
//     for(int i=1;i<=5;i++){
//         for(int j=1;j<=i;j++){
//             cout<<j;
//         }
//         cout<<"\n";
//     }
//     return 0;
// }
// int main(){
//     for(int i=1;i<=5;i++){
//         for(int j=1;j<=i;j++){
//             cout<<"*";
//         }
//         cout<<"\n";
//     }
//     return 0;
// }
// int main(){
//     for(int i=1;i<=5;i++){
//         for(int j=5;j>=i;j--){
//             cout<<j;
//         }
//         cout<<"\n";
//     }
//     return 0;
// }
// int main(){
//         for(int i=1;i<=5;i++){
//             for(int j=5;j>=i;j--){
//                 cout<<" ";
//             }
//             for(int j=1;j<=i;j++){
//                 cout<<"*";
//             }
//             for(int j=2;j<=i;j++){
//                 cout<<"*";
//             }
//             cout<<"\n";
//         }
//         return 0;
//     }

// hollow square pattern markdowncoopyedit
// int main(){
//     for(int i=1;i<=5;i++){
//         for(int j=1;j<=5;j++){
//             if(i>=2 && i<=4){
//                 if(j==1 || j==4){
//                     cout<<"*";
//                 }else{
//                     cout<<" ";
//                 }
//             }
//             else{
//                 cout<<"*";
//             }
//         }
//         cout<<"\n";
//     }
//     return 0;
// }
// int main(){
//     for(int i=1;i<=5;i++){
//         for(int j=1;j<=5;j++){
//             if(i>=2 && i<=3){
//                 if(i==3 || i==5){
//                     cout<<"*";
//                 }
//                 else{
//                     cout<<"  ";
//                 }
//             }
//                 else{
//                     cout<<"*";
//                 }
//             }
//             cout<<"\n";
//         }
//         return 0;
//     }

int main(){
    for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++){
        cout<<"*";
    } for(int i=5;i<=1;i--){
        for(int j=i;j<=1;j--){
        cout<<"*";
    }
}
cout<<"\n";
}
return 0;
}