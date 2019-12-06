#include<iostream>
#include<cmath>
#include<iomanip>
#include<string>
using namespace std;

bool isValiduCourseCode(string n);
bool isValidCourseName(string n);
bool isValidCreditHours(int n);
bool isValidSemester(int n);
void addCourse(string *code; string *name; int *sem; int *crdHrs; string code; string name; int crdHrs; int sem);



int main()
{
	int size = 0;
	//int *p = &size;
	char codeList[56][5];
	char nameList[56][50];
	int crdHrsList[56];
	int semList[56];
	int option;
	cout << "** Welcome to university Learning Management System**"<<endl;
	cout << "Choose the follwing options "<<endl;
	cout << "1 Add Course" << endl;
	cout << "2 Update Course"<<endl;
	cout << "3 Delete Course"<<endl;
	cout << "4 View All courses"<<endl;
	cout << "5 View Courses of a Semester"<<endl;
	cout << "6 Exit Program"<<endl;
	cout << "Choose the option:"<<endl;
	cin >> option;
	while (option != 6)
	{
		switch (option)
		{
		case 1:
			string code, name;
			int sem, crdHrs;
			cout << "enter details of the code" << endl;
			cin >> sem >> crdHrs >> code;
			getline(cin, name);
			AddCourse(codeList, nameList, crdHrsList, semList, size - 1, code, name, crdHrs, sem);
			break;
		case 2:
			string code;
			string code, name;
			int sem, crdHrs;
			cout << "enter the details to edit:" << endl;
			cin >> code;
			cout << "and the new details are" << endl;
			cin >> sem >> crdHrs >> code;
			getline(cin, name);
			EditCourse(codeList, nameList, crdHrsList, semList, size, code);
			break;
		case 3:
			string code;
			cout << "enter the course to be delete:" << endl;
			cin >> code;
			DeleteCourse(codeList, nameList, crdHrsList, semList, size, code);

			break;
		case 4:
			cout << "so the view course will be" << endl;
			ViewCourse(codeList, nameList, crdHrsList, semList, size);
			break;
		case 5:
			int sem;
			cout << "enter the details of the current semester" << endl;
			cin >> sem;
			ViewSemesterCourses(codeList, nameList, crdHrsList, semList, size, sem);
			break;
		case 6:
			cout << "exit program" << endl;

		}
	}
	system("pause");
	return 0;
}
bool isValiduCourseCode(string a) {  //validity of course code
	bool valid;
	for (int i = 0; i < 2; i++)
	{
		if(a[i]>='A'&&a[i]<='Z'||a[i]>='a'&&a[i]<='z')
		{
			valid=true;
		}
	}
	for (int i = 2; i < 5; i++)
	{
		if ((a[i] >= '1'&&a[i] <= '9'))
		{
		valid= true;
		}
	}
	if (a[5] == NULL)
	{
		valid= true;
	}
	else
		valid = false;
	return valid;
}
bool isValidCourseName(string a) {
	bool valid;
	for (int i = 0; a[i] != '\0'; i++)
	{
		if (((a[i] >= 'A'&&a[i] <= 'Z') || (a[i] >= 'a'&&a[i] <= 'z')))
		{
			valid = true;
		}
		else
			valid = false;
	}
	return valid ;
}
bool isValidCreditHours(int n)
{
	if (n == 1 || n == 2 || n == 3)
		return true;
	else
		return false;
}
bool isValidSemester(int n)
{
	if ((n == 1 || n< 9))
		return true;
	else
		return false;
}



void addCourse(string *code; string *name; int *sem; int *crdHrs; string code; string name; int crdHrs; int sem)

	{
		if (isValidCourseCode(coursecode) && isValidCourseName(name) && isValidSemester(semester) && isValidCreditHours(credithours))
		{
			code[size] = code;
			name[size] = name;
			crdHrs[size] = crdHrs;
			sem[size] = sem;
			cout << size << "\t" << code[size] << "\t" << crdHrs[size] << "\t" << sem[size] << "\t" << name[size] << endl
		else
		{

			cout << "invalid data";
		}

		}
	}


