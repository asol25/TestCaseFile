
#define _CRT_SECURE_NO_WARNINGS 

#include <iostream>
#include<string>
#include <fstream>
#include <stdio.h>

using namespace std;

void AddStudents()
{
    cout << "you have selected add student 'THINH NGU': \n";
}
void DeleteStudent()
{
    cout << "you have selected delete student 'THINH NGU'\n";
}
void UpdateStudent()
{
    cout << "you have selected update student 'THINH NGU'\n";
}
void ViewAllStudentRecords()
{
    cout << "View all student records 'THINH NGU'\n";
}
void FindStudent()
{
    cout << "you have selected Find a student 'THINH NGU'\n";
}

void DisplayMenuForUi(int key)
{
    switch (key)
    {
    case 1: AddStudents(); break;
    case 2: DeleteStudent(); break;
    case 3: UpdateStudent(); break;
    case 4: ViewAllStudentRecords(); break;
    case 5: FindStudent(); break;
    default: cout << "invalid"; break;
    }
}
int main()
{
    std::fstream _textCase_;
    FILE* _outputCase_;

    _textCase_.open("__text__.txt", std::ios_base::in);
    _outputCase_ = freopen("__output__.txt", "w", stdout);

    if (_textCase_.is_open()) {
        int keyIntoTest;
        while (_textCase_ >> keyIntoTest)
        {
            DisplayMenuForUi(keyIntoTest);
        }
    }
    else {
        cout << "Error opening file";
    }

    fclose(_outputCase_);
    return 0;
}

