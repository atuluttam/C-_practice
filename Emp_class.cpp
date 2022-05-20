#include <iostream>
using namespace std;

class employee
{
    private:
        int   emp_id;
        char  emp_name[20];
        float base_sal;
        float allowance;
	public:
        employee(){
            base_sal = 5000;
        }
		void get_emp_details();
		float find_net_salary(float base_sal, float allowance);
		void show_emp_details();
};
void employee :: get_emp_details(){

	cout<<"\nEnter employee ID: ";
	cin>>emp_id;
	cout<<"\nEnter employee name: ";
	cin>>emp_name;
	cout<<"\nEnter employee base salary: ";
	cin>>base_sal;
	cout<<"\nEnter employee Allowances: ";
	cin>>allowance;
}

float employee :: find_net_salary(float base_sal, float allowance){

    return base_sal+allowance;
}

void employee :: show_emp_details(){

	cout<<"\n\n**** Details of  Employee ****";
	cout<<"\nEmployee Name      :  "<<emp_name;
	cout<<"\nEmployee number    :  "<<emp_id;
	cout<<"\nBase salary        :  "<<base_sal;
	cout<<"\nEmployee Allowance :  "<<allowance;
	cout<<"\nNet Salary         :  "<<find_net_salary(base_sal, allowance);
	cout<<"\n-------------------------------\n\n";
}
int main(){

    employee emp;
    
    emp.get_emp_details();
    emp.show_emp_details();

    return 0;
}