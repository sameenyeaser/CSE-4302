#include<iostream>

using namespace std;

class Book{
private:
    string title_book;
    string author_book;
    int pub_year;
    bool availability;

public:
    void setDetails(string title,string author, int year){
        title_book = title;
        author_book = author;
        pub_year = year;
    }

    void checkOut(){
        availability = 0;
    }

    void checkIn(){
        availability = 1;
    }

    void displayStatus(){
        cout << "Title: " << title_book << endl;
        cout << "Author: " << author_book << endl;
        cout << "Publication Year: " << pub_year << endl;

        if(availability)
            cout << "Book Available." << endl;
        else
            cout << "Book Unavailable." << endl;
    }

    bool isClassic(){
        int diff = 2023 - 50;
        if(pub_year < diff)
            return true;
        else
            return false;
    }
};

int main(){
    Book book1;

    book1.checkIn();
    book1.setDetails("IUT","iut",1981);
    book1.displayStatus();
    cout << endl;

    book1.checkOut();
    book1.displayStatus();
    cout << endl;

    if(book1.isClassic())
        cout << "The book is a Classic." << endl;
    else
        cout << "The book is not a Classic\n";
}
