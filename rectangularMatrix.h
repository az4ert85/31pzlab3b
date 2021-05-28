
class actionsOnRectangularMatrix
{
protected:
  int row;
  int col;
  typedef set<int, greater<int>> MySet;
  string line = "----------------------------------";

  float **matrix;

public:
  virtual void inputMatrix() {}

  virtual void rowsWithoutZeros()
  {
    int rowsWithZeros = 0;

    for (int i = 0; i < row; i++)
      for (int j = 0; j < col; j++)
      {
        if (matrix[i][j] == 0)
        {
          ++rowsWithZeros;

          break;
        }
      }

    cout << line << endl;
    cout << " *Rows with out Zeros:";
    cout << (row - rowsWithZeros) << endl;
    cout << line << endl;
  }

  virtual void maxNumberWitchWasFindTwoTimes()
  {

    bool found = false;
    int rez = 0;
    MySet check;

    for (int i = 0; i < row; i++)
      for (int ii = 0; ii < col; ii++)
      {
        const int val = matrix[i][ii];
        if ((!found || val > rez) && !check.insert(val).second)
        {
          found = true;
          rez = val;
        }
      }

    if (!found)
    {
      cout << line << endl;
      cout << " *No numbers in matrix that met more than once" << endl;
      cout << line << endl;
    }
    else
    {
      cout << line << endl;
      cout << " *Biggest number is:" << rez << endl;
      cout << line << endl;
    }
  };

  virtual void taskX()
  {
    float *matrixSimpleArray = new float[(row * col)];
    int k = 0;
    for (int i = 0; i < row; i++)
      for (int j = 0; j < col; j++)
      {
        matrixSimpleArray[k] = matrix[i][j];
        k++;
      }
    k = 0;

    for (int i = ((row * col) - 1); i >= 0; i--)
    {
      for (int j = 0; j <= i; j++)
      {
        if (matrixSimpleArray[j] == 0)
        {
          int t = matrixSimpleArray[i];
          matrixSimpleArray[i] = matrixSimpleArray[j];
          matrixSimpleArray[j] = t;
          break;
        }
      }
    }

    for (int i = 0; i < row; i++)
      for (int j = 0; j < col; j++)
      {
        matrix[i][j] = matrixSimpleArray[k];
        k++;
      }

    cout << line << endl;
    cout << " *TaskX:" << endl;
    cout << line << endl;

    for (int i = 0; i < row; i++)
    {
      for (int j = 0; j < col; j++)
      {
        cout << matrix[i][j] << ' ';
      }
      cout << endl;
    }
    cout << endl;
  }

  virtual void printMatrix() {}
};
