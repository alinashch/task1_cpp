
#include <iostream>
using namespace std;
void  EnterArray(int ** arr, int &m) {
    
 
    for (int i = 0; i < 2
        ; i++) {
        for (int j = 0; j < m; j++)
        {
            cout << "строка  " << i<<endl;
            cout << "столбец " << j << endl;
            cin >> arr[i][j];
        } 
    }

}

void PrintArray(int **arr, int  &n, int &m) {
    for (int i = 0; i <n ; i++) {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j]<<" ";
        }
        cout << endl;

    }
}

void AddNew(int** arr, int& n, int& m) {
    for (int i = 2; i < n; i++) {
        for (int j = 0; j < m; j++) {
            arr[i][j] = arr[i - 1][j] + arr[i - 2][j];
        }
    }
}


    int main()
    {
        setlocale(0, "");

        cout << "Количество строк ? " << endl;
        int* an = new int;
        cin >> *an;
        
        int** arr = new int* [*an];
        cout << "Количество столбцов ? " << endl;


        int* am = new int ;
        cin >> *am;
        for (int i = 0; i < *an; i++) {
            arr[i] = new int[*am];
        }
        EnterArray(arr, *am);

        AddNew(arr, *an, *am);
        PrintArray(arr, *an, *am);
        for (int i = 0; i < *an; i++) {
            delete [] arr[i];
        }


        delete an, am;
       

        system("pause");
        return 0;
    }
