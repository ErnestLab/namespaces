#include "Header.h"
#include "Committee.h"
#include "Department.h"
#include "Employee.h"
#include "Group.h"
#include "Manager.h"
#include "Parent.h"
#include "Student.h"
#include "Teacher.h"


int main()
{
    cout << "\n> Namespaces in classes using" << endl;
    person::Teacher* t = new person::Teacher();
    person::Student* s = new person::Student();
    association::Group* g = new association::Group();
    association::Department* d = new association::Department();

    cout << "  Memory Free" << endl;
    delete t;
    delete s;
    delete g;
    delete d;

    cout << "\n\nFinish" << endl;
}

