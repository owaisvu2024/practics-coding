#include <iostream> 
using namespace std;
int main (){
system("cls");
    int a,b;
    string ope;
    
cout<<"****** THIS IS SIMPLE CALULATOR ONLY ADD FUNCTION AVAILABLE IN THIS PROGRAM ********"<<endl<<endl;

cout<<"PLEAS ENTER FIRST NO: "<<endl;
cin>>a;
cout<<"PLEAS ENTER OPERATER: "<<endl;
cin>>ope;
cout<<"PLEAS ENTER SECOND NO: "<<endl;
cin>>b;
if (ope == "+")
{
   cout<<a<< " + " << b << " = " <<a+b;
}

else if (ope == "-")
{
   cout<<a<< " - " << b << " = " <<a-b;
}

else if (ope == "*")
{
   cout<<a<< " * " << b << " = " <<a*b;
}

else if (ope == "/")
{
   cout<<a<< " / " << b << " = " <<a/b;
}
    
    return 0;
}