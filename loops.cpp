// wap to print 10 numbers
#include<iostream>
 using namespace std;
// int main(){
//     int i;
//     for(i=1;i<=10;i++){
//         cout<<i;
//     }
//     return 0;
// }
// wap to print 1 to 50 even numbers

    // int main(){
    //     int i=1;
    //     while(i<=50){
    //     if(i%2==0){
    //         cout<<i;
    //     }
    //     i++;}
    //     return 0;
    // }

    // wap to print natural number and its sum

// int main() {
//     int n, sum = 0;

//     cout << "Enter the number";
//     cin >> n;

//     cout << "Natural numbers: ";
//     for (int i = 1; i <= n; i++) {
//         cout << i ;
//         sum += i;
//     }
//     return 0;

// }
// factorial
// int main(){
//     int i=1,fact=1;
//     while(i<=5){
//         fact=fact*i;
//         ++i;
//     }
//         cout<<fact;
//         return 0;
//     }
// wap to print 10 to 1 using do while
// int main(){
//     int count=10;
//     do{
//         cout<<count;
//         count--;
//     }
//     while(count!=0);
//     return 0;
// }

//wap to print table of user
// int main(){
//     int num;
//     cout<<"enter a number";
//     cin>>num;
//     for (int i =1;i<=10;i++)
//     {
//        cout<<num"x"<<i<<"="<<num*i<<"\n";
//     }
//     return 0;
// }

// wap to reverse the number
// int main(){
//     int num = 12345;
//     int rem;
//     while(num!=0){
//          rem=num%10;
//          num=num/10;
//          cout<<rem;
//     }
//     return 0;
// }
 
// write a program for armstrom
// int main() {
//     int num=12345;
//     int count = 0;
//     while (num != 0) {
//         num /= 10;  
//         count++;    
//     }
//     cout<<count;
//     return 0;
// }
int main(){
    int num=1634;
    int num1=num;
    int num2=num1;
    int len=0;
    int rem=0;
    int st=0;
    int mul=0;
    while(num!=0){
        num=num/10;
        len++;
    }
    for(int i=1;i<=len;i++){
        rem=num1%10;
        num1=num1/10;
        for(int j=1;j<len;j++){
            if(j==1){
                mul=rem*rem;
            }else{
                mul=mul*rem;
            }
            // cout<<mul;
            // cout<<"\n";
           
        }
        st=st+mul; 
        
    }
    cout<<st;
    if(num2==st){
        cout<<"number is armstrong number";
    }
    return 0;
}