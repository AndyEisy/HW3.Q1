#include <iostream>
#include "Person.h"
#include "Student.h"


using namespace std;

int main()
{
    Person p1("Tony", "Stark", 1, 21, 1950);
    cout << p1.getName() << " born on: " << p1.getBirthdate() << endl;

    Student s1("Peter", "Parker", 8, 10, 2001, 60);
    cout << s1.getName() << " born on " << s1.getBirthdate() << ", credits: " <<
        s1.getNumCredits() << endl;

    GradStudent gs1("Bruce", "Banner", 12, 18, 1969, 35);
    cout << gs1.getName() << " born on " << gs1.getBirthdate() << ", can graduate?  " <<
        (gs1.canGraduate() ? "Yes" : "No") << endl;

    UndergradStudent ugs1("Steve", "Rogers", 7, 4, 1920, 110);
    cout << ugs1.getName() << " born on " << ugs1.getBirthdate() << ", can graduate? " <<
        (ugs1.canGraduate() ? "Yes" : "No") << endl;



    return 0;
}



