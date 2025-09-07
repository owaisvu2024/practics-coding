#include <iostream>
using namespace std;
class employee{
int id;
string name;
int salary;
string post;
string madical;
public:
void setdata(int i,string n,int s,string p,string m){
id=i;
salary=s;
name=n;
post=p;
madical=m;

}
void getdata(){
cout<<"EMPLOYEE ID: "<<id<<endl;
cout<<"NAME: "<<name<<endl;
cout<<"SALARY: "<<salary<<endl;
cout<<"POST: "<<post<<endl;
cout<<"MADICAL: "<<madical<<endl;


}

};

int main(){
employee obj,obj1;
obj.setdata(1,"HARRY",50000,"SOFTWARE ENGINEER","AGAHA KHAN HOSPITAL");
obj.getdata();
cout<<endl;
obj1.setdata(2,"AZAM",60000,"SOFTWARE ENGINEER","AGAHA KHAN HOSPITAL");
obj1.getdata();

    return 0;
}