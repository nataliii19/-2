#include <iostream>  // ��� ��������-���������
#include <fstream>   // ��� ������ � �������

int main() {
    // ³������� ���������� ����� matrix.txt ��� �������
    std::ifstream inputFile("matrix.txt");
    if (!inputFile) {
        std::cerr << "�� ������� ������� ���� matrix.txt" << std::endl;
        return 1; // ���������� �������� � ��������
    }

    int matrix[4][4]; // ���������� ����� ��� ���������� ������� 4x4
    int sum = 0;      // ����������� ����� ��� ���������� ���� ��������

    // ���������� �������� ������� � �����
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            inputFile >> matrix[i][j]; // ���������� ������� �������� �������
            sum += matrix[i][j];       // ��������� �������� �� ����
        }
    }

    // �������� �����
    inputFile.close();

    // ��������� ������� �� ����� ��� ��������
    std::cout << "������� 4x4:\n";
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }

    // ��������� ���������� (���� �������� �������)
    std::cout << "���� ��� �������� �������: " << sum << std::endl;

    inputFile.close();
    std::cout << "���� ��� �������� �������: " << sum << std::endl;

    return 0; // ������ ���������� ��������
}
