#include <iostream>
#include "matrix.h"
#include <stdlib.h>
#include <chrono>
#include <cmath>
#include <time.h>

//using namespace std;


int main()
{
	int choice;
	do{
		printf("%s\n", "Menu Option");

		printf("%s\n", "input what type of matrix operation you would like to do");

		printf("%s\n", "1 for addition, 2 for subtraction, 3 for multiplication, and 4 to go to next section of program: ");
		std::cin >> choice;
		if(choice == 1)
		{
			printf("%s\n", "Addition matrix");
			int row1;
			int row2;
			int col1;
			int col2;
			int matchoice;
			int mat2choice;
			printf("%s", "input the size of the row of your first matrix: ");
			std::cin >> row1;
			printf("%s", "input the size of the column of your first matrix: ");
			std::cin >> col1;
			Matrix A(row1, col1);
			printf("%s", "input 1 for sorted matrix, 2 for rand matrix, 3 for Descending matrix: ");
			std::cin >> matchoice;
			switch(matchoice)
			{
				case 1: A.SortedMatrix();
					break;
				case 2: A.RandMatrix();
					break;
				case 3: A.DescendingMatrix();
			}
			printf("%s\n", "This is your first matrix");
			A.printMatrix();
			std::cout << std::endl;


			printf("%s", "input the size of the row of your second matrix: ");
			std::cin >> row2;
			printf("%s", "input the size of the column of your second matrix: ");
			std::cin >> col2;
			bool notsame = false;
			while(!notsame){
				if(row2 != row1 && col2 != col1)
				{
					printf("%s\n", "Both rows and columns has to be equal for both matrices, enter same as first matrix: ");

					printf("%s", "input the size of the row of your second matrix: ");
					std::cin >> row2;
					printf("%s", "input the size of the column of your second matrix: ");
					std::cin >> col2;
				}else{
					notsame = true;
				}
			}
			Matrix B(row2, col2);
			printf("%s", "input 1 for sorted matrix, 2 for rand matrix, 3 for Descending matrix: ");
			std::cin >> mat2choice;
			switch(mat2choice)
			{
				case 1: B.SortedMatrix();
					break;
				case 2: B.RandMatrix();
					break;
				case 3: B.DescendingMatrix();
			}
			printf("%s\n", "This is your second matrix");
			B.printMatrix();
			std::cout << std::endl;
			Matrix C(row1, col1);
			auto start = std::chrono::system_clock::now();
			C = A + B;
			auto end = std::chrono::system_clock::now();
			std::chrono::duration<double> elapsed_seconds = end-start;
			std::time_t end_time = std::chrono::system_clock::to_time_t(end);
			std::cout << "finished at " << std::ctime(&end_time) << "elapsed time: " << elapsed_seconds.count() << "s\n";
			//C = A + B;
			//C.addmatrix(A,B);
			printf("%s\n", "This is your final matrix");
			C.printMatrix();
		}

		if(choice == 2)
		{

			printf("%s\n", "Subtraction matrix");
			int row1;
			int row2;
			int col1;
			int col2;
			int matchoice;
			int mat2choice;
			printf("%s", "input the size of the row of your first matrix: ");
			std::cin >> row1;
			printf("%s", "input the size of the column of your first matrix: ");
			std::cin >> col1;
			Matrix A(row1, col1);
			printf("%s", "input 1 for sorted matrix, 2 for rand matrix, 3 for Descending matrix: ");
			std::cin >> matchoice;
			switch(matchoice)
			{
				case 1: A.SortedMatrix();
					break;
				case 2: A.RandMatrix();
					break;
				case 3: A.DescendingMatrix();
			}
			printf("%s\n", "This is your first matrix");
			A.printMatrix();
			std::cout << std::endl;


			printf("%s", "input the size of the row of your second matrix: ");
			std::cin >> row2;
			printf("%s", "input the size of the column of your second matrix: ");
			std::cin >> col2;
			bool notsame = false;
			while(!notsame){
				if(row2 != row1 || col2 != col1)
				{
					printf("%s\n", "Both rows and columns has to be equal for both matrices, enter same as first matrix: ");

					printf("%s", "input the size of the row of your second matrix: ");
					std::cin >> row2;
					printf("%s", "input the size of the column of your second matrix: ");
					std::cin >> col2;
				}else{
					notsame = true;
				}
			}
			Matrix B(row2, col2);
			printf("%s", "input 1 for sorted matrix, 2 for rand matrix, 3 for Descending matrix: ");
			std::cin >> mat2choice;
			switch(mat2choice)
			{
				case 1: B.SortedMatrix();
					break;
				case 2: B.RandMatrix();
					break;
				case 3: B.DescendingMatrix();
			}
			printf("%s\n", "This is your second matrix");
			B.printMatrix();
			std::cout << std::endl;
			Matrix C(row1, col1);
			auto start = std::chrono::system_clock::now();
			C = A - B;
			auto end = std::chrono::system_clock::now();
			std::chrono::duration<double> elapsed_seconds = end-start;
			std::time_t end_time = std::chrono::system_clock::to_time_t(end);
			std::cout << "finished at " << std::ctime(&end_time) << "elapsed time: " << elapsed_seconds.count() << "s\n";
			printf("%s\n", "This is your final matrix");
			C.printMatrix();
		}

		if(choice == 3)
		{
			printf("%s\n", "Multiplication matrix");
			int row1;
			int row2;
			int col1;
			int col2;
			int matchoice;
			int mat2choice;
			printf("%s", "input the size of the row of your first matrix: ");
			std::cin >> row1;
			printf("%s", "input the size of the column of your first matrix: ");
			std::cin >> col1;
			Matrix A(row1, col1);
			printf("%s", "input 1 for sorted matrix, 2 for rand matrix, 3 for Descending matrix: ");
			std::cin >> matchoice;
			switch(matchoice)
			{
				case 1: A.SortedMatrix();
					break;
				case 2: A.RandMatrix();
					break;
				case 3: A.DescendingMatrix();
			}
			printf("%s\n", "This is your first matrix");
			A.printMatrix();
			std::cout << std::endl;


			printf("%s", "input the size of the row of your second matrix: ");
			std::cin >> row2;
			printf("%s", "input the size of the column of your second matrix: ");
			std::cin >> col2;
			bool notsame = false;
			while(!notsame){
				if(col1 != row2)
				{
					printf("%s\n", "invalid entry, the number of column of the first matrix needs to be same as number of rows of second matrix ");

					printf("%s", "input the size of the row of your second matrix: ");
					std::cin >> row2;
					printf("%s", "input the size of the column of your second matrix: ");
					std::cin >> col2;
				}else{
					notsame = true;
				}
			}

			Matrix B(row2, col2);
			printf("%s", "input 1 for sorted matrix, 2 for rand matrix, 3 for Descending matrix: ");
			std::cin >> mat2choice;
			switch(mat2choice)
			{
				case 1: B.SortedMatrix();
					break;
				case 2: B.RandMatrix();
					break;
				case 3: B.DescendingMatrix();
			}
			printf("%s\n", "This is your second matrix");
			B.printMatrix();
			std::cout << std::endl;
			Matrix C(row1, col2);	
			auto start = std::chrono::system_clock::now();
			C = A * B;
			auto end = std::chrono::system_clock::now();
			std::chrono::duration<double> elapsed_seconds = end-start;
			std::time_t end_time = std::chrono::system_clock::to_time_t(end);
			std::cout << "finished at " << std::ctime(&end_time) << "elapsed time: " << elapsed_seconds.count() << "s\n";
			printf("%s\n", "This is your final matrix");
			//C.printMatrix();
		}

	}while(choice != 4);

	int Harnesschoice;
	do{
		printf("%s\n", "Test Harness Option");

		printf("%s\n", "input what type of matrix operation you would like to do");

		printf("%s", "1 for diagonal matrices, 2 for Upper triagular matrices, 3 for Lower triagular matrices, 4 for Identity matrices, 5 for Vector and 6 to end program.: ");
		std::cin >> Harnesschoice;

		if(Harnesschoice == 1)
		{	int row;
			int col;
			printf("%s\n", "Diagonal Matrices");
			printf("%s", "input the size or the row: ");
			std::cin >> row;
			printf("%s", "input the size of the column: ");
			std::cin >> col;
			Matrix A(row, col);
			A.DiagonalMatrix();
			A.printMatrix();
		}

		if(Harnesschoice == 2)
		{	int row;
			int col;
			printf("%s\n", "Upper triangular Matrices");
			printf("%s", "input the size or the row: ");
			std::cin >> row;
			printf("%s", "input the size of the column: ");
			std::cin >> col;
			Matrix A(row, col);
			A.Uppertriangular();
			A.printMatrix();
		}

		if(Harnesschoice == 3)
		{	int row;
			int col;
			printf("%s\n", "Lower triangular Matrices");
			printf("%s", "input the size or the row: ");
			std::cin >> row;
			printf("%s", "input the size of the column: ");
			std::cin >> col;
			Matrix A(row, col);
			A.Lowertriangular();
			A.printMatrix();
		}

		if(Harnesschoice == 4)
		{	int row;
			int col;
			printf("%s\n", "Identity Matrices");
			printf("%s", "input the size or the row: ");
			std::cin >> row;
			printf("%s", "input the size of the column: ");
			std::cin >> col;
			Matrix A(row, col);
			A.IdentityMatrix();
			A.printMatrix();
		}

		if(Harnesschoice == 5)
		{	int row1;
			int col1;
			int row2;
			int col2;
			int matchoice;
			int mat2choice;
			printf("%s\n", "Vector Matrices");
			printf("%s", "input the size of the row of your vector: ");
			std::cin >> row1;
			printf("%s", "input the size of the column of your vector: ");
			std::cin >> col1;
			Matrix A(row1, col1);
			//A.VectorMatrix();
			//A.printMatrix();
			printf("%s", "input 1 for sorted matrix, 2 for rand matrix, 3 for Descending matrix: ");
			std::cin >> matchoice;
			switch(matchoice)
			{
				case 1: A.SortedMatrix();
					break;
				case 2: A.RandMatrix();
					break;
				case 3: A.DescendingMatrix();
			}
			printf("%s\n", "This is your first Vector");
			A.printMatrix();
			std::cout << std::endl;


			printf("%s", "input the size of the row of your matrix reminder it needs same as the vector's row.: ");
			std::cin >> row2;
			printf("%s", "input the size of the column of your matrix reminder column needs to be 1: ");
			std::cin >> col2;


			bool notsame = false;
			while(!notsame){
				if(col1 != row2)
				{
					printf("%s\n", "invalid entry, the number of column of the first matrix needs to be same as number of rows of second matrix ");

					printf("%s", "input the size of the row of your second matrix: ");
					std::cin >> row2;
					printf("%s", "input the size of the column of your second matrix: ");
					std::cin >> col2;
				}else{
					notsame = true;
				}
			}

			Matrix B(row2, col2);
			printf("%s", "input 1 for sorted matrix, 2 for rand matrix, 3 for Descending matrix: ");
			std::cin >> mat2choice;
			switch(mat2choice)
			{
				case 1: B.SortedMatrix();
					break;
				case 2: B.RandMatrix();
					break;
				case 3: B.DescendingMatrix();
			}
			printf("%s\n", "This is your matrix");
			B.printMatrix();
			std::cout << std::endl;
			Matrix C(row2, col2);
			C.VectorMatrix(A, B);
			printf("%s\n", "This is your vector after multiplication");
			C.printMatrix();
		}


	}while(Harnesschoice != 6);

	return 0;
}
