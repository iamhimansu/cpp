#include <iostream>
#include <cstring>

/**
 * Nested classes are ordinary classes inside of a class itself
 * They describe encapsulations
 * The access level of members does not changes in the nested classes
 * Nested public classes can be accessed by using the scope resolution from parent classes
 *
 * An example has been showed below
*/

class Student {
private:
    int rollNumber;
    char name[20]{};

    class Address {
    private:
        int pincode;
        char street[20];
        char city[20];
        char state[20];

    public:
        void setAddress(int p, char *s, char *c, char *st) {
            this->pincode = p;
            strcpy(this->street, s);
            strcpy(this->state, st);
            strcpy(this->city, c);
        }

        void getAddress() {
            std::cout << std::endl;
            std::cout << "Student Address : " << std::endl;
            std::cout << std::endl;
            std::cout << "Pincode: " << this->pincode << std::endl;
            std::cout << "Street: " << this->street << std::endl;
            std::cout << "City: " << this->city << std::endl;
            std::cout << "State: " << this->state << std::endl;
        }
    };

public:
    Address address;
    void getStudentDetails() {
        std::cout << std::endl;
        std::cout << "Student Details : " << std::endl;
        std::cout << std::endl;
        std::cout << "Name : " << this->name << std::endl;
        std::cout << "Roll Number: " << this->rollNumber << std::endl;
    }

    void setStudentDetails(int roll, char *n) {
        this->rollNumber = roll;
        strcpy(this->name, n);
    }
};

int main() {
    Student s{};
    s.setStudentDetails(18, "HIMANSHU");
    s.address.setAddress(110021, "BAL-105", "DELHI", "DELHI");
    s.getStudentDetails();
    s.address.getAddress();
    return EXIT_SUCCESS;
}