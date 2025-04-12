#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <algorithm>

int maxScoreWords(const std::vector<std::string>& words, 
                 const std::vector<char>& letters, 
                 const std::vector<int>& score) {
    // Подсчет доступных букв
    std::unordered_map<char, int> letterCount;
    for (char letter : letters) {
        letterCount[letter]++;
    }

    int maxScore = 0;

    // Функция для расчета стоимости слова
    auto calculateScore = [&](const std::string& word) {
        int totalScore = 0;
        std::unordered_map<char, int> wordCount;

        // Подсчет букв в слове
        for (char ch : word) {
            wordCount[ch]++;
            if (wordCount[ch] > letterCount[ch]) {
                return -1;
            }
            totalScore += score[ch - 'a']; 
        }
        return totalScore;
    };

    // Перебираем все слова и вычисляем максимальный счет
    for (const std::string& word : words) {
        int wordScore = calculateScore(word);
        if (wordScore != -1) {
            maxScore = std::max(maxScore, wordScore);
        }
    }

    return maxScore;
}

int main() {
    std::vector<std::string> words = {"math", "science", "history", "art"};
    std::vector<char> letters = {'m', 'a', 't', 'h', 's', 'c', 'i', 'e', 'n', 'c', 'e'};
    std::vector<int> score(26, 0);
    
    score['m' - 'a'] = 5;
    score['a' - 'a'] = 1;
    score['t' - 'a'] = 2;
    score['h' - 'a'] = 4;
    score['s' - 'a'] = 3;
    score['c' - 'a'] = 2;
    score['i' - 'a'] = 1;
    score['e' - 'a'] = 1;

    int result = maxScoreWords(words, letters, score);
    std::cout << "Максимальный счет: " << result << std::endl;

    return 0;
}
