#include<iostream>
using namespace std;

class Complex {
    private:
        int real, img;
    public:
        Complex(int r = 0, int i = 0) {real = r; img = i;}
        void print() { cout << "Addition of the complex numbers is "<<real << " + i" << img << '\n'; }

    friend Complex operator + (Complex const &, Complex const &);
};

Complex operator + (Complex const &c1, Complex const &c2)
{
	return Complex(c1.real + c2.real, c1.img + c2.img);
}

int main()
{
    int r1,r2,i1,i2;
    cout<<"Enter first complex number";
    cout<<"real part: ";
    cin>>r1;
    cout<<"imaginary part";
    cin>>i1;
    cout<<"Enter second complex number";
    cout<<"real part: ";
    cin>>r2;
    cout<<"imaginary part";
    cin>>i2;
	Complex c1(r1, i1), c2(r2, i2);
	Complex c3 = c1 + c2;
	c3.print();
    cout<< "\n" << endl;
	return 0;
}
