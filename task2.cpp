#include <iostream>
using namespace std;

class Date {
private:
  int Year;
  int Month;
  int Day;
  string Months[12] = {"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};
  string Days[7] = {"Sun","Mon","Tue","Wed","Thu","Fri","Sat"};
  int Days_in_Months[12] = {31,28,31,30,31,30,31,31,30,31,30,31};

public:
  Date(int y,int m,int d){
      Year = y;
      Month = m;
      Day = d;
  }

bool isValidDate(int y,int m,int d)
{
  if(Month>0 && Month<13 && Day<=Days_in_Months[Month-1])
      return 1;
  else
      return 0;
}

int getDayOfWeek()
{
  return Day%7;
}

void setDate(int y,int m, int d)
{
  Year = y;
  Month = m;
  Day = d;
}

int getYear()
{
  return Year;
}

int getMonth()
{
  return Month;
}

int getDay()
{
  return Day;
}

void print()
{
  cout<<"Date : "<<Day<<"/"<<Month<<"/"<<Year<<endl;
}


};


int main(int argc, char const *argv[]) {

int y,m,d;
Date date(2018,11,18);

cout<<"Enter your year : ";
cin>>y;
cout<<endl;
cout<<"Enter your month : ";
cin>>m;
cout<<endl;
cout<<"Enter your day : ";
cin>>d;
cout<<endl;

int DATE = date.isValidDate(y,m,d);
    if(DATE==1)
    {
      cout<<"Valid Date"<<endl;
    }
    else if(DATE==0)
    {
      cout<<"Invalid Date"<<endl;
    }

    date.setDate(y,m,d);
    cout<<"Year : "<<date.getYear()<<endl;
    cout<<"Month : "<<date.getMonth()<<endl;
    cout<<"Day : "<<date.getDay()<<endl;
    cout<<"Day Of Week : "<<date.getDayOfWeek()<<endl;
    date.print();




  return 0;
}
