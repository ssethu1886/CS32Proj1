

#include "Previous.h"
#include "globals.h"
#include <iostream>
using namespace std;

Previous::Previous(int nRows, int nCols){
    m_rows = nRows;
    m_cols = nCols;
    for (int i = 0; i < nRows; i++){
        for (int j = 0; j < nCols; j++){
            m_grid[i][j] = 0;
        }
    }
}

bool Previous::dropACrumb(int r, int c){
    if (r <= 0  ||  c <= 0  ||  r > m_rows  ||  c > m_cols){
        return false;
    }
    m_grid[r-1][c-1]++;
    return true;
}

void Previous::showPreviousMoves() const{
    clearScreen();
    for (int i = 0; i < m_rows; i++){
        for (int j = 0; j < m_cols; j++){
            int elem= m_grid[i][j];
            if (elem == 0){
                cout << '.';
            }
            else if (elem > 0 && elem < 25){
                cout << static_cast<char>(elem+64);
            }
           else if (elem > 25)
               cout << 'Z';
        }
        cout << endl;
    }
    cout << endl;
}
