
/*
1. Row Matrix (1 row, multiple columns)
int rowMatrix[1][3] = {{1, 2, 3}};

2. Column Matrix (multiple rows, 1 column)
int columnMatrix[3][1] = {
    {1},
    {2},
    {3}
};

3. Zero Matrix (all elements are 0)
int zeroMatrix[3][3] = {
    {0, 0, 0},
    {0, 0, 0},
    {0, 0, 0}
};

// 4. Square Matrix (rows == columns)
int squareMatrix[3][3] = {
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9}
};

// 5. Diagonal Matrix (non-diagonal elements are 0)
int diagonalMatrix[3][3] = {
    {1, 0, 0},
    {0, 2, 0},
    {0, 0, 3}
};

// 6. Primary Diagonal Elements
int primaryDiagonal[3] = {squareMatrix[0][0], squareMatrix[1][1], squareMatrix[2][2]};

// 7. Secondary Diagonal Elements
int secondaryDiagonal[3] = {squareMatrix[0][2], squareMatrix[1][1], squareMatrix[2][0]};

// 8. Scalar Matrix (diagonal matrix with same diagonal values)
int scalarMatrix[3][3] = {
    {5, 0, 0},
    {0, 5, 0},
    {0, 0, 5}
};

// 9. Unit Matrix (identity matrix)
int unitMatrix[3][3] = {
    {1, 0, 0},
    {0, 1, 0},
    {0, 0, 1}
};


*/