#include <iostream>
using namespace std;

union MyData
{
    int i;
    float f;
    char c;
};
struct MyVariant
{
    MyData g6;
    unsigned int isInt : 1;
    unsigned int isFloat : 1;
    unsigned int isChar : 1;

};




int main()
{


    //task 1
    {
        cout << "Creating and initializing variables" << endl;

        int a;
        a = 777;
        cout << a << endl;

        short int c;
        c = -666;
        cout << c << endl;

        long long y;
        y = 9'000'000;
        cout << y << endl;

        bool b;
        b = true;
        cout << b << endl;

        float e;
        e = 14.7f;
        cout << e << endl;

        double s;
        s = 12 - 5.5;
        cout << s << endl;

        char t;
        t = '$';
        cout << t << endl;



    };

    //task 2
    {
        setlocale(LC_ALL, "Russian");

        enum Крестики_Нолики { X, O, EMPTY, };

        //task 3
        {
            Крестики_Нолики Поле_arr[9] = { EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY };
        };

        //task 4
        struct Tic_Tac_Toe;
        {
            setlocale(LC_ALL, "Russian");

            Крестики_Нолики Поле_Линия1[3] = { EMPTY, EMPTY, EMPTY };
            Крестики_Нолики Поле_Линия2[3] = { EMPTY, EMPTY, EMPTY };
            Крестики_Нолики Поле_Линия3[3] = { EMPTY, EMPTY, EMPTY };
        };

    };
    //task 5
    {
        MyVariant n;

        n.isInt = 4;
        n.g6.i = 666;
        cout << n.g6.i << endl;

        n.isFloat = 3;
        n.g6.f = 7.7;
        cout << n.g6.f << endl;

        n.isChar = 7;
        n.g6.c = -562;
        cout << n.g6.c << endl;





    }




    return 0;
};