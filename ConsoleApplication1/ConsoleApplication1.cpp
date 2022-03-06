#include<iostream>
#include<string>
#include<fstream>
#include<iomanip>

using namespace std;
void printCustomersData(const int id[], const string first[], const string last[], const double savings[], const double checkings[], int n) {

    cout << setw(10) << left << "ID" << " ";
    cout << setw(15) << left << "First" << " ";
    cout << setw(15) << left << "Last" << " ";
    cout << setw(20) << left << "Saving Account" << " ";
    cout << setw(20) << left << "Checking Account" << " " << endl;

    for (int i = 0; i < n; i++) {
        cout << setw(10) << left << id[i] << " ";
        cout << setw(15) << left << first[i] << " ";
        cout << setw(15) << left << last[i] << " ";
        cout << setw(20) << left << savings[i] << " ";
        cout << setw(20) << left << checkings[i] << " " << endl;
    }
    cout << "\n\n";
}
void printTotal(const int id[], const double savings[], const double checkings[], int n) {
    cout << setw(10) << left << "ID" << " ";
    cout << setw(15) << left << "Saving Account" << " ";
    cout << setw(20) << left << "Checking Account" << " ";
    cout << setw(20) << left << "Total" << " " << endl;

    for (int i = 0; i < n; i++) {
        cout << setw(10) << left << id[i] << " ";
        cout << setw(15) << left << savings[i] << " ";
        cout << setw(20) << left << checkings[i] << " ";
        cout << setw(20) << left << checkings[i] + savings[i] << " " << endl;
    }
    cout << "\n\n";
}


int main() {
	
}