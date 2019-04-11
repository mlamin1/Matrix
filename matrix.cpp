#include <iostream>
#include "matrix.h"
#include <stdlib.h>
#include <time.h>


using namespace std;


/***********************************************************************************************/
//Non-Default Constructor									/
//Used to make accept the rows and cols from user and make a matrix of the size of rows and cols/
/***********************************************************************************************/
Matrix::Matrix(int n_rows, int n_cols)
{
	rows = n_rows;
	cols = n_cols;
	m = new int*[rows];
	for(int i = 0; i < rows; i++)
	{
		m[i] = new int[cols];

		for(int j = 0; j < cols; j++)
		{	
			m[i][j] = 0;
		}

	}
}


/***********************************************************************************************/
//Destructor											/
//Used to delete and free the space that was used in my constructor.				/
/***********************************************************************************************/
Matrix::~Matrix()
{
	for(int i = 0; i < rows; i++)
	{
		delete [] m[i];
	}
	delete [] m;
}




/***********************************************************************************************/
//Copy Constructor									/
//Used to make accept the rows and cols from user and make a matrix of the size of rows and cols/
/***********************************************************************************************/
Matrix::Matrix(const Matrix &obj)
{
	rows = obj.rows;
	cols = obj.cols;
	m = new int*[rows];
	for(int i = 0; i < rows; i++)
	{
		m[i] = new int[cols];
		for(int j = 0; j < cols; j++)
		{
			m[i][j] = obj.m[i][j];
		}
	}
}





/***********************************************************************************************/
//Bracket Operator overloaded.									/
//Used to make accept the rows and cols from user and make a matrix of the size of rows and cols/
/***********************************************************************************************/


int &Matrix::operator[](const int &num)
{	
	if(num < 0)
		return *this->m[0];
	if(num >= rows)
		return *this->m[rows - 1];
	//	if(num >= cols)
	//		return m[cols - 1];

	return *this->m[num];
}


/***********************************************************************************************/
//Sorted Matrix function									/
//Used to make accept the rows and cols from user and make a matrix of the size of rows and cols/
/***********************************************************************************************/
void Matrix::SortedMatrix()
{

	int num = 0;
	for(int i = 0; i < rows; i++)
	{
		//	A.m[i] = new int[cols];
		for(int j = 0; j < cols; j++)
		{
			m[i][j] = (num + 1);
			num++;
		}
	}
}




/***********************************************************************************************/
//Random Matrix function									/
//Used to make accept the rows and cols from user and make a matrix of the size of rows and cols/
/***********************************************************************************************/
void Matrix::RandMatrix()
{
	for(int i = 0; i < rows; i++)
	{
		for(int j = 0; j < cols; j++)
		{
			m[i][j] = rand() % 50 + 1;
		}
	}
}





/***********************************************************************************************/
//Sorted Matrix function									/
//Used to make accept the rows and cols from user and make a matrix of the size of rows and cols/
/***********************************************************************************************/
void Matrix::DescendingMatrix()
{
	int num = ((rows * rows) + (cols * cols));
	int num2 = 0;
	for(int i = 0; i < rows; i++)
	{
		for(int j = 0; j < cols; j++)
		{
			m[i][j] = (num - (num2 + 1));
			num2++;
		}
	}
}





/***********************************************************************************************/
//Add matrix function									/
//Used to make accept the rows and cols from user and make a matrix of the size of rows and cols/
/***********************************************************************************************/
void Matrix::DiagonalMatrix()
{	
	int l = 1;
	int j = 0;
	for(int i = 0; i < rows; i++)
	{
		m[i][j] = l;
		l++;
		j++;
	}
}



/***********************************************************************************************/
//Add matrix function									/
//Used to make accept the rows and cols from user and make a matrix of the size of rows and cols/
/***********************************************************************************************/
void Matrix::Uppertriangular()
{	
	int k = 1;
	for(int i = 0; i < rows; i++)
	{
		for(int j = 0; j < cols; j++)
		{
			if(j > i)
				m[i][j] = 0;
			else
				m[i][j] = k;

			k++;
		}	
	}
}






/***********************************************************************************************/
//Add matrix function									/
//Used to make accept the rows and cols from user and make a matrix of the size of rows and cols/
/***********************************************************************************************/
void Matrix::Lowertriangular()
{
	int k = 1;
	for(int i = 0; i < rows; i++)
	{
		for(int j = 0; j < cols; j++)
		{	
			if(i > j)
				m[i][j] = 0;
			else
				m[i][j] = k;

			k++;

		}
	}
}





/***********************************************************************************************/
//Add matrix function									/
//Used to make accept the rows and cols from user and make a matrix of the size of rows and cols/
/***********************************************************************************************/
void Matrix::IdentityMatrix()
{	
	int l = 1;
	int j = 0;
	for(int i = 0; i < rows; i++)
	{
		m[i][j] = l;
		j++;
	}
}





/***********************************************************************************************/
//Add matrix function									/
//Used to make accept the rows and cols from user and make a matrix of the size of rows and cols/
/***********************************************************************************************/
void Matrix::VectorMatrix(Matrix A, Matrix B)
{
	for(int i = 0; i < A.rows; i ++)
	{
		for(int j = 0; j < B.cols; j++)
		{
			for(int l = 0; l < B.rows; l++)
			{
				m[i][j] += A.m[i][l] * B.m[l][j];

			}
		}
	}
}	


/***********************************************************************************************/
//Add matrix function									/
//Used to make accept the rows and cols from user and make a matrix of the size of rows and cols/
/***********************************************************************************************/
void Matrix::addmatrix(Matrix A, Matrix B)
{
	for(int i = 0; i < A.rows; i ++)
	{
		for(int j = 0; j < B.cols; j++)
		{
			m[i][j] = A.m[i][j] + B.m[i][j];
		}
	}
}





/***********************************************************************************************/
//Sub matrix function									/
//Used to make accept the rows and cols from user and make a matrix of the size of rows and cols/
/***********************************************************************************************/
void Matrix::submatrix(Matrix A, Matrix B)
{
	for(int i = 0; i < A.rows; i ++)
	{
		for(int j = 0; j < B.cols; j++)
		{
			m[i][j] = A.m[i][j] - B.m[i][j];
		}
	}
}




/***********************************************************************************************/
//Multiply matrix function									/
//Used to make accept the rows and cols from user and make a matrix of the size of rows and cols/
/***********************************************************************************************/
void Matrix::multimatrix(Matrix A, Matrix B)
{
	for(int i = 0; i < A.rows; i ++)
	{
		for(int j = 0; j < B.cols; j++)
		{
			for(int l = 0; l < B.rows; l++)
			{
				m[i][j] += A.m[i][l] * B.m[l][j];

			}
		}
	}
}




/***********************************************************************************************/
//Equal Operator									/
//Used to make accept the rows and cols from user and make a matrix of the size of rows and cols/
/***********************************************************************************************/
const Matrix Matrix::operator=(const Matrix &right)
{
	//free space if it was in use.
	/*
	   for(int i = 0; i < rows; i++)
	   {
	   delete [] m[i];
	   }
	   delete [] m;


	   rows = right.rows;
	   cols = right.cols;
	   m = new int*[rows];
	   */
	for(int i = 0; i < rows; i++)
	{
		//	m[i] = new int[cols];
		for(int j = 0; j < cols; j++)
		{
			m[i][j] = right.m[i][j];
		}
	}
	return *this;
}




/***********************************************************************************************/
//Print matrix function									/
//Used to make accept the rows and cols from user and make a matrix of the size of rows and cols/
/***********************************************************************************************/
void Matrix::printMatrix()
{
	for(int i = 0; i < rows; i++)
	{
		printf("%s", "|");
		for(int j = 0; j < cols; j++)
		{
			printf("%d %*s", m[i][j], 2, " ");
		}
		printf("%s", "|");
		cout << endl;
	}
	cout << endl;
}


/***********************************************************************************************/
//Addition Operator									/
//Used to make accept the rows and cols from user and make a matrix of the size of rows and cols/
/***********************************************************************************************/
const Matrix Matrix::operator+(const Matrix &right)
{
	printf("%s\n", "in + operator");
	Matrix C(rows, right.cols);
	for(int i = 0; i < rows; i++)
	{
		for(int j = 0; j < cols; j++)
		{
			//for(int l = 0; l < right.rows; l++)
			//{
			C.m[i][j] = m[i][j] + right.m[i][j];
			//}	
		}
	}
	return C;
}



/***********************************************************************************************/
//Subtracting Operator									/
//Used to make accept the rows and cols from user and make a matrix of the size of rows and cols/
/***********************************************************************************************/
const Matrix Matrix::operator-(const Matrix &right)
{

	printf("%s\n", "in - operator");
	Matrix C(rows, right.cols);
	for(int i = 0; i < rows; i++)
	{
		for(int j = 0; j < cols; j++)
		{
			C.m[i][j] = m[i][j] - right.m[i][j];	
		}
	}
	return C;
}



/***********************************************************************************************/
//Multiply Operator									/
//Used to make accept the rows and cols from user and make a matrix of the size of rows and cols/
/***********************************************************************************************/
const Matrix Matrix::operator*(const Matrix &right)
{

	printf("%s\n", "in * operator");
	Matrix C(rows, right.cols);
	for(int i = 0; i < rows; i++)
	{
		for(int j = 0; j < cols; j++)
		{
			for(int l = 0; l < right.rows; l++)
			{
				C.m[i][j] += m[i][l] * right.m[l][j];
			}	
		}
	}
	return C;
}
