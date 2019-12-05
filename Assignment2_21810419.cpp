#include <iostream>
using namespace std;
class Complex
{
private:
    int real, img;
public:
    Complex()
    {
        real=0;
        img=0;
    }
    friend ostream & operator << (ostream &out, const Complex &c);
    friend istream & operator >> (istream &in, Complex &c);
    Complex operator +(Complex com) //'+' operator overloaded to add two complex numbers.
    {
        Complex cc;
        cc.real=real+com.real;
        cc.img=img+com.img;
        return cc;
    }
    Complex operator *(Complex com) //'*' operator overloaded to multiply two complex numbers.
    {
        Complex cc;
        cc.real=real*com.real-(img*com.img);
        cc.img=real*com.img+img*com.real;
        return cc;
    }
};
ostream & operator << (ostream &out, const Complex &c) //'<<' operator overloaded for displaying a complex number.
{
    out << c.real;
    out << "+i" << c.img;
    return out;
}

istream & operator >> (istream &in, Complex &c) //'>>' operator overloaded for accepting complex number.
{
    cout << "Enter Real Part ";
    in >> c.real;
    cout << "Enter Imaginery Part ";
    in >> c.img;
    return in;
}
int main()
{
    Complex com1,com2,com3;
    cout<<"Enter first complex number\n";
    cin >> com1;
    cout<<"Enter second complex number\n";
    cin >> com2;
    int sw = 0;
    while(sw != 3)
    {
        cout<<"***************Select***************\n\n1. Add 2 Complex numbers\n2. Multiply 2 Complex numbers\n3. Exit\n";
        cin >> sw;
        switch(sw)
        {
            case 1:
                com3=com1+com2;
                cout << "(";
                cout << com1;
                cout << ")";
                cout << " + ";
                cout << "(";
                cout << com2;
                cout << ")";
                cout << " = ";
                cout << com3;
                cout << endl;
                break;
            case 2:
                com3=com1*com2;
                cout << "(";
                cout << com1;
                cout << ")";
                cout << " * ";
                cout << "(";
                cout << com2;
                cout << ")";
                cout << " = ";
                cout << com3;
                cout<<endl;
                break;
            case 3:
                cout<<"Exit...\n";
                break;
            default:
                cout<<"Invalid Selection\n";
                break;
        }
    }
    return 0;
}

