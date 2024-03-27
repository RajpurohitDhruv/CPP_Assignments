#include <iostream>
using namespace std;
int main(){
//Q1 - Take 2 integer values in two variables x and y and print their product.
    int x, y;
    cout << "Enter two integers: ";
    cin >> x >> y;
    cout << "Product = " << x*y << endl;

//Q2 - Print the ASCII value of character ‘U’.
    char ch = 'U';
    cout << "ASCII value of 'U' = " << int(ch) << endl;

//Q3 - Write a C++ program to take length and breadth of a rectangle and print its area.
    int l, b;
    cout << "Enter length and breadth of rectangle: ";
    cin >> l >> b;
    cout << "Area = " << l*b << endl;

//Q4 - Write a C++ program to calculate the cube of a number.
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Cube = " << num*num*num << endl;

//Q5 - Write a C++ program to find size of basic data types.
    cout << "Size of int = " << sizeof(int) << " bytes" << endl;
    cout << "Size of char = " << sizeof(char) << " bytes" << endl;
    cout << "Size of float = " << sizeof(float) << " bytes" << endl;
    cout << "Size of double = " << sizeof(double) << " bytes" << endl;
    cout << "Size of bool = " << sizeof(bool) << " bytes" << endl;
    cout << "Size of long = " << sizeof(long) << " bytes" << endl;
    cout << "Size of short = " << sizeof(short) << " bytes" << endl;

//Q6 - Write a C++ program to swap two numbers with the help of a third variable.
    int a, c, d;
    cout << "Enter two integers: ";
    cin >> a >> c;
    d = a;
    a = c;
    c = d;
    cout << "After swapping: " << a << " " << c << endl;
}

