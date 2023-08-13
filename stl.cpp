#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
int main()
{
    vector <int>v1;
    vector <int>v2;
    int n1,n2,value=0,y1,y2;
   cout<<"Enter the size for vector 1: ";
    cin>>n1;
    y1=n1-1;
    cout<<"The first vector : ";
    for(int i=0; i<n1; i++)   // getting the vector 1.
    {
        cin>>value;
        v1.push_back(value);
    }
    cout<<endl;
    cout<<"Enter the size for vector 2: ";
    cin>>n2;
    y2=n2-1;
    cout<<"The second vector value: ";
    for(int i=0; i<n2; i++)  // getting  the vector 2.
    {
        cin>>value;
        v2.push_back(value);
    }
    cout<<endl;
cout<<"Users first vector is: "<<endl;

    for(int i=0; i<n1; i++)  // printing the vector 1.
    {
        cout<<v1[i]<<"  ";

    }
    cout<<endl;

    cout<<"Users second vector is: "<<endl;

    for(int i=0; i<n2; i++)   // printing the vector 2.
    {
        cout<<v2[i]<<"  ";

    }
    cout<<endl;
   cout<<"The size of the vector 1: "<<v1.size()<<endl;       //size of vector 1.
    cout<<"The size of the vector 2: "<<v2.size()<<endl;      //size of vector 2.
    cout<<"The 1st value of vector 1: "<<v1.front()<<endl; //front value of vector 1.
    cout<<"The 1st value of vector 2: "<<v2.front()<<endl;//front value of vector 2.
    cout<<"The last value of vector 1: "<<v1.back()<<endl; //last value of vector 1.
    cout<<"The last value of vector 2: "<<v2.back()<<endl;//last value of vector 2.

//inserting value in vector 1
string ch1;
cout<<"User want to insert value in vector 1 yes or no: ";
cin>>ch1;
cout<<endl;
int x1,ind1,in1;
if(ch1=="yes"||ch1=="YES"||ch1=="Yes"||ch1=="y"){
        cout<<"index of vector 1 is 0(zero) to "<<y1<<endl;
cout<<"Enter the number user want to add: ";
cin>>in1;
    cout<<"Enter how many time user want to enter : ";
    cin>>x1;
    cout<<"Enter the index value : ";
    cin>>ind1;
cout<<"After inserting the vector 1 is :"<<endl;
        v1.insert(v1.begin()+ind1,x1,in1);
    for(int i=0; i<v1.size(); i++)
   {

       cout<<v1[i]<<" ";
   }
    cout<<endl;}
    else{

        cout<<"user don't want to change it ."<<endl;
        cout<<endl;
    }

//inserting value in vector 2

string ch2;
cout<<"User want to insert value in vector 2 yes or no: ";
cin>>ch2;
cout<<endl;
int x2,ind2,in2;
if(ch2=="yes"||ch2=="YES"||ch2=="Yes"||ch2=="y"){
      cout<<"index number  vector 2: 0(zero) to "<<y2<<endl;
cout<<"Enter the number user want to add: ";
cin>>in2;
    cout<<"Enter how many time want user want to enter this value: ";
    cin>>x2;
    cout<<"Enter the index value :  ";
    cin>>ind2;
cout<<"After inserting the vector 2 is :"<<endl;
        v2.insert(v2.begin()+ind2,x2,in2);
    for(int i=0; i<v2.size(); i++)
   {

       cout<<v2[i]<<" ";
   }
    cout<<endl;}
    else{

        cout<<"user don't want to change it ."<<endl;
        cout<<endl;
    }
//sorting in ascending order
cout<<"*********After sorting in ascending order!!***********"<<endl;
 sort(v1.begin(),v1.end());
    cout<<"After sorting in ascending order the First vectors value are: ";
    for(int i=0; i<v1.size(); i++)
    {
cout<<v1[i]<<" ";
       }
   cout<<endl;
    sort(v2.begin(),v2.end());
    cout<<"After sorting in ascending order  the second vectors value are: ";
    for(int i=0; i<v2.size(); i++)
    {

        cout<<v2[i]<<" ";
   }
   cout<<endl;

//sorting in descending order
//in vector 1

cout<<"*********After sorting in descending order!!***********"<<endl;
reverse(v1.begin(),v1.end());
cout<<"After sorting in descending order  the first vectors value are: ";
    for(int i=0; i<v1.size(); i++)
    {

        cout<<v1[i]<<" ";
   }
   cout<<endl;


//in vector 2
reverse(v2.begin(),v2.end());
cout<<"After sorting in descending order  the 2nd vectors value are: ";
    for(int i=0; i<v2.size(); i++)
    {

        cout<<v2[i]<<" ";
   }
   cout<<endl;
   //swapping
   swap(v1,v2);
 cout<<"*******After swapping !!!!*******" <<endl;
 cout<<"Then the 1st vector is : ";
  for(int i=0; i<v1.size(); i++)
    {

        cout<<v1[i]<<" ";
   }
   cout<<endl;
   cout<<"Then the 2nd vector is : ";
  for(int i=0; i<v2.size(); i++)
    {

        cout<<v2[i]<<" ";
   }
   cout<<endl;
   getch();
}


