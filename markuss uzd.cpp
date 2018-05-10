#include <iostream>

using namespace std;

int main()
{
    int N,S,SA,atlikums,lieks;
    double Gadi,j,couner,l;
    cout << "Cik sipolu jums ir - ";
    cin >> N;
    cout << endl;
    cout << "Cik skaitu abolu velaties iegut - ";
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
    cout << "paies " << Gadi << " gadi" << endl;
    cin >> lieks;
    return 0;
}
