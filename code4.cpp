// // // // #include<iostream>
// // // // using namespace std;
// // // // int main(){
// // // // int roll_no;
// // // // string name;

// // // // int sub1,sub2,sub3;
// // // // int total;
// // // // int maximum=300;
// // // // float percentage;
// // // // string grade;
// // // // string per;

// // // // cout<<"ENTER THE ROLL NO: ";
// // // // cin>>roll_no;
// // // // cout<<"ENTER THE NAME: ";
// // // // cin>>name;
// // // // cout<<"ENTER THE SUB1: ";
// // // // cin>>sub1;
// // // // cout<<"ENTER THE SUB2: ";
// // // // cin>>sub2;
// // // // cout<<"ENTER THE SUB3: ";
// // // // cin>>sub3;

// // // // total=sub1+sub2+sub3;
// // // // percentage=(total*100.0)/maximum;

// // // // if (percentage>=80)
// // // // {
// // // //     grade="A";
// // // // }
// // // // else if (percentage>=70)
// // // // {
// // // //    grade="B";
// // // // }

// // // // else if (percentage>=60)
// // // // {
// // // //    grade="C";
// // // // }

// // // // else if (percentage>=50)
// // // // {
// // // //    grade="D";
// // // // }
// // // // else
// // // // {
// // // //     grade="FAIL";
// // // // }

// // // // cout<<"STUDENT ROLL NO: "<<roll_no<<endl;
// // // // cout<<"NAME: "<<name<<endl;

// // // // cout<<"PERCENTAGE : "<<percentage<< " % "<<endl;
// // // // cout<<"GRADE "<<grade<<endl;

// // // //     return 0;
// // // // }

// // // // #include<iostream>
// // // // using namespace std;
// // // // int main(){

// // // //     int num;
// // // // cout<<"PLEAS ENTER THE ANY NO AND CHECK EVEN OR ODD "<<endl;
// // // // cin>>num;

// // // // if (num % 2 == 0)
// // // // {
// // // //    cout<<num << " THIS NUMBER IS EVEN " <<endl;
// // // // }
// // // // else
// // // // {
// // // //     cout<<num << " THIS NUMBER IS ODD " <<endl;
// // // // }

// // // //     return 0;
// // // // }

// // // // #include <iostream>
// // // // using namespace std;
// // // // int main(){

// // // //     int num;
// // // //     cout<<"PLEASE ENTER THE ANY NUMBER "<<endl;
// // // //     cin>>num;

// // // //     if (num>0)
// // // //     {
// // // //        cout<<"Positive Number";
// // // //     }
// // // //     else if (num<0)
// // // //     {
// // // //        cout<<"negative Number";
// // // //     }

// // // //     else if (num==0)
// // // //     {
// // // //        cout<<"Number is Zero";
// // // //     }

// // // //     return 0;
// // // // }

// // // // #include <iostream>
// // // // using namespace std;
// // // // int main(){

// // // //     int num1,num2,num3,num4;
// // // //     cout<<"PLEASE ENTER ONLY 4 NUMBER  "<<endl;
// // // //     cin>>num1>>num2>>num3>>num4;

// // // //     if (num1>=num2 && num1>=num3)
// // // //     {
// // // //         cout<<num1 << " THIS IS LARGEST NUMBER "<<endl;
// // // //     }
// // // //     else if (num2>=num1&&num2>=num3)
// // // //     {
// // // //         cout<<num2 << " THIS IS LARGEST NUMBER "<<endl;
// // // //     }

// // // //     else if (num3>=num1&&num3>=num2)
// // // //     {
// // // //         cout<<num3 << " THIS IS LARGEST NUMBER "<<endl;
// // // //     }

// // // //     else
// // // //     {
// // // //         cout<<num4 << " THIS IS LARGEST NUMBER "<<endl;
// // // //     }

// // // //     return 0;
// // // // }

// // #include<iostream>
// // using namespace std;
// // class employee{
// // int id;
// // string name;
// // int salary;

// // public:
// // void setdata(int i,string n,int s){
// // id=i;
// // name=n;
// // salary=s;

// // }

// // void dispaly(){
// // cout<<"EMPLOYEE ID: "<<id<<endl;
// // cout<<"NAME: "<<name<<endl;
// // cout<<"SALARY: "<<salary<<endl;

// // }

// // };
// // int main(){
// // employee obj;
// // employee *ptr;
// //  ptr=&obj;
// // ptr->setdata(12,"HAMZA KHAN",67000);
// // ptr->dispaly();
// // cout<<endl;
// // ptr->setdata(22,"HASIB KHAN",67000);
// // ptr->dispaly();
// // cout<<endl;
// // ptr->setdata(32,"AMIR KHAN",67000);
// // ptr->dispaly();

// //     return 0;
// // }

// // // #include<iostream>
// // // using namespace std;
// // // int main(){
// // // int arr[5];
// // // int *ptr= arr;
// // // for (int i = 0; i < 5; i++)
// // // {
// // //    cin>>*(ptr+i);
// // // }
// // // for (int i = 0; i < 5; i++)
// // // {
// // //     cout<<*(ptr+i)<<" ";
// // // }

// // //     return 0;
// // // }

// #include <iostream>
// using namespace std;

// class PersonalInfo
// {
// private:
//     int id;
//     string name;
//     string phone;

// public:
//     void setpersonal(int i, string n, string p)
//     {
//         id = i;
//         name = n;
//         phone = p;
//     }

//     void showPersonal()
//     {
//         cout << "EMPLOYEE ID: " << id << endl;
//         cout << "NAME: " << name << endl;
//         cout << "PHONE NUMBER: " << phone << endl;
//     }
// };

// class JobInfo
// {
// private:
//     string designation;

//     int basicSalary;

//     int yearJoined;

// public:
//     void setJob(string d, int b, int y)
//     {
//         designation = d;
//         basicSalary = b;
//         yearJoined = y;
//     }

//     void showJob()
//     {
//         cout << "DESTIGNATION: " << designation << endl;
//         cout << "BASICSALARY: " << basicSalary << endl;
//         cout << "YEARJOINED: " << yearJoined << endl;
//     }
//     int getbasicSalary()
//     {
//         return basicSalary;
//     }
// };

// class employee : public PersonalInfo, public JobInfo
// {
// private:
//     int bonus;

// public:
//     void setEmployee(int id, string name, string phone, string designation, int basicSalary, int yearJoind, int bo)
//     {
//         setpersonal(id, name, phone);
//         setJob(designation, basicSalary, yearJoind);
//         bonus = bo;
//     }

//     int calcGrossSalary()
//     {

//         return getbasicSalary() + bonus;
//     }

//     void showEmployee()
//     {
//         showPersonal();
//         showJob();

//         cout << "CALCGROSSSALARY: " << calcGrossSalary() << endl;
//     }
// };
// int main()
// {
//     int n;
//     cout << "PLEASE DEFINE HOW MANY STUDENT DATA ENTER IN THIS PROGRAM " << endl;
//     cin >> n;

//     employee *arr = new employee[n];
//     for (int i = 0; i < n; i++)
//     {
//         int id, basicSalary, bonus, yearJoined;
//         string name, designation, phone;
//         cout << "ENTER ID: " << endl;
//         cin >> id;
//         cout << "ENTER NAME: " << endl;
//         cin >> name;
//         cout << "ENTER PHONE NUMBER: " << endl;
//         cin >> phone;
//         cout << "DESTIGANATION: " << endl;
//         cin >> designation;
//         cout << "ENTER BASICSALARY: " << endl;
//         cin >> basicSalary;
//         cout << "ENTER YEARJOINED: " << endl;
//         cin >> yearJoined;
//         cout << "ENTER BONUS: " << endl;
//         cin >> bonus;

//         arr[i].setEmployee(id, name, phone, designation, basicSalary, yearJoined, bonus);
//     }
//     for (int i = 0; i < n; i++)
//     {
//         cout << "************************************" << endl;
//         arr[i].showEmployee();
//         cout << "************************************" << endl;
//         cout << endl;
//     }

//     return 0;
// }


// #include <iostream>
// using namespace std;
// class person{
// private:
// string name;
// int age;

// public:
// void setPerson(string n,int a){
// name=n;
// age=a;


// }

// void showPerson(){

// cout<<"PERSON NAME:"<<name<<endl;
// cout<<"AGE: "<<age<<endl;

// }
// void virtual_person();

// };
// class Student:public virtual person{
// private:
// int rollNo;
// float cgpa;

// public:
// void setstudent(int r,float c){
// rollNo=r;
// cgpa=c;

// }

// void showstudent(){
// cout<<"ROLL NO: "<<rollNo<<endl;
// cout<<"CGPA: " <<cgpa<<endl;


// }
// };

// class teacher:public virtual person{
// private:
// int empid;
// string subject;

// public:

// void setTeacher(int e,string s){
// empid=e;
// subject=s;


// }

// void showteacher(){
// cout<<"EMPID: "<<empid<<endl;
// cout<<"SUBJECT: "<<subject<<endl;


// }

// };

//     class TeachingAssistant : public Student, public teacher{
//    private:
//    int stipend;

//    public:
//    void setTA(string name,int age,int rollNo,float cgpa,int empid,string subject,int st){
//     setPerson(name,age);
//     setstudent(rollNo,cgpa);
//     setTeacher(empid,subject);
//    stipend=st;


//    }

// void showTA(){

// showPerson();
// showstudent();
// showteacher();
// cout<<"STIPEND: "<<stipend<<endl;

// }
//     };

// int main(){

// TeachingAssistant obj;
// obj.setTA("HAMZA",22,2403,3.45,105,"CS",1200);
// obj.showTA();


//     return 0;
// }

#include<iostream>
using namespace std;
class person{
private:
string name;
int age;

public:
void setPerson(string n,int a){
name=n;
age=a;

}
void showPerson(){
cout<<"NAME: "<<name<<endl;
cout<<"AGE: "<<age<<endl;
    
}

};
class Student:public virtual person{
int rollNo;
float cgpa;

public:

void setStudent(int r,float c){
rollNo=r;
cgpa=c;

}
void showStudent(){
cout<<"ROLL NO: "<<rollNo<<endl;
cout<<"CGPA: "<<cgpa<<endl;


}
};

class Teacher:public virtual person{
int empId;
string subject;

public:

void setTeacher(int e,string su){
empId=e;
subject=su;

}
void showTeacher(){
cout<<"EMP ID: "<<empId<<endl;
cout<<"SUBJECT: "<<subject<<endl;


}
};

class TeachingAssistant : public Student, public Teacher{
int stipend;


public:

void setTA(string name,int age,int rollNo,float cgpa,int empId,string subject,int st){
    setPerson(name,age);
    setStudent(rollNo,cgpa);
    setTeacher(empId,subject);
 stipend=st;

}
void showTA(){
     showPerson();
     showStudent();
     showTeacher();
cout<<"STIPEND: "<<stipend<<endl;



}
};
class EmployeeInfo{
string designation; int basicSalary; string yearJoined;

public:
void setEmployeeInfo(string de,int ba,string ye){
designation=de;
basicSalary=ba;
yearJoined=ye;



}
void showEmployeeInfo(){
cout<<"DESIGNATION: "<<designation<<endl;
cout<<"BASIC SALARY: "<<basicSalary<<endl;
cout<<"YEAR JOINED: "<<yearJoined<<endl;

}

};
class TeachingAssistantEmployee:public TeachingAssistant,public EmployeeInfo  {
int bonus;

public:
void setTeachingAssistantEmployee(string name,int age,int rollNo,float cgpa,int empId,string subject,int stipend
    ,string designation,int basicSalary,string yearJoined,int bo){
setTA(name,age,rollNo,cgpa,empId,subject,stipend);
setEmployeeInfo(designation,basicSalary,yearJoined);
bonus=bo;

}

void showTeachingAssistantEmployee(){
    showTA();
    showEmployeeInfo();
cout<<"BONUS: "<<bonus<<endl;

}

};
int main(){

TeachingAssistantEmployee obj;
obj.setTeachingAssistantEmployee("HAMZA",22,403,3.30,123,"CS",12000,"DEVELOPER",70000,"08-9-2022",40000);
obj.showTeachingAssistantEmployee();


    return 0;
}