/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

int main()
{
 int row = 3;
 int col = 3;

 int matrix[3][3];

 cout << "Enter the matrix elements:" << endl;
 for (int i = 0; i < row; i++)
 {
  for (int j = 0; j < col; j++)
  {
   cin >> matrix[i][j];
  }
 }

 cout << "The matrix is: " << endl;
 for (int i = 0; i < row; i++)
 {
  for (int j = 0; j < col; j++)
  {
   if (i > j)
   {
    matrix[i][j] = 0;
   }
   cout << matrix[i][j] << " ";
  }
  cout << endl;
 }

 return 0;
}