#include<iostream>
using namespace std;
class Marks
{
private:
int i,j,numbers;
int list[4][4];
public:
Marks()
{
i=1;
j=1;
}
int grade_set()
{

for(i=1;i<4;i++)
 {
 for(j=1;j<4;j++)
     {
      cout<<"enter the student "<<i<<" marks : ";
      cin>>numbers;
      if (numbers>100 || numbers<0)
     {
      cout<<"enter valid marks"<<endl;
      j--;
     }

   else
     {
      list[i][j]=numbers;
     }
 }
 }
}
int avg(int m)
{
int average=0,total=0;
 for (j=1;j<4;j++)
  {
      total +=list[m][j];
  }
average=total/3;
return average;
}


void show_grades()
{
for (i=1;i<4;i++)
{
cout<<"student "<<i<<" marks:"<<endl;
  for (j=1;j<4;j++)
   {
cout<<" | "<<list[i][j];
   }
   cout << '\n';
}
}
};
int main()
{
int avrg=0;
Marks obj1;
obj1.grade_set();
obj1.show_grades();
cout<<"Enter the number of student to check its average : ";
cin>>avrg;
cout<<obj1.avg(avrg)<<endl;



return 0;
}
