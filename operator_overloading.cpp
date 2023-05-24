#include <iostream>
using namespace std;
class Complex
{
private:
    double real;
    double img;

public:
    Complex(double real = 0.0, double img = 0.0) : real(real), img(img) {}
    Complex operator+(const Complex &other)
    {
        double sumReal = real + other.real;
        double sumImg = img + other.img;
        return Complex(sumReal, sumImg);
    }

    Complex operator-(const Complex &other)
    {
        double diffReal = real - other.real;
        double diffImg = img - other.img;
        return Complex(diffReal, diffImg);
    }

    Complex operator*(const Complex &other)
    {
        double prodReal = (real * other.real) - (img * other.img);
        double prodImg = (real * other.img) + (img * other.real);
        return Complex(prodReal, prodImg);
    }

    bool operator==(const Complex &other)
    {
        return (real == other.real) && (img == other.img);
    }

    void print()
    {
        cout << "real: " << real << " img: " << img << endl;
    }
};

void *operator new(size_t size)
{
    cout << "Custom new: allocating " << size << "bytes" << endl;
    void *ptr = malloc(size);
    if (!ptr)
        throw bad_alloc();
    return ptr;
}

void operator delete(void *ptr) noexcept
{
    cout << "custom delete: deallocating memory" << endl;
    free(ptr);
}

int main()
{
    Complex c1(2.0, 3.0);
    Complex c2(1.5, 2.5);
    Complex c3(1.5, 2.5);
    Complex sum = c1 + c2;
    sum.print();
    Complex sub = c1 - c2;
    sub.print();
    Complex prod = c1 * c2;
    prod.print();
    if (c3 == c2)
    {
        cout << "both are equal\n";
    }
    else
    {
        cout << "both are not equal\n";
    }

    Complex *obj = new Complex(42, 52);
    delete obj;
    return 0;
}