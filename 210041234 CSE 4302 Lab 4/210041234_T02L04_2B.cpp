#include <iostream>
#include <string>

using namespace std;

class Student{
private:
    string firstName;
    string lastName;
    string studentID;
    int birthYear;
    string course;
    float obtainedMark;
    int age;

public:
    static int totalStudents;

    void setTotal(){
        totalStudents = 20;
    }

    Student(string firstName,string lastName,string id,int birthYear){
        firstName = firstName;
        lastName = lastName;
        studentID = id;
        birthYear = birthYear;

        age = 2023 - birthYear;
        cout << age << endl;
       setTotal();

        totalStudents++;
    }

    void enrollInCourse(string courseName){
        course = courseName;
        obtainedMark = 0.0;
    }

    string generateEmail(){
        string email = firstName + lastName + "@iut-dhaka.edu";

        return email;
        //cout << firstName << lastName << "@iut-dhaka.edu" << endl;
    }

    void obtainedMarks(float marks){
        obtainedMark = marks;
    }

    float setGPAForEachCourse(){
        float gpa;

        if(obtainedMark > 80)
            gpa = 4.00;
        else if(obtainedMark < 80 && obtainedMark >=75)
            gpa = 3.75;
        else if(obtainedMark < 75 && obtainedMark >=70)
            gpa = 3.50;
        else if(obtainedMark < 70 && obtainedMark >=65)
            gpa = 3.25;
        else if(obtainedMark < 70 && obtainedMark >=65)
            gpa = 3.00;
        else if(obtainedMark < 65 && obtainedMark >=60)
            gpa = 2.75;
        else if(obtainedMark < 60 && obtainedMark >=55)
            gpa = 2.50;
        else if(obtainedMark < 55 && obtainedMark >=50)
            gpa = 2.25;
        else if(obtainedMark < 50 && obtainedMark >=45)
            gpa = 2.00;
        else
            gpa = 0;

        return gpa;

    }

    float displayCGPA(){
        float cgpa;
        cgpa = setGPAForEachCourse();

        return cgpa;
    }

    void willGraduate(){
        if(obtainedMark >= 50)
            cout << "Will Graduate." << endl;
        else
            cout << "Will Not Graduate." << endl;
    }

    void applyForScholarship(){
        float cgpa = displayCGPA();

        if(cgpa > 3.8){
            cout << "Applicable for Scholarship." << endl;
        }
        else
            cout << "Not applicable for Scholarship." << endl;
    }

    void participateInInternship(string company){
        float cgpa = displayCGPA();

        if(cgpa > 3.0)
            cout << "Can participate for internship in " << company << endl;
        else
            cout << "Can not participate for internship in " << company << endl;
    }

    void printAcademicRecord(){
        string email = generateEmail();
        cout << firstName;
        cout << " ";
        cout << lastName << endl;
        cout << studentID << endl;
        cout << email << endl;
        cout << course << endl;
        willGraduate();
        applyForScholarship();
        participateInInternship("Apple");
    }

    ~Student(){
        totalStudents--;
        cout << firstName << " object has been destructed." << endl;
    }
};

int Student::totalStudents = 20;

int main(void){
    Student student1("Mr.","Snow","WW-1001",1978);

    student1.enrollInCourse("CSE 4302");
    student1.obtainedMarks(82);
    student1.printAcademicRecord();
    cout << endl;

    cout << student1.totalStudents;
}
