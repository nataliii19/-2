#include <iostream>  // Для введення-виведення
#include <fstream>   // Для роботи з файлами

int main() {
    // Відкриття текстового файлу matrix.txt для читання
    std::ifstream inputFile("matrix.txt");
    if (!inputFile) {
        std::cerr << "Не вдалося відкрити файл matrix.txt" << std::endl;
        return 1; // Завершення програми з помилкою
    }

    int matrix[4][4]; // Двовимірний масив для збереження матриці 4x4
    int sum = 0;      // Ініціалізація змінної для обчислення суми елементів

    // Зчитування елементів матриці з файлу
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            inputFile >> matrix[i][j]; // Зчитування кожного елемента матриці
            sum += matrix[i][j];       // Додавання елемента до суми
        }
    }

    // Закриття файлу
    inputFile.close();

    // Виведення матриці на екран для перевірки
    std::cout << "Матриця 4x4:\n";
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }

    // Виведення результату (суми елементів матриці)
    std::cout << "Сума всіх елементів матриці: " << sum << std::endl;

    inputFile.close();
    std::cout << "Сума всіх елементів матриці: " << sum << std::endl;

    return 0; // Успішне завершення програми
}
