#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string surname;     
    string name;        
    string patronymic;  
    int age;           

public:
    Person(string surnameInput, string nameInput, string patronymicInput, int ageInput) {
        surname = surnameInput;
        name = nameInput;
        patronymic = patronymicInput;
        age = ageInput;
    }

    void Eat() {
        cout << name << " is eating." << endl;
    }

    void Sleep() {
        cout << name << " is sleeping." << endl;
    }

    
    void Walk() {
        cout << name << " is walking." << endl;
    }

    
    void PrintInfo() {
        cout << "Full Name: " << surname << " " << name << " " << patronymic << endl;
        cout << "Age: " << age << endl;
    }
};


class Student : public Person {
private:
    string groupName;  

public:
    
    Student(string surnameInput, string nameInput, string patronymicInput, int ageInput, string groupNameInput)
        : Person(surnameInput, nameInput, patronymicInput, ageInput) {
        groupName = groupNameInput;
    }

    
    void AttendClasses() {
        cout << name << " is attending classes in group " << groupName << "." << endl;
    }

    
    void PrintStudentInfo() {
        PrintInfo();
        cout << "Group Name: " << groupName << endl;
    }
};


class Worker : public Person {
private:
    string workplace;  

public:
    
    Worker(string surnameInput, string nameInput, string patronymicInput, int ageInput, string workplaceInput)
        : Person(surnameInput, nameInput, patronymicInput, ageInput) {
        workplace = workplaceInput;
    }

    
    void GoToWork() {
        cout << name << " is going to work at " << workplace << "." << endl;
    }

    
    void PrintWorkerInfo() {
        PrintInfo();
        cout << "Workplace: " << workplace << endl;
    }
};

int main() {
    
    Student student("Ivanov", "Ivan", "Ivanovich", 20, "P-38");
    cout << "Student Info:" << endl;
    student.PrintStudentInfo();
    student.Eat();
    student.Walk();
    student.AttendClasses();
    cout << endl;

    
    Worker worker("Petrov", "Petr", "Petrovich", 35, "MOTOTECH");
    cout << "Worker Info:" << endl;
    worker.PrintWorkerInfo();
    worker.Sleep();
    worker.Walk();
    worker.GoToWork();

    return 0;
}
