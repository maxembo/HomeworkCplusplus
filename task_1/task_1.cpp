#include <iostream>

const int rows = 5;
const int cols = 5;

int** matrix = new int* [rows];

void InitArray()
{
    for (int i = 0; i < rows; i++)
    {
        matrix[i] = new int[cols];
    }
}

void FillRandomMatrix()
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            matrix[i][j] = rand() % 10;
        }
    }
}

void SwappOddandEvenRows()
{
    int temp;
    for (int i = 1; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (i % 2 != 0)
            {
                temp = matrix[i - 1][j];
                matrix[i - 1][j] = matrix[i][j];
                matrix[i][j] = temp;
            }
        }
    }
}

void DeleteArray()
{
    for (int i = 0; i < rows;i++)
    {
        delete[] matrix[i];
    }
    delete[] matrix;
}

void PrintMatrix()
{

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
}

int main(int argc, char* argv[])
{
    InitArray();

    FillRandomMatrix();
    PrintMatrix();

    std::cout << "Result:" << std::endl;
    SwappOddandEvenRows();
    PrintMatrix();

    DeleteArray();
    return 0;
}
