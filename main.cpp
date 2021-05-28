#include <iostream>
#include <string>
#include <set>
#include <fstream>
using namespace std;

#include"rectangularMatrix.h"
#include"classO.h"
#include"classC.h"

int
main ()
{

  classChildOne one;
  classChildTwo two;
  one.inputMatrix();
  one.printMatrix();
  one.rowsWithoutZeros();
  one.maxNumberWitchWasFindTwoTimes();
  one.taskX();

  two.inputMatrix();
  two.printMatrix();
  
}