#ifndef MATRIX_H
#define MATRIX_H


class Matrix{

	private:
		int **m;
		int rows;
		int cols;

	public:
		Matrix(int, int);
		~Matrix();
		const Matrix operator+(const Matrix &right);
		const Matrix operator-(const Matrix &right);
		const Matrix operator*(const Matrix &right);
		void addmatrix(Matrix, Matrix);
		void submatrix(Matrix, Matrix);
		void multimatrix(Matrix, Matrix);
		void SortedMatrix();
		void RandMatrix();
		void DescendingMatrix();
		void DuplicateMatrix(int, int);
		void BackwardsMatrix(int, int);
		void DiagonalMatrix();
		void Uppertriangular();
		void Lowertriangular();
		void IdentityMatrix();
		void VectorMatrix(Matrix, Matrix);
		Matrix(const Matrix &obj);
		const Matrix operator=(const Matrix &right);
		int &operator[](const int &);
		void printMatrix();
};

#endif
