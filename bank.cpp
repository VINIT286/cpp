#include<iostream>
using namespace std;

int amount = 10000;
int deposit;
int withdraw;

void check(){
    cout<<"Available balance is = "<<amount<<"\n";
    cout<<"********************************************\n";
}

void withd(){
    int wa;
    cout<<"Enter amount = ";
    cin>>wa;
    if(amount<=wa){
        cout<<"Insufficiant Balance";
    }
    else{
        cout<<"Amount withdraw Successfully";
        amount=amount-wa;
    }
    cout<<"********************************************\n";
}
void deop(){
    int de;
    cout<<"Enter amout = ";
    cin>>de;
    amount = amount + de;
    cout << "Amount deposited successfully!\n";
    cout << "********************************************\n";
}
int main(){
    while(1){
        int res;
        cout<<"**************************************\n";
        cout<<"Enter 1 for check bank balance\n";
        cout<<"Enter 2 for check withdraw balance\n";
        cout<<"Enter 3 for deposit balance\n";
        cout<<"Enter 4 for check account holder detail\n";
        cout<<"Enter choice = ";
        cin>>res;
        if(res == 1){
            check();
        }
        else if(res == 2){
            withd();
        }else if (res == 3) {
            deop();  
        } else if (res == 4) {
            cout << "Vinit Gandhe\n";
            cout<<"Ac No.3432432432";
            break;  
        } else {
            cout << "Invalid choice! Try again.\n";
        }
    }
    return 0;

    }

