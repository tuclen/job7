#include <iostream>
#include <vector>
using namespace std;

class Person {
		
	public:
		string Name;
		int PhoneNumber;
		string EmailAddress;
		person(){
		};
		void input(string name, int phoneNumber, string emailAddress){
		cin>>name>>phoneNumber>>emailAddress;
		Name = name;
		PhoneNumber = phoneNumber;
		EmailAddress = emailAddress;
		};
		void output(){
		
		};
};
class Adress: public Person {
	public:
		string Street, City, State, Country, PostalCode;
	
};
 
class Worker: public Person {
	public:
	Worker(){
		}
	int salary,expirience,hours,premy;
	void setWorker(int salary,int expirience,int hours,int premy){
		cin>>salary>>expirience>>hours>>premy;
		this->salary = salary;
		this->expirience = expirience;
		this->hours = hours;
		this->premy = premy;
	};
	void getWorker(){
		
	};

};
class Student: public Person{
	public:
	Student(){
	}
	int StudentNumber,AverageMark;
	void inputStudent(int StudentNumber,int AverageMark) {
		this->StudentNumber = StudentNumber;
		this->AverageMark = AverageMark;
		
	};
}; 
class Mirea: public Worker, public Student {
	public:
		Mirea(){
		}
		vector <Worker*> worker;
		vector <Student*> student;
		void add_student(Student* student1)
		{
			student.push_back(student1);
		}
		void add_worker(Worker* worker1)
		{
			worker.push_back(worker1);
		}
		void show(){
			cout<<student.size()<<endl;
			cout<<worker.size();
		}
};
	

int main ()
{
	
	string name; int phoneNumber; string emailAddress;
	int StudentNumber;int AverageMark;
	int salary,expirience,hours,premy;
	Student* student1;
	student1->inputStudent(StudentNumber, AverageMark);
	Worker* worker1;
	worker1->setWorker(salary,expirience,hours,premy);
	Mirea mirea;
	mirea.add_student(student1);
	mirea.add_worker(worker1);
	mirea.show();
	return 0;
};
