#include<iostream>
#include<vector>
using namespace std;
int main(int argc, char const *argv[])
{
    vector<int>v;
    int i,n,sw=1,temp;
    cout<<"\nEnter the size of the vector : ";
    cin>>n;
    cout<<"\nEnter the elements of the vector : ";
    for (i = 0; i < n; ++i)
    {
        cin>>temp;
        v.push_back(temp);
    }
    while(sw!=0)
    {
    cout<<"\nSelect : \n1.Modify\n2.Multiply\n3.Display\n4.Exit\n";
    cin>>sw;
    switch(sw)
    {
        case 1:
            int pos,e;
            cout<<"Enter postion(starts from 0) to modify : ";
            cin>>pos;
            if(pos<n)
            {
                cout<<"Enter the new element : ";
                cin>>e;
                v[pos] = e;
            }
            else
            {
                cout<<"\nInvalid Position!";
            }
            break;
        case 2:
        {
            int s;
            cout<<"\nEnter a scalar value : ";
            cin>>s;
            for(i = 0; i < v.size(); i++)
            {
                v[i] = v[i] * s;
            }
            break;
        }
        case 3:
            for(auto &i:v)
            {
                cout<<i<<",";
            }
            break;
        case 4:
            exit(0);
            break;
        default:
            cout<<"Enter a valid option.\n";
            break;
    }
}
    return 0;
}

