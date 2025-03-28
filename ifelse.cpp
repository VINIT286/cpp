#include<iostream>
using namespace std;
// int main(){
//     int num=7;
//     if(num>=0){
//         cout<<"number is positive";
//     }else{
//         cout<<"number is negative";
//     }
//     return 0;
// }
// int main(){
//     int num;
//     cout<<"Enter any number = ";
//     cin>>num;
//     if(num%2==0){
//         cout<<"number is even";
//     }else{
//         cout<<"number is odd";
//     }
//     return 0;
// }
// find the greatest amoung two numbers
// int main(){
//     int num1,num2;
//     cout<<"Enter first number = ";
//     cin>>num1;
//     cout<<"Enter second number = ";
//     cin>>num2;
//     if(num1>num2){
//         cout<<"first number is greater than second number";
//     }else{
//         cout<<"second number greater than first number";
//     }
//     return 0;
// }

// find the greatest amoung three numbers
// int main(){
//     int num1,num2,num3;
//     cout<<"Enter first number = ";
//     cin>>num1;
//     cout<<"Enter second number = ";
//     cin>>num2;
//     cout<<"Enter third number = ";
//     cin>>num3;
//     if(num1>num2 && num1>num3){
//         cout<<"first number is greater";
//     }else if(num2>num1 && num2>num3){
//         cout<<"second number is greater";
//     }else{
//         cout<<"third number is greater";
//     }
//     return 0;
// }

// check the year is leap year or not
//   int main(){
//         int year;
//         cout<<"Enter year =";
//         cin>>year;
//         if(year%400 == 0 || (year%4 == 0 && year%100!=0)){
//             cout<<"given year is leap year";
//         }else{
//             cout<<"given year is not a leap year";
//         }
//         return 0;
//     }

//     int main(){
//         int year=1900;
//         if(year%4==0){
//             if(year%400==0){
//             cout<<"year is leap year";
//         }else if(year%100!=0){
//             cout<<"year is leap year";
//         }else{
//             cout<<"not a leap year";
//         }
//     }else{
//         cout<<"not a leap year";
//     }
//     return 0;
// }

// wap to chech the character is vowel or not
// int main(){
//     char ch;
//     cout<<"Enter a Character";
//     cin>>ch;
//     if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
//         cout<<"Enter character is vowel";
//     }else{
//         cout<<"Enter character is not vowel";
//     }
//     return 0;
// }

// wap check if a number is two digit number
// int main(){

//  int num;
//  cout<<"enter a number:";
//  cin>>num;
//  if(num>=10 && num<=99)
//  cout<<"The number is two digit number";
//  else{
//     cout<<"the number is not a two digit number";
//  }

//     return 0 ;

// }

// wap to check  a number is a perfect square 
// int main()
// {
//  int num=625;
//  int count = 0;
//  for(int i=1; i<num;i++)
//     if(i*i==num)
//     {
//         count++;
//         cout<<"Number is a perfect square";
//         break;
//     }
//         if (count==0){
//             cout<<"Number is not a perfect square";
//         }
//     return 0;
// }

// wap if a number is a prime 
// int main()
// {
//     int num = 37;
//     int count = 0;
//     for (int i = 2; i < num ; i++)
//     {
//         if(num%i==0)
//     {
//         count++;
//         cout<<"Number is not a prime number ";
//         break;
//     }
//     }
//     if(count == 0)
//     {
//     cout<<"number is a prime number ";
//    }
//     return 0 ;
    
// }
// determine the type of triangle(equilateral,isosceles,scalene)
// int main(){
//     int side1,side2,side3;
//     cout<<"the first side of triangle = ";
//     cin>>side1;
//     cout<<"the second side of triangle = ";
//     cin>>side2;
//     cout<<"the third side of triangle = ";
//     cin>>side3;
//     if(side1+side2+side3==180){
//      if((side1==side2)&&(side2==side3)&&(side3==side1)){
//         cout<<"the triangle is equilateral";
//     }else if((side1==side2)||(side2==side3)||(side1==side3)){
//         cout<<"the triangle is isosceles";  
//     }else if ((side1!=side2)&&(side2!=side3)&&(side3!=side1)){
//         cout<<"the triangle is scalene";
//     }else{
//         cout<<"not a valid triangle";
//     }
//     return 0;
// }
// }
// wap to check the number id pelondrom or not
// int main (){
//     int a=122;
//     int b=a;
//     int rem = 0;
//     int pal=0;
//     while(a!=0){
//         rem=a%10;
//         pal=pal*10+rem;
//         a=a/10;
//     }
//     if(b==pal){
//         cout<<"the number is pelondrom";
//     }else{
//         cout<<"the number is not pelondrom";
//     }
//     return 0;
// }
// wap to find the grade of a student
// int main(){
//     int grade;
//     cout<<"the the marks = ";
//     cin>>grade;
//     if(grade>90&&grade<=100){
//         cout<<"A";
//     }else if(grade>80&&grade<=90){
//         cout<<"B";
//     }else if(grade>70&&grade<=80){
//         cout<<"c";
// }else{
//     cout<<"fail";
// }
// return 0;
// }

// prind day of the week based on number (1-7)
// int main(){
//     int day;
//     cout<<"Enter a number = ";
//     cin>>day;
//     if(day==1){
//         cout<<"monday";
//     }else if(day==2){
//         cout<<"tuesday";
//     }else if(day==3){
//         cout<<"wednesday";
//     }else if(day==4){
//         cout<<"thursday";
//     }else if(day==5){
//         cout<<"friday";
//     }else if(day==6){
//         cout<<"saturday";
//     }else if(day==7){
//         cout<<"sunday";
//     }
//     return 0;
// }

// convert lowercase to uppercase using condition
// int main(){
//     char ch;
//     cout<<"enter a character = ";
//     cin<<ch;
//     if(ch>='a'&&ch<='z'){
//         cout<<"ch-32";
//     }else{
//         cout<<"invalid character";
//     }
//     return 0;
// }
// validate a password based on length
// int main(){
//     int pass=123456789;
//     int count=0;
//     while(pass!=0){
//         count=count+1;
//         pass=pass/10;
//     }
//     if(count<8){
//         cout<<"invalid password";
//     }else{
//         cout<<"valid password";
//     }
//     return 0;
// }
//  similate the system whith password and username 
// int main(){
//     char uname[10]="vinit";
//     char upass[10]="vinitgand";
//     char ch1[10],ch2[10];
//     cout<<"Enter Ussername = ";
//     cin>>ch1;
//     cout<<"Enter Password = ";
//     cin>>ch2;
//     if(ch1==uname && ch2==upass){
//         cout<<"You are Successfully login";
//     }else{
//         cout<<"Invalid username and password";
//     }
//     return 0;
// }
