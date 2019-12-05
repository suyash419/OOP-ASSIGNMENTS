#include<iostream>
using namespace std;
class error
{
};
int main()
{
    string city;
    string vehicle;
    while(1>0)
    {
    cout<<"\nEnter the name of city where do you live : "<<endl;
    cin>>city;
    try
     {
         if(city=="Mumbai"||city=="Pune"||city=="Bangalore"||city=="Chennai")
         {
             cout<<"\nCity data stored : "<<city<<endl;
         }
         else
         {
            throw error();
         }
     }
     catch(error er)
     {
         cout<<"\nCity is invalid\nEnter any city between Mumbai ,Pune, Banglore and Chennai"<<endl;
     }
    cout<<"\nEnter the type of wheeler: "<<endl;
    cin>>vehicle;
      try
     {
         if(vehicle=="4")
         {
             cout<<"\nRecorded Vehicle : "<<vehicle<<" Wheeler "<<endl;
         }
         else
         {
            throw error();
         }
     }
     catch(error err)
     {
         cout<<"\nVehicle not allowed\n4 Wheelers only accepted\n";
     }
    }
   return 0;
}




