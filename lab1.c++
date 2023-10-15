#include <iostream>
using namespace std;

class CalcuClass {
public:
    double summation(double arr[], int size) {
        double sum = 0;
        for (int i = 0; i < size; i++) {
            sum += arr[i];
        }
        return sum;
    }
    double multiply(double arr[], int size){
        double result=1;
        for (int i = 0; i < size; i++) {
            result *= arr[i];
        }
        return result;
    }
    double subtract(double arr[], int size){
        double result=0;
        for (int i = 1; i < size; i++) {
            result -= arr[i];
        }
        return result;
    }
    double deviation(double arr[], int size){
        double result = arr[0];
        for (int i = 1; i < size; i++) {
            if (arr[i] == 0) {
                cout << "Division by zero encountered." << endl;
                continue;
            }
            result /= arr[i];
        }
        return result;
    }
};

int main() {
    CalcuClass calculator;

    int choice;
    char retry;

    cout << "==========================================="<< endl;
    cout << "=============== By Osman Sener Gurel ==============="<< endl;
    cout << "  ~~ WELCOME to Data Structure Algorithms program ~~"<< endl;

    cout << "Enter the size of the array: ";
    int sizeN;
    cin >> sizeN;

    double arr[sizeN];
    for (int i = 0; i < sizeN; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }

    do {
        cout << "1. + Summation" << endl;
        cout << "2. - Subtract" << endl;
        cout << "3. x Multiply" << endl;
        cout << "4. / Deviation" << endl;
        
        cout << "Enter your choice you would like to do: ";
        cin >> choice;

        switch (choice) {
            case 1:
            {
                double result = calculator.summation(arr, sizeN);
                cout << "Summation = " << result << endl;
                break;
            }
            case 2:
            {
                double result = calculator.subtract(arr, sizeN);
                cout << "Subtraction = " << result << endl;
                break;
            }
            case 3:
            {
                double result = calculator.multiply(arr, sizeN);
                cout << "Multiplision = " << result << endl;
                break;
            }
            case 4:
            {
                double result = calculator.deviation(arr, sizeN);
                cout << "Deviation = " << result << endl;
                break;
            }
        }

        cout << "Do you want to perform another operation? (y/n): ";
        cin >> retry;                                                    //stores the yes or no
    } while (retry == 'y' || retry == 'Y');

    return 0;
}



