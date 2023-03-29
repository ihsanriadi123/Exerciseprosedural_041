#include <iostream>
using namespace std;

double rerata(double a, double b) {
    return (a + b) / 2;
}

string status1(double r) {
    if (r >= 65) {
        return "diterima";
    }
    else {
        return "ditolak";
    }
}

string status2(double r, double n) {
    if (r >= 65 && n >= 85) {
        return "diterima";
    }
    else {

    }
}

string status3(double r, double n) {
    if (r < 65 || n > 85) {
        return "diterima";
    }
    else {
        return "ditolak";
    }
}

int main() {
    double nilaimath, nilaibing;

    cout << "Masukkan Nilai kadidat";
    cout << "masukkan nilai matematika :";
    cin >> nilaimath;
    cout << "masukkan nilai bahasa inggris :";
    cin >> nilaibing;

    //rerata = (nilaimath + nilaibing)/2;

    //rata = rerata(nilaimath, nilaibing);
    //st = status(rerata(nilaimath, nilaibing));

    //if (rata> 85) {
    //  status  = "diterima";
    // }else {
    //  status  = "ditolak";
    //}

    cout << "nilai rata-rata nya : " << rerata(nilaimath, nilaibing);
    cout << "\nstatus kelulusannya : " << status1(rerata(nilaimath, nilaibing));
    cout << "\nstatus kelulusannya : " << status2(rerata(nilaimath, nilaibing), nilaimath);
    cout << "\nstatus kelulusannya : " << status3(rerata(nilaimath, nilaibing), nilaimath);

}