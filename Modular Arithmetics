#include <iostream>
#include "Functions.hpp"
using namespace std;

int main()
{
  int n, task, sum, base, power;
    cout << "Please enter task number: ";
    cin>> task;
    cout << "Please enter N: ";
    cin >> n;
    int * ostPrusten = new int[n];
    
    int cnt = numberOfMatches(n); // 5та Задача
    int **table = new int*[2];
    
    for (int i = 0; i < 2; i++)
    {
        table[i] = new int[cnt/2];
    }                                //
    
    int cnt1 = numberOfMatchesDelenie(n); // 6та Задача
    int **table2 = new int*[2];
    
    for (int i = 0; i < 2; i++)
    {
        table2[i] = new int[cnt1/2];
    }
    
    
    
    switch (task) {
            
        case 1:
            fillOstPrusten(ostPrusten, n);
            break;
            
        case 2:
            fillOstPrusten(ostPrusten, n);
            sum = addition(ostPrusten, n);
            cout <<"Answer is: "<< sum << endl;
            break;
            
        case 3:
            fillOstPrusten(ostPrusten, n);
            sum = substraction(ostPrusten, n);
            cout <<"Answer is: "<< sum << endl;
            break;
            
        case 4:
            fillOstPrusten(ostPrusten, n);
            sum = multiplication(ostPrusten, n);
            cout <<"Answer is: "<< sum << endl;
            break;
            
        case 5:
            cout << endl;
            cout << createAndFillTable(table, n);
            break;
            
        case 6:
            cout << endl;
            cout << createAndFillTableDelenie(table2, n);
            break;
            
        case 7:
            cout << "It's not working properly. :(";
            break;
        
        case 8:
            fillOstPrusten(ostPrusten, n);
            sum = dividingTask8(ostPrusten, n);
            cout << sum;
            break;
            
        case 9:
            cout << "Please enter base value: ";
            cin >> base;
            cout << "Please enter power value: ";
            cin >> power;
            sum = BurzoStepenuvane(n, base, power);
            cout <<"Answer is: " << sum << endl;
            break;
            
        case 10:
            cout << "It's not working properly. :(";
            break;
            
        case 11:
            sum = primeCheck(n);
            cout << sum << endl;
            break;
            
        case 14:
         sum =   diskretenLogaritam(n);
            cout << sum;
            break;
        
    }
    
    
    delete[]ostPrusten;        //CLEAN UP
    ostPrusten = nullptr;
    
    for (int i = 0; i < 2; i++) {
        delete [] table[i];
    }
    delete[] table;
    table = nullptr;
    
    for (int i = 0; i < 2; i++) {
        delete [] table2[i];
    }
    delete[] table2;
    table2 = nullptr;
    
    return 0;
}
