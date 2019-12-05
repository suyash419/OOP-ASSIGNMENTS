#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    string str;
    fstream file; //object of file stream
    file.open("file.txt",ios::out); // creation of 'myfile.txt'
    if(!file)
    {
        cout<<"File not found"<<endl;
        return 0;
    }
    cout<<"File 'file.txt' is created.\nEnter your Text\n";
    getline(cin,str);
    file<<str;
    file.close(); // to close the text file
    file.open("file.txt",ios::in); //to open the text file
    if(!file)
    {
        cout<<"File not found"<<endl;
        return 0;
    }
    cout<<"\nInformation from 'file.txt' is : \n";
    while(!file.eof())
    {
        file>>str;
        cout<<str<<endl;
    }
    file.close();;
return 0;
}


