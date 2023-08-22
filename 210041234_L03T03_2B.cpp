#include<iostream>

using namespace std;

class Student{

private:
    string first_name;
    string last_name;
    int student_id;
    int birth_year;
    string course;
    int marks;
    float gpa;

public:
    void displayDetails(string f_name,string l_name,int id,int year,string cour,int obtained_marks){
        first_name = f_name;
        last_name = l_name;
        student_id = id;
        birth_year = year;
        course = cour;
        marks = obtained_marks;
    }

    int displayAge(){
        int age = 2023 - birth_year;
        return age;
    }

    float displayGPA(){

        if(marks > 80)
            gpa = 4.00;
        else if(marks < 80 && marks >=75)
            gpa = 3.75;
        else if(marks < 75 && marks >=70)
            gpa = 3.50;
        else if(marks < 70 && marks >=65)
            gpa = 3.25;
        else if(marks < 70 && marks >=65)
            gpa = 3.00;
        else if(marks < 65 && marks >=60)
            gpa = 2.75;
        else if(marks < 60 && marks >=55)
            gpa = 2.50;
        else if(marks < 55 && marks >=50)
            gpa = 2.25;
        else if(marks < 50 && marks >=45)
            gpa = 2.00;
        else
            gpa = 0;

        return gpa;
    }

    void willGraduate(){

        if(gpa >= 2.00)
            cout << "Will Graduate." << endl;
        else
            cout << "Will Not Graduate." << endl;

    }

    float updatedGPA(){
        marks += (marks * 0.1);

        displayGPA();
    }

    void printTranscript(){
        int age = displayAge();
        cout << "Full Name: " << first_name << " " << last_name << endl;
        cout << "Student Id: " << student_id << endl;
        cout << "Current age: " << age << endl;
        cout << "Updated GPA: " << gpa << endl;
    }

    void prevTranscript(){
        int age = displayAge();
        cout << "Full Name: " << first_name << " " << last_name << endl;
        cout << "Student Id: " << student_id << endl;
        cout << "Current age: " << age << endl;
        cout << "Current GPA: " << gpa << endl;
    }
};

int main(void){
    Student student1;
    student1.displayDetails("John","Snow",1011,2003,"CSE 4302",67);
    student1.displayAge();
    student1.displayGPA();

    student1.prevTranscript();
    cout << endl;
    student1.updatedGPA();

    cout << "Details after updating: " << endl;
    cout << endl;
    student1.printTranscript();
    cout << endl;
    student1.willGraduate();

}
