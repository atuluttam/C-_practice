#include <iostream>

using namespace std;

class person
{
    char name[100],gender[10];
    int age;
    public:
        void getdata()
        {
            cout<<"Enter Name: ";
            cin>> name;
            cout<<"Enter Age: ";
            cin>>age;
            cout<<"Enter Gender: ";
            cin>>gender;
        }
        void display()
        {
            cout<<"Name: "<<name<<endl;
            cout<<"Age: "<<age<<endl;
            cout<<"Gender: "<<gender<<endl;
        }
};

class student: public person
{
    int s_id;
    char school[100], level[20];
    public:
        void getdata()
        {
            person::getdata();
            cout<<"Student ID : ";
            cin>>s_id;
            cout<<"Name of School: ";
            cin>> school;
            cout<<"Level: ";
            cin>>level;
        }
        void display()
        {
            person::display();
            cout<<"Name of School: "<<school<<endl;
            cout<<"Level: "<<level<<endl;
        }
};

class employee: public person
{   
    int e_id;
    char company[100];
    float salary;
    public:
        void getdata()
        {
            person::getdata();
            cout<<"Employee ID : ";
            cin>>e_id;
            cout<<"Name of Company: ";
            cin>> company;
            cout<<"Salary: Rs.";
            cin>>salary;
        }
        void display()
        {
            person::display();
            cout<<"Name of Company: "<<company<<endl;
            cout<<"Salary: Rs."<<salary<<endl;
        }
};

int main()
{
    student s;
    employee e;
    cout<<"Student"<<endl;
    cout<<"Enter data"<<endl;
    s.getdata();
    cout<<endl<<"Displaying data"<<endl;
    s.display();
    cout<<endl<<"Employee"<<endl;
    cout<<"Enter data"<<endl;
    e.getdata();
    cout<<endl<<"Displaying data"<<endl;
    e.display();
    return 0;
}