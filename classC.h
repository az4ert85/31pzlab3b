class classChildTwo : public actionsOnRectangularMatrix
{
public:
	virtual void inputMatrix()
	{
		ifstream in("./input.txt");
		if (in.is_open())
		{
			int count = 0;
			int temp;
			while (!in.eof())
			{
				in >> temp;
				count++;
			}
			in.seekg(0, ios::beg);
			in.clear();

			int count_space = 0;
			char symbol;
			while (!in.eof())
			{

				in.get(symbol);
				if (symbol == ' ')
					count_space++;
				if (symbol == '\n')
					break;
			}

			in.seekg(0, ios::beg);
			in.clear();

			row = count / (count_space + 1);
			col = count_space + 1;

			matrix = new float *[row];
			for (int i = 0; i < row; i++)
				matrix[i] = new float[col];

			for (int i = 0; i < row; i++)
				for (int j = 0; j < col; j++)
					in >> matrix[i][j];

			in.close();
		}
		else
		{
			cout << "File not found.";
		}
	}

	virtual void printMatrix()
	{

		ofstream out;
		out.open("./output.txt");
		if (out.is_open())
		{

			out << line << endl;
			out << " *Your matrix:" << endl;
			out << line << endl;

			for (int i = 0; i < row; i++)
			{
				for (int j = 0; j < col; j++)
				{
					out << matrix[i][j] << ' ';
				}
				out << endl;
			}
			out << endl;
		}
		else
		{
			cout << "File not found.";
		}
	}
};
