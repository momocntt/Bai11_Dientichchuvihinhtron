// Bai11_Dientichchuvihinhtron
#include <iostream>
using namespace std;


int main()
{
    cout << "TINH DIEN TICH VA CHU VI HINH TRON \n";
    double bankinh, chuvi, dientich, pi = 3.14;




    cout << "Nhap ban kinh :"; cin >> bankinh;

   
    chuvi = 2 * pi * bankinh;
    dientich = pi * bankinh * bankinh;

    cout << "Chu vi:" << chuvi << endl;
    cout << "Dien tich:" << dientich << endl;
    return 0;
}


