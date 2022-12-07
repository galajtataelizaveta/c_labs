#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void fill(int N, int A[N][N])
{
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            A[i][j] = rand() % 10;
}

void multiplication(int N, int A[N][N], int B[N][N], int C[N][N])
{
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
        {
            C[i][j] = 0;
            for (int k = 0; k < N; k++)
                C[i][j] += A[i][k] * B[k][j];
        }
}

void print_matrix(int N, int (*A)[N])
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
    printf("%3d ", A[i][j]);
    printf("\n");
    }
}

int main()
{
    int N;

    printf("Enter size matrix N > 0: \n");
    scanf("%d", &N);
    if (N == 0)
        printf("impossible to complete,N>0!\n");

    int A[N][N];
    int B[N][N];
    int C[N][N];

    fill(N, A);
    srand(time(NULL));
    fill(N, B);

    multiplication(N, A, B, C);

    printf("matrix A\n");
    print_matrix(N, A);
    printf("\nmatrix B\n");
    print_matrix(N, B);
    printf("\nthe result of multiplying\n");
    print_matrix(N, C);

    return 0;
}
