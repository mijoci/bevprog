#include "std_lib_facilities.h"

int main () {
    bool init = true;
    const double m_cm = 100, in_cm = 2.54, ft_in = 12;
    double small, large, total = 0.0, z;
    string unit;
    vector<double> values;

    while (cin >> z >> unit) {
        cout << z << unit << "\n";
        if (unit == "m")
            z = z;
        else if (unit == "cm")
            z = z/m_cm;
        else if (unit == "in")
            z = in_cm*z/m_cm;
        else if (unit == "ft")
            z = ft_in*in_cm*z/m_cm;
        else {
            cout << "Invalid unit - ignored\n";
            unit="???";
        }
        values.push_back(z);
        total += z;
        if (init) {
            small = z;
            large = z;
            init = false;
        } else if (z < small) {
            cout << "The smallest so far\n";
            small = z;
        } else if (z > large) {
            cout << "The largest so far\n";
            large = z;
        }
    }
    cout << "Smallest: " << small << ", largest: " << large <<
        ", total: " << total << "\n";
    sort(values.begin(),values.end());
    cout << "Values: ";
    for (int i = 0; i < values.size(); ++i)
        cout << values[i] << " ";
    cout << "\n";
    // keep_window_open();
    return 0;
}
