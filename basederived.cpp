#include <iostream>
#include <string>
#include <vector>

class Person
{
    public:

        std::string name;
        int age;
        std::string color;
        std::string birthday;
        void getpersonInfo(void);
        void personInfo(void);
};

class Student : public Person
{
    public:

        double gpa;
        std::string major;
        int year;
        int studentID;
        void getstudentInfo(void);
        void studentInfo(void);
};

class Employee : public Student
{
    public:

        std::string jobtitle;
        int salary;
        int yearsWorked;
        void getEmployeeInfo(void);
        void employeeInfo(void);
};

void Person::getpersonInfo(void)
{
    std::cout << "Enter name:" << std::endl;
    std::cin >> name;
    std::cout << "Enter age:" << std::endl;
    std::cin >> age;
    std::cout << "Enter favorite color:" << std::endl;
    std::cin >> color;
    std::cout << "Enter birthday (xx/xx/xxxx):" << std::endl;
    std::cin >> birthday;
}

void Person::personInfo(void)
{
    std::cout << name << std::endl;
    std::cout << age << std::endl;
    std::cout << color << std::endl;
    std::cout << birthday << std::endl;
}

void Student::getstudentInfo(void)
{
    std::cout << "Enter gpa:" << std::endl;
    std::cin >> gpa;
    std::cout << "Enter major:" << std::endl;
    std::cin >> major;
    std::cout << "Enter current year:" << std::endl;
    std::cin >> year;
    std::cout << "Enter student ID:" << std::endl;
    std::cin >> studentID;
}

void Student::studentInfo(void)
{
    std::cout << gpa << std::endl;
    std::cout << major << std::endl;
    std::cout << year << std::endl;
    std::cout << studentID << std::endl;
}

void Employee::getEmployeeInfo(void)
{
    std::cout << "Enter position:" << std::endl;
    std::cin >> jobtitle;
    std::cout << "Enter salary:" << std::endl;
    std::cin >> salary;
    std::cout << "Enter years at this company:" << std::endl;
    std::cin >> yearsWorked;
}

void Employee::employeeInfo(void)
{
    std::cout << jobtitle << std::endl;
    std::cout << salary << std::endl;
    std::cout << yearsWorked << std::endl;
}

int main()
{
    int employees;
    std::cout << "Enter number of employees at this company:" << std::endl;
    std::cin >> employees;

    for (int i = 0; i < employees; i++)
    {
    Employee p1;
    std::cout << "\n";

    p1.getpersonInfo();
    std::cout << "\n";

    p1.getstudentInfo();
    std::cout << "\n";

    p1.getEmployeeInfo();
    std::cout << "\n";

    p1.personInfo();
    std::cout << "\n";

    p1.studentInfo();
    std::cout << "\n";

    p1.employeeInfo();
    std::cout << "\n";
    }

    return 0;
}
