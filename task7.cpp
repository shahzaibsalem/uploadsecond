#include <iostream>
using namespace std;
main()
{
string name;
int matric;
int inter;
float ecat;
float aggregate;
cout<<"Enter name         "<<endl;
cin>> name;
cout<<"enter matric marks "<<endl;
cin>>matric;
cout<<"enter inter marks  "<<endl;
cin>> inter;
cout<<" enter ecat marks  "<<endl;
cin>> ecat;
aggregate=(inter/1100.0*40)+(matric/1100.0*10)+(ecat/400.0*50);
cout<<"your merit is"<<aggregate;
}