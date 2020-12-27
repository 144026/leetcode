void rotate(int** matrix, int matrixSize, int* matrixColSize){ 
    for(int i=0; i<matrixSize-i; i++ ){
        for(int j=i; j<matrixSize-1-i; j++){ (注意每行最后一个元素不应该被旋转)
            // a b
            // d c
			//距首行的偏移，变为距最后一列的偏移；距首列的偏移，变成距首行的偏移
            matrix[i][j]^=matrix[j][matrixSize-1-i];
            matrix[j][matrixSize-1-i]^=matrix[i][j];
            matrix[i][j]^=matrix[j][matrixSize-1-i];
            // b a
            // d c
            matrix[i][j]^=matrix[matrixSize-1-i][matrixSize-1-j];
            matrix[matrixSize-1-i][matrixSize-1-j]^=matrix[i][j];
            matrix[i][j]^=matrix[matrixSize-1-i][matrixSize-1-j];
            // c a
            // d b
            matrix[i][j]^=matrix[matrixSize-1-j][i];
            matrix[matrixSize-1-j][i]^=matrix[i][j];
            matrix[i][j]^=matrix[matrixSize-1-j][i];
            // d a
            // c b
        }
    }
}
