#include<iostream>
using namespace std;
int Divison(int iNo1,int iNo2)
{
  int Ans=0;

if(iNo2>iNo1)
{
  return -1;
}
Ans=iNo1/iNo2;
return Ans;
}

int main ()
{
  int iValue1,iValue2,iRet;
  cout<<"enter fist number";
  cin>>iValue1;
  cout<<"Enter second number";
  cin>>iValue2;

  iRet=Divison(iValue1,iValue2);

  cout<<"Your Divison is"<<iRet;
    return 0;
}