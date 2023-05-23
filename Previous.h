

#ifndef Previous_h
#define Previous_h
#include "globals.h"

class Previous
{
 public:
Previous(int nRows, int nCols);
 bool dropACrumb(int r, int c);
 void showPreviousMoves() const;
    
private:
    int m_rows;
    int m_cols;
    int m_grid [MAXROWS][MAXCOLS];
};


#endif /* Previous_h */
