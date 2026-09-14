#include<iostream>
using namespace std;
class Complex
{
        double real, imag;
    public:
        void getdata(double, double);
        Complex sum(Complex,Complex);
        void display(Complex);
};

void Complex::getdata(double x,double y)
{
    real = x;
    imag = y;
}
Complex Complex::sum(Complex C1,Complex C2)
{
    Complex C;
    C.real = C1.real+C2.real;
    C.imag = C1.imag+C2.imag;
    return C;
}
void Complex::display(Complex R)
{
    cout<<R.real<<"+J"<<R.imag;
}
int main()
{
    Complex X,Y,Z;
    X.getdata(2.3,5.6);
    Y.getdata(4.5,6.3);
    Complex Res = Z.sum(X,Y);
    Res.display(Res);

}