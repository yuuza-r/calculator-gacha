#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;


double kalkulator(double num1, double num2, char operasi) {
    double hasil;
    
    switch (operasi) {
        case '+':
            hasil = num1 + num2;
            break;
        case '-':
            hasil = num1 - num2;
            break;
        case '*':
            hasil = num1 * num2;
            break;
        case '/':
            if (num2 != 0)
                hasil = num1 / num2;
            else {
                cout << "Error: Pembagian dengan nol!" << endl;
                return 0;
            }
            break;
        default:
            cout << "Operasi tidak valid!" << endl;
            return 0;
    }


    srand(time(0));
    int random_number = rand() % 2; 

    if (random_number == 0) {
        
        return hasil;
    } else {
       
        return hasil + (rand() % 10 + 1); 
    }
}

int main() {
    double num1, num2;
    char operasi;


    cout << "Masukkan angka pertama: ";
    cin >> num1;
    cout << "Masukkan operator (+, -, *, /): ";
    cin >> operasi;
    cout << "Masukkan angka kedua: ";
    cin >> num2;


    double hasil = kalkulator(num1, num2, operasi);
    cout << "Hasil: " << hasil << endl;
    cin.get();
    cin.get();


    return 0;
}
