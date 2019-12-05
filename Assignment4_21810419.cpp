#include<iostream>
using namespace std;
template <class T>
class sorting
{
private:
    T arr[50];
    T temp,r;
public:
T fun_sort()
{
    int i,n,j;
    cout<<"Enter no. of elements : ";
    cin>>n;
    cout<<"Enter elements : ";
    for(i=0;i<n;i++) // for accepting
    {
        cin>>arr[i];
    }
    for(i=0;i<n;i++) //for sorting
    {
        int  midindex=i;
        for(j=i+1;j<n;j++)
        {
           if(arr[j]<arr[midindex])
           {
           midindex=j;
           }
        }
        temp=arr[i];
        arr[i]=arr[midindex];
        arr[midindex]=temp;
    }
    cout<<"Sorted array : \n";
    for (i=0;i<n;i++) //for displaying
    {
        cout<<arr[i]<<"\t";
    }
    cout<<endl;
    return r;
}
};
int main()
 {
     sorting<int>s1;
     sorting<float>s2;
     cout<<"Integer Sorting"<<endl;
     s1.fun_sort();
     cout<<"Float Sorting"<<endl;
     s2.fun_sort();
     return 0;
 }



