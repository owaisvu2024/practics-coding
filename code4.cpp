#include<iostream>
using namespace std;
int main(){
    
    string name;
    int roll_no;
    float per;
    string grade;
    
cout<<"ENTER  ROLL NO: "<<endl;
cin>>roll_no;
cout<<"ENTER  NAME: "<<endl;
cin.ignore();
getline(cin,name);
cout<<"ENTER  PERCENTAGE: "<<endl;
cin>>per;
cout<<"ENTER  GRADE: "<<endl;
cin.ignore();
getline(cin,grade);

cout<<endl;
cout<<"STUDENT ROLL NO:"<<roll_no<<endl;

cout<<"STUDENT NAME:"<<name<<endl;
cout<<"STUDENT PERCENTAGE:"<<per<<endl;
cout<<"STUDENT GRADE:"<<grade<<endl;


    return 0;
}

#include<iostream>
using namespace std;

int main(){
    
    int num1,num2;
    int sum,product;
    float average;
    cout<<"ENTER FIRST NUMBER: "<<endl;
    cin>>num1;
    cout<<"ENTER SECOND NUMBER: "<<endl;
    cin>>num2;


     sum=num1+num2;


     product=num1*num2;


     average=(num1+num2) / 2.0;

     cout<<"SUM = "<<sum<<endl;
     cout<<"PRODUCT = "<<product<<endl;
     cout<<"AVERAGE = "<<average<<endl;
    


    return 0;
}

#include<iostream>
using namespace std;
int main(){
    int num;
cout<<"PLEASE ENTER ANY NUMBER AND CHECK EVEN OR ODD:"<<endl;
cin>>num;


if (num%2==0)
{
    cout<<num<< " is even "<<endl;
}
else
{
    cout<<num<< " is odd "<<endl;
}



    return 0;
}

#include<iostream>
using namespace std;
int main(){
    int marks;
cout<<"PLEASE ENTER MARKS BETWEEN 0-100 AND CHECK  PASS AND FAIL:"<<endl;
cin>>marks;

if (marks>=0 && marks<=100)
{
    if (marks>=50 )
    {
         cout<<"STUDENT HAS PASS"<<endl;
    }
    
  
   else
   {
    cout<<"STUDENT HAS FAILED"<<endl;
   }
   
}

else
{
    cout<<"SORRY PLEASE ENTER NUMBER BETWEEN 0-100  ";
}




    return 0;
}