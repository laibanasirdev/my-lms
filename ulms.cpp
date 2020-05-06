#include<iostream>
#include<iomanip>
#include<string>

using namespace std;
//Global Variable
int index=0;
int  codeindex;
bool isValidCourseCode(string code);
bool isValidCourseName(string name);
bool isValidCreditHours (int crdhrs);
 bool isValidSemester(int semester);

void AddCourse(string codeList[], string nameList[] , int crdHrsList[], int semList[],
               string  code, string name, int crdhrs, int semester);

void ViewCourse(string codeList[], string nameList[] , int crdHrsList[], int semList[]);

void editCourse(string codeList[], string nameList[] , int crdHrsList[], int semList[],
               string  code, string name, int crdhrs, int semester);

void deleteCourse(string codeList[], string nameList[] , int crdHrsList[], int semList[],
               string  code);

void viewCoursesOfaSemester(string codeList[], string nameList[] , int crdHrsList[], int semList[],
                            int semester);
  void ViewSemesterCourses(string codelist[],int creditlist[],int semesterlist[],string namelist[],int semester);
int main(){
int option;	
//declare array in which data  will be stores
string codelist[150];
string namelist[150];
int creditlist[150];
int semesterlist[150];
//variables so data will be stored in arrays
string code;
int crdhrs;
int semester;
string name;
//int count=0;
  label:
cout<<"****Welcome to University Learning Mnagement System****"	<<endl;
cout<<"Choose the folllowing option"<<endl;
cout<<"1   Add Course"<<endl;
cout<<"2   Update Course"<<endl;
cout<<"3   Delete Course"<<endl;
cout<<"4   View All Courses"<<endl;
cout<<"5   View Courses of a semester"<<endl;
cout<<"6   Exit Program"<<endl;
cout<<endl;
cout<<"choose the option"<<endl;
cin>>option;
while(option!=6){
	switch(option){
	case 1:
		cout<<"Enter the details of the course"<<endl;
		cout<<"Course Code:"<<endl;
		cin>>code;
	
		cout<<"Course Name:"<<endl;
		
		getline(cin,name);
	
		cout<<"Credit Hours:"<<endl;
		cin>>crdhrs;
		
		cout<<"Semester:"<<endl;
	cin>>semester;
		
		AddCourse(codelist,namelist,creditlist,semesterlist , code,name,crdhrs,semester);
		//goto label;
	break;	
	
	case 2:
		
		cout<<"Enter the course code to edit"<<endl;
		cin>>code;
		for(int i=0;i<index;i++)
		{
			if(codelist[i]==code)
			codeindex=i;
			goto label1;
			break;
		}
	if(codeindex==-1)
	{cout<<"Invalid Input"<<endl;
	}
	else{
		cout<<"enter the new details of course"<<endl;
		cin>>code>>crdhrs>>semester;
		getline(cin,name);
		cout<<endl;
	editCourse(codelist, namelist,creditlist,semesterlist,code,name,crdhrs,semester);
	}
	break;
	case 3:
		cout<<"Enter the course code to be delete"<<endl;
		cin>>code;
		codeindex=-1;
		for(int i=0;i<150;++i)
		{
			if(codelist[i]==code){
					codeindex=i;
					break;
			}
		
		}
		
		deleteCourse(codelist,namelist,creditlist,semesterlist,code);


case 4:
ViewCourse(codelist,namelist,creditlist,semesterlist);
goto label;
break;

case 5:
	cout<<"enter the details of semester"<<endl;
	cin>>semester;
//ViewSemesterCourses(codelist,namelist,creditlist,semesterlist);
	break;
	case '6':
		{
			cout<<"Enter the name of semester >> ";
            cin>>semester;
            cout<<endl;
            cout<<setw(10)<<left<<"Course Code   "<<setw(30)<<"Name   "<<setw(10)<<left<<"Credit Hours   "<<endl;
            cout<<endl;
            ViewSemesterCourses(codelist,creditlist,semesterlist,namelist,semester);
		}
	
	default:
		cout<<"No such option exist"<<endl;
		goto label;
	}
	}
	label1:
	system ("pause");
	return 0;
}
//function for validity of course code
bool isValidCourseCode(string code){
	if(	(code[0]>='A'&& code[1]<='Z')||(	code[0]>='a'&&code[1]<='z'))
	{
	  if(code[1]>='A'&& code[1]<='Z')
	if(isdigit(code[2]))
	if(isdigit(code[3]))
	if(isdigit(code[4]))

	return 1;}
	else
	return 0;
	
}
//this is to check validity of course name
	bool isValidCourseName(string name){
		int size=sizeof(name);
		if(name!="\0")
		{
			for(int i=0;i<size;++i){
			if((name[i]>='A'&&name[i]<='Z')||name[i]>='a'&&name[i]<='z'){
			
		return false;}
			}
		}
		return true;
		}


//this is to check validity of credit hours

bool isValidCreditHours (int crdhrs){
	if(crdhrs>0&&crdhrs<4)
	return true;
	else return false;
}

//this is to chck validity of semester
 bool isValidSemester(int semester){
 	if(semester>0&&semester<9)
 	return true;
 	else return false;
 }

//function to Add course
void AddCourse(string codeList[], string nameList[] , int crdHrsList[], int semList[],
               string  code, string name, int crdhrs, int semester){
               	label1:
               		if(isValidCourseCode(code)==true&&isValidCourseName(name)&&isValidCreditHours(crdhrs)&&isValidSemester(semester))
               	
               	if(isValidCourseCode(code))
               	 if(isValidCourseName(name))
               	 if(isValidCreditHours(crdhrs))
      if(isValidSemester(semester))
       
				   {
				   
               	codeList[index]=code;
               	nameList[index]=name;
               	 crdHrsList[index]=crdhrs;
               	semList[index]  =semester;
               index ++;
               cout<<"the course has been added successfully"<<endl;
             
           }
           else
           cout<<"invalid code"<<endl;
           else
		   cout<<"invalid course"<<endl;
		   else
		   cout<<"invalid credit hours"<<endl;
		   else
		   cout<<"invalid semester"<<endl;}
               	
			   
			   
			   
		//this is to edit the course	   
			   
			void editCourse(string codeList[], string nameList[] , int crdHrsList[], int semList[],
               string  code, string name, int crdhrs, int semester){
               	 if(isValidCourseCode(code))
    if(isValidCreditHours(crdhrs))
      if(isValidSemester(semester))
        if(isValidCourseName(name))
          {
          	codeList[codeindex]=code;
          	nameList[codeindex]=name;
          	crdHrsList[codeindex]=crdhrs;
          	semList[codeindex]=semester;
          	cout<<"course has been edited successfully"<<endl;
          }
          else
          cout<<"invalid"<<endl;
			   }   
			   
	//this is to delete course		   
			   
		void deleteCourse(string codelist[], string namelist[] , int crdHrsList[], int semList[],
               string  code){
               	//if course is not present
               				   
			if(codeindex==-1)
			{
				cout<<"The course is not found"<<endl;
			}
			else
			{
				index--;
				for(int j=codeindex;j<=index;++j)
				{
					codelist[j]=codelist[j+1];
					namelist[j]=namelist[j+1];
					crdHrsList[j]=crdHrsList[j+1];
					semList[j]=semList[j+1];
					
				}
				cout<<"Course has been deletd successfully"<<endl;
			
			}
			
			   }	   
			   
			   
			   
			   
			 //this is to view course
			    void ViewCourse(string codelist[], string namelist[] , int crdHrsList[], int semList[]){
			    cout<<setw(14)<<left<<"Course Code"<<
      setw(18)<<left<<"Course Name"<<
      setw(16)<<left<<"Credit Hours"<<
      setw(17)<<left<<"Semester"<<endl;
      cout<<endl;
	
// for loop is used so that all courses entered are shown	
for (int i=0;i<index;i++)
      cout<<setw(14)<<left<<codelist[i]<<
      setw(18)<<left<<namelist[i]<<
      setw(16)<<left<<crdHrsList[i]<<
      setw(17)<<left<<semList[i]<<endl;
cout<<endl;

				}
			   
			   
			   
		// this is to view semester wise	   
			   void ViewSemesterCourses(string codelist[],int creditlist[],int semesterlist[],string namelist[],int semester)

{
for(int i=0;i<index;i++)
  if(semester==semesterlist[i])
    cout<<setw(13)<<left<<codelist[i]<<setw(31)<<left<<namelist[i]<<setw(15)<<left<<creditlist[i]<<endl;
    

}
			   
			   
			   
			   
			   
			   
