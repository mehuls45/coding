#include <iostream>

using namespace std;

class orange
{
    int num,y,temp,a,boss,fact=1,sum=0,i;

public:

    void perfect()
    {
      cout<<"Enter a number: "<<endl;
      cin>>num;

      y=num;

      while(y!=0)
      {
       temp=y;
       a=temp%10;
       y=temp/10;

       boss=a;

       for(i=1;i<=boss;i++)
       {
           fact=fact*i;
       }
       sum=sum+fact;
       fact=1;
      }

      if(sum==num)
      {
          cout<<"Strong number!";
      }
      else
      {
        cout<<"Not a strong number!";
      }

    }


};

int main()
{
    orange horse;
    horse.perfect();
}
