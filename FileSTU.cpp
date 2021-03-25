#include<iostream>
#include<fstream>
#include<string>
#include<cstdlib>

using namespace std;

class student {
public:
    int rollno;
    char name[25], Class[5], grade;
    float marks;

    void gradecal()  //function to calculate grade
    {
        if (marks >= 75) { grade = 'A'; }
        else if (marks >= 60 && marks < 75) { grade = 'B'; }
        else if (marks >= 50 && marks < 40) { grade = 'C'; }
        else if (marks > 0 && marks < 40) { grade = 'D'; }
    }

    void getdata()  // function to input datas in the files
    {
        cout << "Enter Name of the Student:";
        cin >> name;
        cout << "Enter Student's Roll Number:";
        cin >> rollno;
        cout << "Enter Student's Class:";
        cin >> Class;
        cout << "Enter Student's marks:";
        cin >> marks;
        gradecal();
    }

    void putdata() //function to display the data in the file
    { cout << name << " with Roll no:" << rollno << " has " << marks << " %marks and grade of " << grade << endl; }
} S;

void input(void)  //function called for entering datas of students inside the file
{
    char ans = 'Y';
    ofstream filin;
    filin.open("Stu.txt", ios::out | ios::app);
    while (ans == 'Y' || ans == 'y') {
        S.getdata();
        filin.write((char *) &S, sizeof(student));
        cout << "\n Want to enter more records?(y/n):";
        cin >> ans;
    }
    filin.seekp(0);
    filin.close();
}

void search(void)//search by roll no
{
    int rn;
    ifstream fout("Stu.txt", ios::in);
    fout.seekg(0);
    cout << "Enter rollno to be searched for:";
    cin >> rn;
    while (!fout.eof()) {
        fout.read((char *) &S, sizeof(student));
        if (S.rollno == rn) {
            S.putdata();
            break;
        }
        else { cout << "Rollno doesn't exists" << endl; }
    }
    fout.close();
}

void display(void) {
    ifstream fout("Stu.txt", ios::in);
    fout.seekg(0);
    while (!fout.eof()) {
        fout.read((char *) &S, sizeof(S));
        S.putdata();
    }
    fout.close();
}

int main() {  // Interface
    int choice;
    cout << " ACT1.Enter Students details \n ACT2.Search Student Details \n ACT3.Print All Student details";
    cout << "\n Enter your choice for Act:";
    cin >> choice;
    switch (choice) {
        case 1:
            input();
            break; //function call to input datas of student using class
        case 2:
            search();//function call to search student details using roll no of class
            break;
        case 3:
            display();
    }
    return 0;
}
