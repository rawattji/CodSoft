/*Create a program that manages student grades. Allow the user
to input student names and their corresponding grades.
Calculate the average grade and display it along with the highest
and lowest grades*/


//task-3


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

void GetStudentsDetails(vector<pair<string, double>>& students){
    int NoOfStd;
    int Entry=0;
    cout<<"Enter the number of students you want to grade"<<endl;
    cin>>NoOfStd;
    do{
        clearConsole();
        string name;
        double grade;
        Entry++;
        cout<<"Enter the name of Student "<<Entry<<endl;
        cin>>name;
        cout<<"Enter the Grade of Student  "<<Entry<<" : "<<name<<endl;
        cin>>grade;

        cin.ignore();
        students.push_back(make_pair(name, grade));
    }while(Entry != NoOfStd);

}



void calculate_grades(const vector<pair<string,double>>&students, double& averageGrade, 
double& highestGrade,string& highestName, double& lowestGrade , string& lowestName){
    if (students.empty()){
        cout <<"Please Enter Students Data First" <<endl;
        return;
    }
    double totalGrade = 0;
    highestGrade = students[0].second;
    lowestGrade = students[0].second;
    highestName = students[0].first; 
    lowestName = students[0].first;

    for (const pair<string, double>& student : students){
        totalGrade += student.second;
        if (student.second > highestGrade){
            highestGrade = student.second;
            highestName = student.first;
        }
        if (student.second < lowestGrade){
            lowestGrade = student.second;
            lowestName = student.first;
        }
    }

    averageGrade =totalGrade/students.size();
}




int main(){
    cout<<"**********TASK_3***********"<<endl;
    cout<<"**********CodSoft***********"<<endl;  
    cout<<"**********Aman Singh Rawat***********"<<endl;
    cout<<"**************Welcome to Our CodSoft Grading System************"<<endl;

    vector<pair<string, double>> students;
    double averageGrade, highestGrade, lowestGrade;
    string highestName, lowestName;

    GetStudentsDetails(students);
    calculate_grades(students, averageGrade, highestGrade, highestName, lowestGrade, lowestName);
   clearConsole();
    cout<<"Average grade: "<<averageGrade<<endl;
    cout<<"Highest grade: "<<highestGrade<<" of Student Name: "<<highestName<<endl;
    cout<<"Lowest grade: "<<lowestGrade<<" of Student Name: "<<lowestName<<endl;

    cout<<"---------------------------------"<<endl;
    cout<<"Thank you for Using Our Grading System"<<endl;
    cout<<"---------------------------------"<<endl;

    cin.ignore();



   return 0;
}
