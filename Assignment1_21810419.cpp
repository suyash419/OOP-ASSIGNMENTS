#include<iostream>
using namespace std;
class database
{
        private:
                int roll,d,m,y,cla,dri;
                string name,div,blo,add;
                long long tele;
        public:
                int com()
                {
                        return roll;
                };
                database()
                {
                        roll=00;
                        d=00;
                        m=00;
                        y=0000;
                        cla=00;
                        tele=000000000;
                        div="A";
                };
                void scan()
                {
                        int i=0;
                        r:
                        cout<<"Enter Roll number: ";
                        cin>>roll;
                        if(roll<=0)
                        {
                        cout<<"Invalid roll number\nPlease Enter it again.\n";
                        goto r;
                        }
                        cout<<endl;
                        cout<<"Enter Name: ";
                        cin.ignore();
                        getline(cin,name);
                        cout<<endl;
                        c:
                        cout<<"Enter Class: ";
                        cin>>cla;
                        if(cla>12||cla<1)
                        {
                        cout<<"Invalid Class\nPlease Enter it again\n";
                        goto c;
                        }
                        cout<<endl;
                        cout<<"Enter Division: ";
                        cin>>div;
                        cout<<endl;
                        v:
                        cout<<"Enter Date of Birth (eg: dd mm yyyy): ";
                        cin>>d>>m>>y;
                        if(d>31||d<1||m<1||m>12||y>2019||y<1900)
                        {
                        cout<<"Invalid DOB\nPlease Enter again\n";
                        goto v;
                        }
                        cout<<endl;
                        cout<<"Enter Address:\n";
                        cin.ignore();
                        getline(cin,add);
                        cout<<endl;
                        y:
                        cout<<"Enter 10 digit Telephone number: ";
                        cin>>tele;
                        if(tele>9999999999||tele<100000000)
                        {
                        cout<<"Invalid Telephone Number\nEnter a Valid 10 digit number.\n\n";
                        goto y;
                        }
                        cout<<endl;
                        p:
                        cout<<"Select Blood Group:\n1. A+\n2. A-\n3. B+\n4. B-\n5. O+\n6. O-\n7. AB+\n8. AB-\n";
                        cin>>i;
                        switch(i)
                        {
                                case 1:
                                        blo="A+";
                                        break;
                                case 2:
                                        blo="A-";
                                        break;
                                case 3:
                                        blo="B+";
                                        break;
                                case 4:
                                        blo="B-";
                                        break;
                                case 5:
                                        blo="O+";
                                        break;
                                case 6:
                                        blo="O-";
                                        break;
                                case 7:
                                        blo="AB+";
                                        break;
                                case 8:
                                        blo="AB-";
                                        break;
                                default:
                                        cout<<"Invalid Selection\n";
                                        goto p;
                        };
                }
                void disp()
                {
                        cout<<"Name: \t"<<name<<endl;
                        cout<<"Roll no.: \t"<<roll<<endl;
                        cout<<"Class: \t"<<cla<<endl;
                        cout<<"Division: \t"<<div<<endl;
                        cout<<"Date of birth: \t"<<d<<"/"<<m<<"/"<<y<<endl;
                        cout<<"Address: \t"<<add<<endl;
                        cout<<"Telephone number: \t"<<tele<<endl;
                        cout<<"Blood Group: \t"<<blo<<endl;
                }
};
int main()
{
        int num=0,k=0,j;
        cout<<"HELLO\nHow many students are there in the School: ";
        cin>>num;
        database obj[10];
        database temp;
        for(j=0;j<num;j++)
        {
                obj[j].scan();
        }
        while(k!=6)
        {
        w:
        cout<<"Select: \n1. Display all Records\n2. Display record of an individual student\n3. Delete a record\n4. Edit details\n5. Add more students\n6. Exit\n";
        cin>>k;
        switch(k)
        {
        case 1:
        cout<<"All students records :\n";
        for(j=0;j<num;j++)
        {
                cout<<"Student "<<j+1<<endl;
                obj[j].disp();
                cout<<"********************************************\n";
        }
        break;
        case 2:
        int t,q;
        cout<<"Enter Student Roll number: ";
        cin>>q;
        for(j=0;j<num;j++)
        {
        t=obj[j].com();
        if(t==q)
        {
        cout<<endl;
                obj[j].disp();
                cout<<"********************************************\n";
                break;
        }
}
        break;
        case 3:
                int r,l;
                cout<<"Enter the roll number of the student :";
                cin>>r;
                for(j=0;j<num;j++)
                {
                    if(obj[j].com()==r)
                    {
                        for(l=j;l<num;l++)
                        {
                            obj[j]=obj[j+1];
                        }
                        num--;
                    }
                }
        break;
        case 4:
        int edit,index;
        cout<<"Enter the roll number of the student you wish to edit: ";
        cin>>edit;
         for(j=0;j<num;j++)
        {
        index=obj[j].com();
        if(index==edit)
        {
        obj[j].scan();
        break;
        }
        }
        break;
        case 5:
        int add;
        cout<<"How many students do you wish to add?\n";
        cin>>add;
         for(j=0;j<add;j++)
        {
        obj[num+add].scan();
        }
        num=num+add;
        break;
        case 6:
                cout<<"Exit...\n\n\n";
                break;
        default:
        cout<<"Invalid Selection\n";
        goto w;
        }
        }
        return 0;
}

