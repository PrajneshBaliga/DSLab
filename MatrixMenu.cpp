#include <stdio.h>

int main() {
    int A[10][10], B[10][10], Sum[10][10],Sub[10][10],T[10][10];
    int rows = 0, cols = 0, i, j, choice;
    int matricesCreated = 0; 

    do {
        printf("\n--- Matrix Menu System ---");
        printf("\n 1. Create/Input Two Matrices");
        printf("\n 2. Display Current Matrices");
        printf("\n 3. Perform Matrix Addition (A + B)");
        printf("\n 4. Perform Matrix Subtraction (A - B)");
        printf("\n 5. Perform Transpose");
        printf("\n 6. Exit");
        printf("\n Select an option: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                
                printf("Enter rows and columns: ");
                scanf("%d %d", &rows, &cols);

                printf("\nEnter elements for Matrix A:\n");
                for(i = 0; i < rows; i++) {
                    for(j = 0; j < cols; j++) {
                        printf("A[%d][%d]: ", i, j);
                        scanf("%d", &A[i][j]);
                    }
                }

                printf("\nEnter elements for Matrix B:\n");
                for(i = 0; i < rows; i++) {
                    for(j = 0; j < cols; j++) {
                        printf("B[%d][%d]: ", i, j);
                        scanf("%d", &B[i][j]);
                    }
                }
                matricesCreated = 1;
                printf("\nMatrices created successfully!");
                break;
                
            case 2:
                if (!matricesCreated) {
                    printf("\nNo matrices to display.");
                } else {
                    printf("\nMatrix A:\n");
                    for(i=0; i<rows; i++) {
                        for(j=0; j<cols; j++) printf("%d\t", A[i][j]);
                        printf("\n");
                    }
                    printf("\nMatrix B:\n");
                    for(i=0; i<rows; i++) {
                        for(j=0; j<cols; j++) printf("%d\t", B[i][j]);
                        printf("\n");
                    }
                }
                break;

            case 3:
                if (!matricesCreated) {
                    printf("\nError: Please create matrices first (Option 1).");
                } else {
                    printf("\nResult of Addition (A + B):\n");
                    for(i = 0; i < rows; i++) {
                        for(j = 0; j < cols; j++) {
                            Sum[i][j] = A[i][j] + B[i][j];
                            printf("%d\t", Sum[i][j]);
                        }
                        printf("\n");
                    }
                }
                break;
            case 4:
                if (!matricesCreated) {
                    printf("\nError: Please create matrices first (Option 1).");
                } else {
                    printf("\nResult of Addition (A + B):\n");
                    for(i = 0; i < rows; i++) {
                        for(j = 0; j < cols; j++) {
                            Sub[i][j] = A[i][j] - B[i][j];
                            printf("%d\t", Sub[i][j]);
                        }
                        printf("\n");
                    }
                }
                break;

            case 5:
            	if (!matricesCreated) {
                    printf("\nError: Please create matrices first (Option 1).");
                } else {
                	printf("\nresult of Transpose \n");
                	for (int i = 0; i < rows; i++)
                {
                    for (int j = 0; j < cols; j++)
                    {
                        T[i][j] = A[j][i];
                        printf("%d\t", T[i][j]);
                    }
                    printf("\n");
                }
				}
            	

            case 6:
                printf("Exiting program...");
                break;

            default:
                printf("Invalid choice! Try again.");
        }
    } while (choice != 6);

    return 0;
}
