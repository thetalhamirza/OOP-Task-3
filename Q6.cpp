#include <iostream>
#include <stdio.h>
using namespace std;

class Matrix
{

    public:
    int rows, cols;
    int** elements;
    
    Matrix (int rowNum, int colNum) {
        this->rows = rowNum;
        this->cols = colNum;
        elements = new int*[rows];
        for (int i = 0; i < rows; i++)  {
            elements[i] = new int[cols];
            for (int j = 0; j < cols; j++)  {
                elements[i][j] = 0;
            }
        }
    }
    
    int getRows() {return rows;}
    int getColumns() {return cols;}

    void setElement(int x, int y, int content)  {
        elements[x+1][y+1] = content; 
        cout << "\nValue Added.\n" << endl;
    }
    
    void displayElements() {
        for (int i = 0; i < rows; i++)  {
            printf("[");
            for (int j = 0; j < cols; j++) {
                printf(" %d ", elements[i][j]);
            }
            printf("]\n");
        }
    }

};
int main() {
    Matrix m1(3, 3);
    Matrix m2(4, 4);

    m1.displayElements();
    // m2.displayElements();

    m1.setElement(1, 1, 63);

    m1.displayElements();
};