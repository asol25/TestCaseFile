#define _CRT_SECURE_NO_WARNINGS 

#include <iostream>
#include <fstream>

using namespace std;

/*
Setter method for the students.
*/
void AddStudents()
{
    cout << "you have selected add student 'THINH NGU': 200\n";
}

/*
Setter method for the students.
*/
void DeleteStudent()
{
    cout << "you have selected delete student 'THINH NGU': 200\n";
}

/*
Setter method for the students.
*/
void UpdateStudent()
{
    cout << "you have selected update student 'THINH NGU': 200\n";
}

/*
Getter method for the students.
*/
void ViewAllStudentRecords()
{
    cout << "View all student records 'THINH NGU': 200\n";
}

/*
Getter method for the students.
*/
void FindStudent()
{
    cout << "you have selected Find a student 'THINH NGU': 200\n";
}

/*
A method to display form menu for main app.
@param int key to select options in form menu. 
*/
void DisplayMenuForUi(int key)
{
    switch (key)
    {
    case 1: AddStudents(); break;
    case 2: DeleteStudent(); break;
    case 3: UpdateStudent(); break;
    case 4: ViewAllStudentRecords(); break;
    case 5: FindStudent(); break;
    default: cout << "invalid: 500"; break;
    }
}

int main()
{
    std::fstream _textCase_;
    FILE* _outputCase_;

    _textCase_.open("__text__.txt", std::ios_base::in);
    _outputCase_ = freopen("__output__.txt", "w+", stdout);

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

    _outputCase_ != NULL ? fclose(_outputCase_) : NULL;

    return 0;
}

