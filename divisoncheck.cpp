
#include<iostream>
using namespace std;


int Divcheck(int iNo1, int iNo2)
{

 if((iNo1%iNo2)==0)
{    
    return 0;
}
else 
{
    return -1;
}

}

int main()
{
    int iValue1, iValue2,iRet;
   cout<<"Enter number for which u want to check divisiblity:";
   cin>>iValue1;

   cout<<"Enter number to check it is  divisible by Above input or not:";
   cin>>iValue2;
   iRet=Divcheck(iValue1,iValue2);

   if(iRet==0)
   {
    cout<<"The "<<iValue1<<" is divsible by "<<iValue2;
   }

   else
   {
    cout<<"The "<<iValue1<<" is not divsible by "<<iValue2;
   }
}