/*Create a program that generates a random number and asks the
user to guess it. Provide feedback on whether the guess is too
high or too low until the user guesses the correct number.*/

#include<bits/stdc++.h>
#include<iostream>
#include<stack>
#include<queue>
#include<math.h>
#include<cstdlib>
#include<ctime>
#include<algorithm>

using namespace std;


int RandomNoGenrater(int x, int y){                 //where x is minimum no. and y is maximum no.
    return rand()%(y-x+1)+x;                        //this rand fuction is used to genrate random no. and by using modulo it will genrate a 1-2 digitno. 
    
}

void checkguess(int genrated_No, int guess , int& attempts){
    if(guess== genrated_No){
        cout<<"\tYou Are Good In Guessing!! Cogtulations You Have guessed correct Number ("<<genrated_No<<") in "<<attempts<<" attempts."<<endl;

    }
   else if((guess-1)==genrated_No || (guess+1)==genrated_No || (guess-2)==genrated_No || (guess+2)==genrated_No||
   (guess-3)==genrated_No || (guess+3)==genrated_No ||(guess-4)==genrated_No || (guess+4)==genrated_No||
   (guess-5)==genrated_No || (guess+5)==genrated_No){
        cout<<"\tYou Are to Close!,But unfortunately Guessed worng one"<<endl;
   }
    else if(guess<genrated_No){
        cout<<"\tYou guessed Too low, Try Again"<<endl;

    }
    else{
        cout<<"\tYou guessed Too High , try again!"<<endl;
    }
}

int Getguess(){
    int guess;
    
    cout<<"\tEnter Your Guess (From 1 To 100): "<<endl;
    cout<<"\t";cin>>guess;
    return guess;
}


int main(){

    cout<<"**********TASK_1***********"<<endl;
    cout<<"**********CodSoft***********"<<endl;  
    cout<<"**********Aman Singh Rawat***********"<<endl;
    cout<<"**************Welcome to Our CodSoft Guessing Game************"<<endl;
    

    srand(static_cast<unsigned int>(time(0)));
    int genrated_no = RandomNoGenrater(1,100);
    int guess;
    int test;
    int attempt=0;
    
    cout<<"Enter How many Attempts you are  Confident to Guess a random No."<<endl;
    cin>>test;

    while(test--){
        guess= Getguess();
        attempt++;
        checkguess(genrated_no, guess , attempt);

        if(guess == genrated_no ){
            break;
        }
    }
    cout << "---------------------------------" << endl;
    cout << "Thank you for playing!" << endl;
    cout << "---------------------------------" << endl;

   return 0;
}