#include <iostream>
using namespace std;
void SeidelMethod();

int main()
{
    SeidelMethod();
    return 0;
}


void SeidelMethod()
{

    double a1, a2, a3;
    cout << "Enter parameters of x1 :" << endl;
    cout << "Enter parameter a1 : ";
    cin >> a1;

    cout << "Enter parameter a2 : ";
    cin >> a2;

    cout << "Enter parameter a3 : ";
    cin >> a3;

    cout << "\n-------------------------------------------\n";
    double b1, b2, b3;
    cout << "Enter parameters of x2 :" << endl;
    cout << "Enter parameter b1 : ";
    cin >> b1;

    cout << "Enter parameter b2 : ";
    cin >> b2;

    cout << "Enter parameter b3 : ";
    cin >> b3;

    cout << "\n-------------------------------------------\n";
    double c1, c2, c3;
    cout << "Enter parameters of x3 :" << endl;
    cout << "Enter parameter c1 : ";
    cin >> c1;

    cout << "Enter parameter c2 : ";
    cin >> c2;

    cout << "Enter parameter c3 : ";
    cin >> c3;

    cout << "\n-------------------------------------------\n";
    double r1, r2, r3;
    cout << "Enter the result of equations :" << endl;
    cout << "Enter parameter r1 : ";
    cin >> r1;

    cout << "Enter parameter r2 : ";
    cin >> r2;

    cout << "Enter parameter r3 : ";
    cin >> r3;


    double x1 = 0, x2 = 0, x3 = 0;

    for(int i=0; i<4;i++)
    {
        x1 = (r1 - (b1 * x2) - (c1 * x3)) / a1;
        x2 = (r2 - (a2 * x1) - (c2 * x3)) / b2;
        x3 = (r3 - (a3 * x1) - (b3 * x2)) / c3;
    }


    cout << "\n___________________________________________\n";
    cout << "___________________________________________\n\n";
    cout<<"x1 = "<<x1<<endl;
    cout<<"x2 = "<<x2<<endl;
    cout<<"x3 = "<<x3<<endl;

}


