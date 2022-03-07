#include<iostream>
#include<string>
#include<fstream>
#include<iomanip>



using namespace std;

void printData(const int id[], const string first[], const string last[], const double savings[], const double checkings[], int n) {

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

    char ch;
    int id;
    string first;
    string last;
    int savings;
    int checkings;

    ifstream fin("input.txt");

    if (!fin) {
        cout << "Error in opening file\n";
        return 0;
    }
    int count = 0;
    while (fin >> id[count] >> first[count] >> last[count] >> savings[count] >> checkings[count]) {
        count++;
    }
    while (true) {
        cout << "1.Print all customer data\n";
        cout << "2.Print names and IDs\n";
        cout << "3.Print accounts total\n";
        cout << "4.Enter q/Q to quit\n\n";
        cout << "Enter your choice or 'q' to quit: ";
        cin >> ch;
        if (ch == 'q' || ch == 'Q')
            break;
        switch (ch) {
        case '1': printData(id, first, last, savings, checkings, count);
            break;
        case '2': printNames(id, first, last, count);
            break;
        case '3': printTotal(id, savings, checkings, count);
            break;
        }
    }
}