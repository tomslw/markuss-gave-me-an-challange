#include <iostream>

using namespace std;

int main()
{
    int N,S,SA,atlikums,lieks;
    double Gadi,j,couner,l;
    cout << "How meny onions do you have - ";
    cin >> N;
    cout << endl;
    cout << "How meny onions do you want - ";
    cin >> S;
    cout << endl;
    SA = N;
    couner = 0;
    while (SA<S) {
        SA = SA*3;
        couner = couner+1;
    }
    atlikums = SA - S;
    l = SA - SA / 3 ;
    j = atlikums / l;
    Gadi = couner - j;
    cout << "It will take " << Gadi << " years" << endl;
    cin >> lieks;
    return 0;
}
