#include <iostream>

using namespace std;

class Complex {
    private: 
        int real;
        int img;
    public:
        Complex () {
            real = 0;
            img = 0;
        }
        Complex (int a, int b) {
            real = a;
            img = b;
        }
        Complex operator () (int a, int b, int c, int d) {
            Complex E;
            E.real = a+b+c;
            E.img = b+c+d;
            return E;
        }
        
        // display
        void display() {
            cout<<"The complex number is: ";
            cout<<real<<"+"<<img<<"i"<<endl;
        }
        
        //operator overloading
        Complex operator + (Complex d) {
        Complex temp;
        temp.real = real+d.real;
        temp.img = img+d.img;
        return temp;
    }
};

int main()
{
    Complex A(2,3), B(5,9),C,D;
    (A+B).display();
    
    C = D(1,2,3,4);
    C.display();
    return 0;
}

On Mon, Aug 1, 2022 at 12:01 PM Abhay Thakur <abhaythakur00astro@gmail.com> wrote:
#include <iostream>

using namespace std;

class Complex {
    private: 
        int real;
        int img;
    public: 
        Complex() {
            real = 0;
            img = 0;
        }
        Complex (int a, int b) {
            real = a;
            img = b;
        }
        Complex operator () (int a, int b, int c, int d) {
            Complex c;
            c.real = a+b+c;
            c.img = b+c+d;
            return c;
        }
        
        // display
        void display() {
            cout<<"The complex number is: ";
            cout<<real<<"+"<<img<<"i"<<endl;
        }
        
        //operator overloading
        Complex operator + (Complex d) {
        Complex temp;
        temp.real = real+d.real;
        temp.img = img+d.img;
        return temp;
    }
};

int main()
{
    Complex A(2,3);
    Complex B(4,5);
    (A+B).display();
    Complex C(2,3,4,5);
    C.display();
    
    return 0;
}
