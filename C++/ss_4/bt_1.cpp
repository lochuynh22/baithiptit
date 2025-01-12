#include <iostream>
#include <vector>

std::vector<std::vector<int>> convolve(const std::vector<std::vector<int>>& A, const std::vector<std::vector<int>>& B, int N, int M) {
    std::vector<std::vector<int>> result(N, std::vector<int>(N, 0));
    for (int i = 0; i < N; i += M) {
        for (int j = 0; j < N; j += M) {
            for (int k = 0; k < M; ++k) {
                for (int l = 0; l < M; ++l) {
                    result[i + k][j + l] += A[i + k][j + l] * B[k][l];
                }
            }
        }
    }
    return result;
}

int main() {
    int N, M;
    std::cin >> N;
    std::vector<std::vector<int>> A(N, std::vector<int>(N));
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            std::cin >> A[i][j];
        }
    }
    std::cin >> M;
    std::vector<std::vector<int>> B(M, std::vector<int>(M));
    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < M; ++j) {
            std::cin >> B[i][j];
        }
    }

    std::vector<std::vector<int>> result = convolve(A, B, N, M);

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            std::cout << result[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
