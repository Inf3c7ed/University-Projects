#include <iostream>

using namespace std;

void fillOstPrusten(int ostPrusten[], int n) //Пълнене
{
    for (int i = 0; i < n; i++)
    {
        ostPrusten[i] = i;
    }
}

int printArray(int *ostPrusten, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << ostPrusten[i] << " ";
    }
    
    return *ostPrusten;
}

int addition(int ostPrusten[], int modul) // Събиране
{
    int a, b;
    
    
    int sum;
    while(true)
    {
        cout << "Please enter an element up to " << modul - 1 << " : ";
        cin >> a;
        cout << endl;
        cout << "Please enter a second element up to " << modul - 1 << " : ";
        cin >> b;
        
    if (a < modul && a >= 0 && b < modul && b >= 0)
    {
         sum = (ostPrusten[a] + ostPrusten[b]) % modul;
        break;
    }
    else
    {
        cout << "Please enter valid numbers!";
    }
        
    }
    
    return sum;
}

int substraction(int ostPrusten[], int modul) // Изваждане
{
    int a, b;
    
    
    int sum;
    int sum1;
    while(true)
    {
        cout << "Please enter an element up to " << modul -1 << " : ";
        cin >> a;
        cout << endl;
        cout << "Please enter a second element up to " << modul -1 << " : ";
        cin >> b;
        
        if (a < modul && a >= 0 && b < modul && b >= 0)
        {
            sum = (ostPrusten[a] - ostPrusten[b]);
            if(sum <= 0)
                sum1 = modul+sum;
            else
                sum1 = modul - sum;
                break;
        }
        else
        {
            cout << "Please enter valid numbers!";
        }
        
    }
    return sum1;
}

int multiplication(int ostPrusten[], int modul) // Умножение
{
    int a, b;
    
    
    int sum;
    while(true)
    {
        cout << "Please enter an element up to " << modul -1<< " : ";
        cin >> a;
        cout << endl;
        cout << "Please enter a second element up to " << modul -1 << " : ";
        cin >> b;
        
        if (a < modul && a >= 0 && b < modul && b >= 0)
        {
            sum = (ostPrusten[a] * ostPrusten[b]) % modul;
            
            break;
        }
        else
        {
            cout << "Please enter valid numbers!";
        }
        
    }
    return sum;
}

int partition(int ostPrusten[], int modul) // Деление
{
    int a, b;
    
    
    int sum;
    int cnt = 0;
    while(true)
    {
        cout << "Please enter an element up to " << modul -1 << " : ";
        cin >> a;
        cout << endl;
        cout << "Please enter a second element up to " << modul -1<< " : ";
        cin >> b;
        int i = 1;
        
        
        if (a < modul && a >= 0 && b < modul && b >= 0)
        {
            while(true)
            {
                sum = (b*i) % modul;
                i++;
                cnt++;
                if(sum == a)
                {
                    break;
                }
            }
            
            break;
        }
        else
        {
            cout << "Please enter valid numbers!";
        }
        
    }
    return cnt;
}

int numberOfMatches(int n) // Намиране на бройка елементи
{
   
    //cin >> n;
    
    
    int * arr = new int[n];
    
    for (int i = 0; i < n; i++) //Пълним Ост. пръстен
    {
        arr[i] = i;
    }
    
    
    int sum;
    int cnt = 0;
   
    for (int j = 0; j < n; j++) //Алг. за намиране бройка на елементи.
    {
         int help = j;
        while(help < n)
        {
            
            sum = (arr[j] * arr[help]) % n;
            
            if (sum == 1)
            {
                
                cnt += 2;
            }
            help++;
            
        }
    }
    delete [] arr;
    arr = nullptr;
    
    return cnt;
}

int createAndFillTable(int **table, int n) // Пълнене на двумерен масив
{
    int * arr = new int[n];
    
    for (int i = 0; i < n; i++) //Пълним Ост. пръстен
    {
        arr[i] = i;
    }
    
    
    int sum;
    int cnt = 0;
    int element = 0;
    
    for (int j = 0; j < n; j++) //Алг. за намиране бройка на елементи.
    {
        int help = j;
        
        while(help < n)
        {
            
            sum = (arr[j] * arr[help]) % n;
            
            if (sum == 1)
            {
                table[0][element] = arr[j];
                table [1][element] = arr[help];
                cnt += 2;
                element++;
            }
            help++;
            
        }
    }
    delete [] arr;
    arr = nullptr;
    
    for (int i = 0; i <2; i++)
    {
        for (int j = 0; j < element; j++)
        {
            cout << table[i][j] << " ";
        }
        cout << endl;
    }
    
    return **table;
}

int numberOfMatchesDelenie(int n) // Намиране бройка на елементи за деление
{
    int * arr = new int[n];
    
    for (int i = 0; i < n; i++) //Пълним Ост. пръстен
    {
        arr[i] = i;
    }
    
    
    int sum;
    int cnt = 0;
   
    for (int j = 0; j < n; j++) //Алг. за намиране бройка на елементи.
    {
        int help = 0;
        while(help < n)
        {
            
            sum = (arr[help] * arr[j]) % n;
            
            if (sum == 1)
            {
                
                cnt += 2;
            }
            help++;
            
        }
    }
    delete [] arr;
    arr = nullptr;
    
    return 0;
}

int createAndFillTableDelenie(int **table, int n) // Пълнене на двумерен деление
{
    int * arr = new int[n];
    
    for (int i = 0; i < n; i++) //Пълним Ост. пръстен
    {
        arr[i] = i;
        
    }
    
    int sum;
    int cnt = 0;
    int element = 0;
    
    for (int j = 0; j < n; j++) //Алг. за намиране бройка на елементи.
    {
        int help = 0;
        
        while(help < n)
        {
            
            sum = (arr[help] * arr[j]) % n;
            
            if (sum == 1)
            {
                table[0][element] = arr[j];
                table [1][element] = arr[help];
                cnt += 2;
                element++;
            }
            help++;
            
        }
    }
    delete [] arr;
    arr = nullptr;
    
    for (int i = 0; i <2; i++)
    {
        for (int j = 0; j < element; j++)
        {
            if (i ==0)
            {
                cout << "1/";
            }
            cout << table[i][j] << "\t";
        }
        cout << endl;
    }
    
    return **table;
}

int findReciprocal(int n) // Намиране на реципрочно на елемент
{
    int element;
    
    while (true)
    {
        cout << "Please enter an element up to " << n-1 << ": ";
        
        cin >> element;
        if (element >= n)
        {
            cout << "Your number is higher.Please enter an element up to " << n-1 << ": ";
        }
        else
        {
            break;
        }
    }
    int * arr = new int[n];
    
    for (int i = 0; i < n; i++)
    {
        arr[i] = i;
    }
    int sum = 0;
    int number = 0;
    for (int i = 0; i < n; i++)
    {
      sum =  arr[i] * arr[element] % n;
        if (sum == 1)
        {
         number = arr[i];
            break;
        }
    }
    
    cout << "The reciprocal number of " << element << " is " << number << endl;
    
    return 0;
}

int dividingTask8(int *arr, int n)
{
    int numberToDivide;
    for (size_t i = 0; i < n; i++)
    {
        int help = 0;
        cout << "Number to be devided to element " << i << ": ";
        do
        {
            cin >> numberToDivide;
            
        } while (numberToDivide <= 0 || numberToDivide > n);
        
        while ((help * numberToDivide) % n != arr[i])
        {
            help++;
            if (help > n)
            {
               // cout << "-1" << endl;
                break;
            }
        }
        arr[i] = help;
        if (help > n)
        {
            cout << "-1" << endl;
        }
         if (help <= n)
             cout << "Answer is: " << arr[i] << "." << endl;
    }
    return 0;
}

int Pow (int a, int b) //функция за степенуване

{
    int result = a;
    
    for (int i = 1; i < b; i++)
    {
        result *= a;
    }
    if (b == 0)
    {
        result = 1;
    }
    return result;
}

int BurzoStepenuvane(int n , int base, int power) {
    int res = 0, pow2 = 1;
    do
    {
        int current = Pow(base, pow2);
        res = base * current % n;
        pow2++;
        
    } while (res != 1);
    
    int gigaPow = power % pow2;
    
    int nov = Pow(base, gigaPow);
    
    int result = nov % n;
    
    return result;
}

int primeCheck (int n)
{
    int i;
    bool isPrime = true;
    
    
    
    for(i = 2; i <= n / 2; ++i)
    {
        if(n % i == 0)
        {
            isPrime = false;
            break;
        }
    }
    if (isPrime)
        cout << "Остатъчният пръстен Е остатъчно поле." << endl;
    else
        cout << "Остатъчният пръстен НЕ Е остатъчно поле." << endl;
    
    return 0;
}

int diskretenLogaritam(int n)
{
    int base, element;
    do
    {
      cout << "Choose base: ";
        cin >> base;
    } while (base < 0 || base >= n);
    do
    {
        cout << "Choose element: ";
        cin >> element;
    } while (element < 0 || element >= n);
    
    int res = 0;
    for (int i = 0; i < n-1; i++)
    {
        res = Pow(base, i);
        if (res % n == element)
        {
            return i;
        }
    }
    return -1;
}
