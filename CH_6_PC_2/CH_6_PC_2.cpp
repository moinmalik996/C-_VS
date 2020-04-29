// CH_6_PC_2.cpp : rRectangle Area

#include <iostream>

using namespace std;

double getLength();
double getWidth();
double getArea(double, double);
void display(double, double, double);

int main()
{
    double length, width, area;
    length = getLength();
    width = getWidth();
    area = getArea(length, width);
    display(length, width, area);


    cout << endl << endl;
    cin.get();
    cin.clear();
    cin.ignore();
}

double getLength() {

    double length;
    cout << "Enter The Length Of The Rectangle  :  ";
    cin >> length;

    return length;
}

double getWidth() {

    double width;
    cout << endl << "Enter The Width of The Rectangle  :  ";
    cin >> width;

    return width;
}

double getArea(double length, double width) {

    double area = length * width;

    return area;
}

void display(double length, double width, double area) {

    cout << endl << "Length  :  " << length;
    cout << endl << "Width   :  " << width;
    cout << endl << "Area    :  " << area;
}


