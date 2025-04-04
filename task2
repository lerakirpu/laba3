#include <iostream>
#include <string>

bool isPalindrome(const std::string& s) {
    std::string cleaned;
    // Удаляем все пробелы из строки
    for (char c : s) {
        if (c != ' ') {
            cleaned += c;
        }
    }
    // Проверяем, является ли очищенная строка палиндромом
    int left = 0;
    int right = cleaned.size() - 1;
    while (left < right) {
        if (cleaned[left] != cleaned[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

int main() {
    std::string input;
    std::cout << "Введите строку для проверки на палиндром: ";
    std::getline(std::cin, input); // Считываем всю строку, включая пробелы

    if (isPalindrome(input)) {
        std::cout << "Строка является палиндромом." << std::endl;
    } else {
        std::cout << "Строка не является палиндромом." << std::endl;
    }

    return 0;
}
