/*Develop a calculator program that performs basic arithmetic
operations such as addition, subtraction, multiplication, and
division. Allow the user to input two numbers and choose an
operation to perform.*/

#include<bits/stdc++.h>
#include<iostream>
#include<stack>
#include<queue>
#include<math.h>
#include<algorithm>
using namespace std;


void clearConsole() {
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}


int main(){
     cout<<"**********TASK_2***********"<<endl;
     cout<<"**********CodSoft***********"<<endl;  
     cout<<"**********Aman Singh Rawat***********"<<endl;
     cout<<"**************Welcome to Our CodSoft Calculator************\n"<<endl<<endl;;
     
     double num1,num2;
     int choice;

     cout<<"Enter Two Numbers In which you want to perform operaitons"<<endl;
     cin>>num1>>num2;
     cout<<endl;


     do{

        clearConsole();

        cout<<"\tHi User I hope you're doing well"<<endl;
        cout<<"\tSo i got your two input and am here to make it easy for you to calculate"<<endl;
        if(num2==0){
            cout<<"\tIf you want to put 0 in Denominator while dividing, then you cannot perform Division, am sorry for that"<<endl;
            }
            cout<<"\tEnter the following operation you want to perform"<<endl;
            cout<<"\tPress 1 For Addition(+)"<<endl;
            cout<<"\tPress 2 For Substraction(+)"<<endl;
            cout<<"\tPress 3 For Multiplication(*)"<<endl;
            cout<<"\tPress 4 For Divison(*)"<<endl;
            cout<<"\tPress 5 to exit"<<endl<<endl;
            cout<<"\t";cin>>choice;
            cin.ignore();

     
        switch(choice){
            
            case 1:
            clearConsole();
            cout<<"After Adding two Numbers the final output is: "<<num1+num2<<endl;
            cout << "Press Enter to go back to the menu...";
            cin.ignore();
            break;

            case 2:
            clearConsole();
            cout<<"After Substracting two Numbers the final output is: "<<num1-num2<<endl;
            cout << "Press Enter to go back to the menu...";
            cin.ignore();
            break;

            case 3:
            clearConsole();
            cout<<"After Multiplying two Numbers the final output is: "<<num1*num2<<endl;
            cout << "Press Enter to go back to the menu...";
            cin.ignore();
            break;

            case 4:
            clearConsole();
            cout<<"After Dividing two Numbers the final output is: "<<num1/num2<<endl;
            cout << "Press Enter to go back to the menu...";
            cin.ignore();
            break;

            case 5: 
            cout<<"Exiting....."<<endl;
            break;

            default :
            cout<<"\n\tThe selected choice is invalid Please Enter the choice form 1 to 5"<<endl<<endl;;
            cout << "\tPress Enter to Continue";
            cin.ignore();
            break;

        }
     }while(choice!=5);
    
     cout << "---------------------------------" << endl;
     cout << "Thank you for Using me" << endl;
     cout << "---------------------------------" << endl;


     return 0;

}