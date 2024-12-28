#include <iostream>

using namespace std;

int main (){
    int matrix[2][2]{
        {0,0},{0,0}
    };
    int matrix1[2][2]{
        {0,0},{0,0}
    };
    for (int i=0; i<2 ; i++){
        for (int j =0; j<i ; j++)
            cout << "enter your number:" << endl ;
            cin >> matrix [i][j];
    }
    // }
    // for (int j:matrix1){
    //     cout << "enter another matrix:" << endl;
    //     cin >> matrix1;
    // }
    // cout << "the sum of ur two matrixes is : " << matrix + matrix1 ;
    // return 0,
    return 0;
}