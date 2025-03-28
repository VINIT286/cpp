#include <iostream>
using namespace std;
// int main()
// {
//     cout<<(5>>2);
//     cout<<(9>>1);
   
//     return 0;
// }

int main(){
    int a=5;
    int b=7;
    cout<<"the value of a before swap is"<<a<<"\n";
    cout<<"the value of b afer swap is"<<b<<"\n";
    cout<<"the value of a afer swap is"<<a+b-(b=a)<<"\n";
    cout<<"the value of b afer swap is"<<b;
    return 0;
}