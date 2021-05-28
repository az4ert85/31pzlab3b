class classChildOne : public actionsOnRectangularMatrix
{
public:
    virtual void inputMatrix()
    {

        cout << " *Creating a rectangular matrix:" << endl;
        cout << line << endl;
        cout << "Enter the number of rows:";
        cin >> row;
        cout << "Enter the number of columns:";
        cin >> col;
        cout << line << endl;

        if (row > col || col > row)
        {
            matrix = new float *[row];
            for (int i = 0; i < row; i++)
                matrix[i] = new float[col];

            for (int i = 0; i < row; i++) 
                for (int j = 0; j < col; j++)
                {
                    cout << "Enter element "
                         << "[" << i << "][" << j << "]  ";
                    cin >> matrix[i][j];
                }
        }
    }

    virtual void printMatrix()
    {
        cout << line << endl;
        cout << " *Your matrix:" << endl;
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
};
