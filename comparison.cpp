#include <iostream>
using namespace std;
int main()
{
    // int num1,num2;
    // cout<<"Enter number 1 =  ";
    // cin>>num1;
    // cout<<"Enter number 2 = ";
    // cin>>num2;
    // (num1>num2)?cout<<"number 1 is greater":cout<<"number 2 is greater";
    // int num;
    // cout<<"Enter a number = ";
    // cin>>num;
    // (num<100)?cout<<"Number is less than 100":cout<<"Number is greater then 100";

    
    // char ch;
    // cout<<"Enter a character = ";
    // cin>>ch;
    // ((ch>='a' && ch<='z')||(ch>='A' && ch<='Z'))?cout<<" Entered Character is a Aphabet":cout<<"Entered Charcter is not a Alphabat";

    // int num;
    // cout<<"enter a number = ";
    // cin>>num;
    // (num<50 && num % 5 ==0)?cout<<"The number is a multiple of 5 and less than 50." :cout<<"The number does not meet the criteria.";

    // int L1,L2,B1,B2,A1,A2;
    // cout<<"Enter length=";
    // cin>>L1;
    // cout<<"Enter breadth=";
    // cin>>B1;
    // cout<<"Enter length=";
    // cin>>L2;
    // cout<<"Enter Breadth=";
    // cin>>B2;
    // A1=(L1*B1);
    // A2=(L2*B2);
    // cout<<"Area of rec 1 ="<<A1<<"\n";
    // cout<<"Area of rec 2 ="<<A2<<"\n";
    // (A1>A2)?cout<<"Rectangle 1 is big then Rectangle 2":cout<<"Rectangle 2 is big then Rectangle 1";

    //write a program to check if a character is digit or letter;
    // cout<<"input should be character or digit \n";
    // char ch;
    // cout<<"enter character = ";
    // cin>>ch;
    // if(ch>=48 && ch<=57){
    //     cout<<"charater is digit";
    // }else if((ch>=65 && ch<=89) || (ch>=97 && ch<=122)){
    //     cout<<"character is letter";
    // }else{
    //     cout<<"character is not a digit and letter";
    // }
    // condition to check number between 50 and 100 but not divisible by 3

   int num = 65;
//    ((num>=50 && num<=100) && (num%3 == 0))?cout<<"number lies between 50 and 100 and divisible by 3":cout<<""
if(num>=50 && num<=100)
{
    if(num%3!=0)
    {
        cout<<"Number lies between 50 and 100 but not divisible by 3";
    }
    else
    {
        cout<<"Number lies between 50 and 100 but divisible by 3";
    }
}
else
{
    cout<<"Number not lies between 50 and 100 ";
}
return 0;
}