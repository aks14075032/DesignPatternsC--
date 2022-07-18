// Include header file
#include <iostream>
#include <string>
#include <vector>

// A common interface for all employee
class Employee
{
public:
    virtual void showEmployeeDetails() = 0;
};

class Developer : public Employee
{
private:
    std::string name;
    long empId;
    std::string position;
public :
    Developer(long empId, std::string name, std::string position)
    {
        // Assign the Employee id,
        // name and the position
        this->empId = empId;
        this->name = name;
        this->position = position;
    }
    void showEmployeeDetails()
    {
        std::cout << std::to_string(empId) + " " + name + " " + position << std::endl;
    }
};
class Manager : public Employee
{
private:
    std::string name;
    long empId;
    std::string position;
public :
    Manager(long empId, std::string name, std::string position)
    {
        this->empId = empId;
        this->name = name;
        this->position = position;
    }
    void showEmployeeDetails()
    {
        std::cout << std::to_string(empId) + " " + name + " " + position << std::endl;
    }
};
// Class used to get Employee List
// and do the opertions like
// add or remove Employee
class CompanyDirectory : public Employee
{
private:
    std::vector<Employee *> employeeList = std::vector<Employee *>();
public:
    void showEmployeeDetails()
    {
        for (auto emp : employeeList)
        {
            emp->showEmployeeDetails();
        }
    }
    void addEmployee(Employee* emp)
    {
        employeeList.push_back(emp);
    }
    void removeEmployee(std::__wrap_iter<std::vector<Employee *, std::allocator<Employee *>>::const_pointer> emp)
    {
        employeeList.erase(emp);
    }
};
// Driver class
class Company
{
public:
    static void main(std::vector<std::string> &args)
    {
        Developer* dev1 = new Developer(100, "Lokesh Sharma", "Pro Developer");
        Developer* dev2 = new Developer(101, "Vinay Sharma", "Developer");
        CompanyDirectory* engDirectory = new CompanyDirectory();
        engDirectory->addEmployee(dev1);
        engDirectory->addEmployee(dev2);
        Manager* man1 = new Manager(200, "Kushagra Garg", "SEO Manager");
        Manager* man2 = new Manager(201, "Vikram Sharma ", "Kushagra\'s Manager");
        CompanyDirectory* accDirectory = new CompanyDirectory();
        accDirectory->addEmployee(man1);
        accDirectory->addEmployee(man2);
        CompanyDirectory* directory = new CompanyDirectory();
        directory->addEmployee(engDirectory);
        directory->addEmployee(accDirectory);
        directory->showEmployeeDetails();
    }
};
int main(int argc, char **argv){
    std::vector<std::string> parameter(argv + 1, argv + argc);
    Company::main(parameter);
    return 0;
};