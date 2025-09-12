// // // // // #include<iostream>
// // // // // using namespace std;
// // // // // int main(){
    
// // // // //     string name;
// // // // //     int roll_no;
// // // // //     float per;
// // // // //     string grade;
    
// // // // // cout<<"ENTER  ROLL NO: "<<endl;
// // // // // cin>>roll_no;
// // // // // cout<<"ENTER  NAME: "<<endl;
// // // // // cin.ignore();
// // // // // getline(cin,name);
// // // // // cout<<"ENTER  PERCENTAGE: "<<endl;
// // // // // cin>>per;
// // // // // cout<<"ENTER  GRADE: "<<endl;
// // // // // cin.ignore();
// // // // // getline(cin,grade);

// // // // // cout<<endl;
// // // // // cout<<"STUDENT ROLL NO:"<<roll_no<<endl;

// // // // // cout<<"STUDENT NAME:"<<name<<endl;
// // // // // cout<<"STUDENT PERCENTAGE:"<<per<<endl;
// // // // // cout<<"STUDENT GRADE:"<<grade<<endl;


// // // // //     return 0;
// // // // // }

// // // // // #include<iostream>
// // // // // using namespace std;

// // // // // int main(){
    
// // // // //     int num1,num2;
// // // // //     int sum,product;
// // // // //     float average;
// // // // //     cout<<"ENTER FIRST NUMBER: "<<endl;
// // // // //     cin>>num1;
// // // // //     cout<<"ENTER SECOND NUMBER: "<<endl;
// // // // //     cin>>num2;


// // // // //      sum=num1+num2;


// // // // //      product=num1*num2;


// // // // //      average=(num1+num2) / 2.0;

// // // // //      cout<<"SUM = "<<sum<<endl;
// // // // //      cout<<"PRODUCT = "<<product<<endl;
// // // // //      cout<<"AVERAGE = "<<average<<endl;
    


// // // // //     return 0;
// // // // // }

// // // // // #include<iostream>
// // // // // using namespace std;
// // // // // int main(){
// // // // //     int num;
// // // // // cout<<"PLEASE ENTER ANY NUMBER AND CHECK EVEN OR ODD:"<<endl;
// // // // // cin>>num;


// // // // // if (num%2==0)
// // // // // {
// // // // //     cout<<num<< " is even "<<endl;
// // // // // }
// // // // // else
// // // // // {
// // // // //     cout<<num<< " is odd "<<endl;
// // // // // }



// // // // //     return 0;
// // // // // }

// // // // // #include<iostream>
// // // // // using namespace std;
// // // // // int main(){
// // // // //     int marks;
// // // // // cout<<"PLEASE ENTER MARKS BETWEEN 0-100 AND CHECK  PASS AND FAIL:"<<endl;
// // // // // cin>>marks;

// // // // // if (marks>=0 && marks<=100)
// // // // // {
// // // // //     if (marks>=50 )
// // // // //     {
// // // // //          cout<<"STUDENT HAS PASS"<<endl;
// // // // //     }
    
  
// // // // //    else
// // // // //    {
// // // // //     cout<<"STUDENT HAS FAILED"<<endl;
// // // // //    }
   
// // // // // }

// // // // // else
// // // // // {
// // // // //     cout<<"SORRY PLEASE ENTER NUMBER BETWEEN 0-100  ";
// // // // // }




// // // // //     return 0;
// // // // // }


// // // // // #include<iostream>
// // // // // using namespace std;
// // // // // int main(){

// // // // //     int num1,num2,num3;
// // // // //     cout<<"ENTER ANY NUMBER AND CHECK WHICH NUMBER IS LARGEST NUMBER "<<endl;
// // // // //   cin>>num1>>num2>>num3;
// // // // //     if (num1>num2&& num1>num3)
// // // // //     {
// // // // //         cout<<num1<<" IS LARGEST NUMBER "<<endl;
// // // // //     }

// // // // //     else if (num2>num1&&num2>>num3)
// // // // //     {
// // // // //         cout<<num2<<" IS LARGEST NUMBER "<<endl;
// // // // //     }

// // // // //     else if (num3>num1&&num3>>num2)
// // // // //     {
// // // // //         cout<<num3<<" IS LARGEST NUMBER "<<endl;
// // // // //     }

    
    

// // // // //     return 0;
// // // // // }

// // // // #include<iostream>
// // // // using namespace std;
// // // // int main(){

// // // //     int num;
// // // //     bool isprime=true;
// // // // cout<<"ENTER NUMBER"<<endl;
// // // //     cin>>num;

// // // //     if (num<=1)
// // // //     {
// // // //         isprime=false;
// // // //     }
// // // //     else
// // // //     {
// // // //         for (int i=2;i<=num/2;i++)
// // // //     {
// // // //         if (num%i==0)
// // // //         {
// // // //           isprime=false;
// // // //           break;
// // // //         }
        
// // // //     }
    
// // // //     }
// // // //     if (isprime)
// // // //     {
// // // //         cout<<num<< " THIS NUMBER IS PRIME "<<endl;
// // // //     }
    
// // // //     else
// // // //     {
// // // //         cout<<num<< " THIS NUMBER IS NOT PRIME "<<endl;
// // // //     }
    
    
    

// // // //     return 0;
// // // // }

// // // #include<iostream>
// // // using namespace std;
// // // int main (){
// // // int num;
// // // bool isprime = true;
// // // cout<<" ENTER ANY NUMBER AND CHECK WHICH NUMBER IS PRIME OR NOT ";
// // // cin>>num;


// // // if (num<=1)
// // // {
// // //    isprime = false;
// // // }

// // // else
// // // {
// // //     for (int i = 2; i <=num/2 ; i++)
// // //     {
// // //        if (num%i==0)
// // //        {
// // //         isprime=false;
// // //         break;
// // //        }
       
// // //     }
    
// // // }
// // // if (isprime)
// // // {
// // //     cout<<num << " THIS IS PRIME NUMBER ";
// // // }
// // // else
// // // {
// // //     cout<<num << " THIS IS NOT PRIME NUMBER ";
// // // }

// // //     return 0;
// // // }

// // // #include<iostream> 
// // // using namespace std;
// // // int main(){

// // //     int arr[5];
// // //      int sum=0;
// // //     int *ptr=arr;
// // //     for (int i = 0; i < 5; i++)
// // //     {
// // //        cin>>arr[i];
// // //        sum+=arr[i];
// // //     }


// // //     for (int i = 0; i < 5; i++)
// // //     {
// // //        cout<<ptr[i]<<endl;
// // //     }
// // //     cout<<"sum of number: "<<sum<<endl;



// // //     return 0;
// // // }

// // #include<iostream> 
// // using namespace std;
// // int main(){

// //     int arr[10];
// //      int *ptr=arr;
     
// //     for (int i = 0; i < 10; i++)
// //     {
// //         cin>>*(ptr+i);
// //     }
// //     int largest=*ptr;

// // for (int i = 1; i < 10; i++)
// // {
// //     if (*(ptr+i)>largest)
// //     {
// //        largest=*(ptr+i);
// //     }
    
// // }
// // int smallest=*ptr;
// // for (int i = 1; i < 10; i++)
// // {
// //     if (*(ptr+i)<smallest)
// //     {
// //        smallest=*(ptr+i);
// //     }
    
// // }
// // cout<<"LARGEST VALUE "<<largest<<endl;
// // cout<<"SMALLEST VALUE "<<smallest;


// //     return 0;
// // }

// // #include<iostream>
// // using namespace std;
// // int main(){


// //     string name="haris";
   
    

// // for (int i = name.length()-1; i >= 0; i--)
// // {
// //  cout<<name[i];
// // }

    

// //     return 0;
// // }

// // #include<iostream>
// // using namespace std;
// // int main(){


// //     int arr[10];
// //    int *ptr=arr;
// //    cout<<"PLEASE ENTER 10 NUMBER AND CHECK EVEN OR ODD "<<endl;
// //     for (int i = 0; i < 10; i++)
// //     {
// //         cin>>*(ptr+i);
// //     }
// //     cout<<"ALL NUMBER ARE  SHOW EVEN OR ODD "<<endl;
// //     for (int i = 0; i < 10; i++)
// //     {
// //        if (*(ptr+i)%2==0)
// //        {
// //         cout<<*(ptr+i)<< " EVEN NUMBER "<<endl;
// //        }
// //        else
// //        {
// //         cout<<*(ptr+i)<< " ODD NUMBER "<<endl;
// //        }
       
// //     }
    

// //     return 0;
// // }

// // #include<iostream>
// // using namespace std;
// // int main(){
// // int arr[10];
// // int *ptr=arr;
// // cout<<"enter 10 value "<<endl;

// // for (int i = 0; i < 10; i++)
// // {
// //     cin>>*(ptr+i);
// // }
// // int largest=*ptr;
// // for (int i = 0; i < 10; i++)
// // {
// //     if (*(ptr+i)>largest)
// //     {
// //         largest=*(ptr+i);
// //     }
    
// // }

// //   int smallest=*ptr;
  
// //   for (int i = 0; i < 10; i++)
// // {
// //     if (*(ptr+i)<smallest)
// //     {
// //         smallest=*(ptr+i);
// //     }
    
// // }  
// // cout<<largest<< " LARGEST VALUE "<<endl;
// // cout<<smallest<< " SMALLEST VALUE "<<endl;
// //     return 0;
// // }

// // #include<iostream>
// // using namespace std;
// // int main(){
// // int arr[5];
// // cout<<"enter 5 number"<<endl;
// // for (int i = 0; i < 5; i++)
// // {
// //     cin>>arr[i];
// // }

// // int index;
// // cout<<"ENTER THE INDEX "<<endl;
// // cin>>index;


// // cout<<"which index you want to print "<<index<< " : "<<arr[index];

// //     return 0;
// // }

// // #include<iostream>
// // using namespace std;
// // void counter(){
// // static int count=0;
// // count++;
// // cout<<"THIS IS STATIC COUNT "<<count<<endl;

// // }

// // int main(){
// // counter();
// // counter();
// // counter();

// //     return 0;
// // }

// // #include<iostream>
// // using namespace std;

// // void addnumber(int n,bool lastcall=false){
// //     static int count=0;
// //     static int sum=0;
// //     count++;
// //     sum+=n;

// //     cout<<"CURRENT SUM "<<sum<<endl;
    

// // if (lastcall)
// // {
// //     cout<<"FINAL ANSWER "<<sum/float(count);
// // }


// // }
// // int main(){
// // addnumber(5);
// // addnumber(10);
// // addnumber(15,true);

// //     return 0;
// // }


// #include<iostream>
// using namespace std;
// class person{
//     public:
// //this is only inheritance concept
// };

// class student:public person{
//     public:
// int marks[5];
// static int  count;
// void setdata(){
//     int total=0;
//  int  average=0;
    
//     count++;
// cout<<"ENTER MARKS FOR STUDENT "<<count<<endl;
// for (int i = 0; i < 5; i++)
// {
//     cin>>marks[i];
//     total+=marks[i];
    

// }
// average=total/5.0;
// cout<<"Total "<<total<< "," <<" Average " <<average<<endl;
// cout<<"Total Student: "<<count;
// }


// };
// int student::count=0;

// int main(){

// student obj,obj1;
// obj.setdata();
// obj1.setdata();


//     return 0;
// }

#include<iostream>
using namespace std;
int main(){
    int n;
cout<<"Enter number of students:";
    cin>>n;

    string name[n];
    int marks[n][3];
    int total[n];
    float average[n];
    string grade[n];

    for (int i = 0; i < n; i++)
    {
        cout<<"Enter name of student "<<i+1<< " :";
        cin>>name[i];
        cout<<"Enter 3 subject marks for " <<name[i]<<" :";
         total[i]=0;
        for (int j = 0; j < 3; j++)
        {
           cin>>marks[i][j];
           total[i]+=marks[i][j];
           
        }
        average[i]=total[i]/3.0;
        if (average[i]>=80)
        {
            grade[i]="A";
        }
        else if (average[i]>=60)
        {
            grade[i]="B";
        }
        else if (average[i]>=50)
        {
            grade[i]="C";
        }
        else 
        {
            grade[i]="Fail";
        }
    }
cout << "\n===== Students Record =====\n";
    for (int i = 0; i < n; i++)
    {
        cout<<"Student "<<" : "<<name[i];
        cout<<endl;
        cout<<"Marks ";
        for (int j = 0; j < 3; j++)
        {
           cout<<marks[i][j]<< " ";

        }
        cout<<endl;
        cout<<"Total: "<<total[i]<<endl;
        cout<<"Average: "<<average[i]<<endl;
        cout<<"Grade: "<<grade[i]<<endl;
        cout << "\n----------------\n";
    }
    



    return 0;
}