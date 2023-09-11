#include <iostream>

void InitializeMatrix(int** matrix, int size, int value) {
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            matrix[i][j] = value;
        }
    }
}

void InitializeMatrix(double** matrix, int size, double value) {
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            matrix[i][j] = value;
        }
    }
}

void InitializeMatrix(char** matrix, int size, char value) {
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            matrix[i][j] = value;
        }
    }
}

void PrintMatrix(int** matrix, int size) {
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

void PrintMatrix(double** matrix, int size) {
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

void PrintMatrix(char** matrix, int size) {
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

int FindMaxOnDiagonal(int** matrix, int size) {
    int maxElement = matrix[0][0];
    for (int i = 1; i < size; ++i) {
        if (matrix[i][i] > maxElement) {
            maxElement = matrix[i][i];
        }
    }
    return maxElement;
}

double FindMaxOnDiagonal(double** matrix, int size) {
    double maxElement = matrix[0][0];
    for (int i = 1; i < size; ++i) {
        if (matrix[i][i] > maxElement) {
            maxElement = matrix[i][i];
        }
    }
    return maxElement;
}

char FindMaxOnDiagonal(char** matrix, int size) {
    char maxElement = matrix[0][0];
    for (int i = 1; i < size; ++i) {
        if (matrix[i][i] > maxElement) {
            maxElement = matrix[i][i];
        }
    }
    return maxElement;
}
