#include <iostream>

void flipCoins(int N, int M, int S, int K, int L) {
    bool coins[N+M] = {0}; // Создаем массив для хранения монет

    for (int i = 0; i < K; i++) { // Переворачиваем монеты K раз
        for (int j = 0; j < N+M; j += S) { // Переворачиваем каждую S-ую монету
            coins[j] = !coins[j];
        }
    }

    int count_heads = 0;
    for (int i = 0; i < N+M; i++) { // Считаем количество монет гербами вверх
        if (coins[i]) {
            count_heads++;
        }
    }

    if (count_heads == L) { // Если количество гербов совпадает с L, выводим порядок монет
        for (int i = 0; i < N+M; i++) {
            std::cout << coins[i] << " "; // Выводим 1 для герба вверх и 0 для герба вниз
        }
        std::cout << std::endl;
    } else {
        std::cout << "Невозможно достичь заданного количества монет гербами вверх после " << K << " ходов." << std::endl;
    }
}

int main() {
    int N, M, S, K, L;
    std::cout << "Введите количество монет гербами вверх (N): ";
    std::cin >> N;
    std::cout << "Введите количество монет гербами вниз (M): ";
    std::cin >> M;
    std::cout << "Введите S: ";
    std::cin >> S;
    std::cout << "Введите K: ";
    std::cin >> K;
    std::cout << "Введите L: ";
    std::cin >> L;

    flipCoins(N, M, S, K, L);

    return 0;
}
