#include<iostream.h>
#include<conio.h>
class emp
{
	 int eid;
	 int salary;
	 int i;
	 char ename[10];
	 char dept[10];
	 public:
	 emp()
	 {
		cout<<"enter emp id:";
		cin>>eid;
		cout<<"enter emp name:";
		cin>>ename;
		cout<<"enter emp dept:";
		cin>>dept;
		cout<<"enter emp salary:";
		cin>>salary;
		cout<<"id:"<<eid<<"/n Name:"<<ename<<"/n dept"<<dept<<"/n salary"<<salary;
	 }
};
void main()
{
	emp e1;
	emp e2;
	emp e3;
	emp e4;
	emp e5;
	getch();
}