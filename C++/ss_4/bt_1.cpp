#include <iostream>
using namespace std;

void multiplyMatrices(int N, int** A, int M, int** B, int** result) {
    for (int i = 0; i < N; i += M) {
        for (int j = 0; j < N; j += M) {
            for (int k = 0; k < M; k++) {
                for (int l = 0; l < M; l++) {
                    result[i + k][j + l] = A[i + k][j + l] * B[k][l];
                }
            }
        }
    }
}

int main() {
    int N, M;
    cin >> N;
    
    int** A = new int*[N];
    for (int i = 0; i < N; i++) {
        A[i] = new int[N];
        for (int j = 0; j < N; j++) {
            cin >> A[i][j];
        }
    }
    
    cin >> M;
    
    int** B = new int*[M];
    for (int i = 0; i < M; i++) {
        B[i] = new int[M];
        for (int j = 0; j < M; j++) {
            cin >> B[i][j];
        }
    }
    
    int** result = new int*[N];
    for (int i = 0; i < N; i++) {
        result[i] = new int[N];
    }
    
    multiplyMatrices(N, A, M, B, result);
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
    
    for (int i = 0; i < N; i++) {
        delete[] A[i];
        delete[] result[i];
    }
    delete[] A;
    delete[] result;
    
    for (int i = 0; i < M; i++) {
        delete[] B[i];
    }
    delete[] B;
    
    return 0;
}
