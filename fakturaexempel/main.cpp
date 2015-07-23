#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int antal;
    double per_st, exkl_moms, inkl_moms, moms;
    const double moms_procent = 25.0;
    cout << "Antal enheter? "; cin >> antal;
    cout << "Pris per enhet? "; cin >> per_st;
    exkl_moms = per_st * antal;
    moms = exkl_moms * moms_procent / 100;
    inkl_moms = exkl_moms + moms;
    cout << endl <<
    "FAKTURA"           << endl         << "======="    << endl <<
    "Antal enheter: "   << setw(9)      << antal        << endl <<
    setprecision(2)     << fixed        <<
    "Pris per enhet: "  << setw(8)      << per_st       << endl <<
    "Totalt pris: "     << setw(11)     << inkl_moms    << endl <<
    "Varav moms: "      << setw(12)     << moms         << endl;
}
