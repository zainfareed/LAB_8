#include<iostream>
using namespace std;
class marks
{
private:
int i,j,list[4][4],numbers;
public:
marks()
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
      cout<<"enter the student "<<i<<" marks"<<endl;
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


int show_grades()
{
for (i=1;i<4;i++)
{
cout<<"student "<<i<<" marks:"<<endl;
  for (j=1;j<4;j++)
   {
cout<<list[i][j]<<endl;
   }
}
}
};
int main()
{
int ag=0;
marks obj1;
obj1.grade_set();
obj1.show_grades();
cout<<"enter the number of student to check its average"<<endl;
cin>>ag;
cout<<obj1.avg(ag)<<endl;
//return 0;
}
