#include<iostream>
using namespace std;
int main(){

int roll[5];
string name[5];
int marks[5];
char grade[5];


for (int i = 0; i < 5; i++)
{
   cout<<"ENTER STUDENT ROLL NO: "<<endl;
   cin>>roll[i];
   cout<<"ENTER STUDENT NAME : "<<endl;
   cin>>name[i];
   cout<<"ENTER STUDENT MARKS: "<<endl;
   cin>>marks[i];
   cout<<"ENTER STUDENT GRADE: "<<endl;
   cin>>grade[i];
}

for (int i = 0; i < 5; i++)
{
   cout<<"STUDENT NO: "<<i+1<<endl;

   cout<<"**************************** "<<endl;
   cout<<"ROLL NO: "<<roll[i]<<endl;
   cout<<"NAME: "<<name[i]<<endl;
   cout<<"TOTAL MARKS 500 OUT OF : "<<marks[i]<<endl;
   cout<<"GRADE: "<<roll[i]<<endl;
   cout<<"**************************** "<<endl<<endl;
   
}


return 0;

}