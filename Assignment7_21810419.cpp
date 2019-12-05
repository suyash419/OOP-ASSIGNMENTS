#include <iostream>
#include <list>
#include <iterator>
using namespace std;
int main()
{
    list <int> l;
    list <int> :: iterator it;
    int n,i,pos;
    cout << "Enter number of elements in list :\n";
    cin >> n;
    int temp;
    cout << "Enter the elements of list :\n";
    for (i = 0; i < n; i++)
    {
        cin >> temp;
        l.push_back(temp);
    }
    int sw=0;
    while (sw != 8)
    {
        cout << "\nEnter the option you want to perform :\n1. Insert at end\n2. Insert element before an index\n3. Reverse\n4. Sort\n5. Check if empty\n6. Unique\n7. Display\n8. Exit)\n";
        cin >> sw;
        switch (sw)
        {
        case 1:
            cout << "Enter the element :\n";
            cin >> temp;
            l.push_back(temp);
            break;
        case 2:
            cout << "Enter the element and the index before which you want to insert :\n";
            cin >> temp >> pos;
            it = l.begin();
            advance(it, pos);
            l.insert(it, temp);
            break;
        case 3:
            l.reverse();
            break;
        case 4:
            l.sort();
            break;
        case 5:
            if (l.empty())
            {
                cout << "List is empty\n";
            }
            else
            {
                cout << "List is not empty\n";
            }
            break;
        case 6:
            l.unique();
            break;
        case 7:
            for (it = l.begin(); it != l.end(); it++)
            {
                cout << *it << " ";
            }
            cout << "\n";
            break;
        case 8:
                cout<<"Exit . . . \n";
            break;
        default:
            cout << "\nPlease enter a valid choice\n";
            break;
        }
    }
    return 0;
}

