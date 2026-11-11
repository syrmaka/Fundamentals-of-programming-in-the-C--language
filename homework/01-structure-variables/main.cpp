#include <iostream>

int main() {
    // Переменные по заданию: все int, готовых порций изначально 0
    int portions = 3;          // количество порций по рецепту
    int cookingTime = 7;       // время приготовления в минутах
    int readyPortions = 0;     // сколько порций уже готово (в начале 0)

    std::cout << "Recipe: Lemon mint lemonade" << std::endl;
    std::cout << "Portions: " << portions << std::endl;
    std::cout << "Time: " << cookingTime << " min" << std::endl;
    std::cout << "Ready before: " << readyPortions << std::endl;

    std::cout << "Ingredients:" << std::endl;
    std::cout << "- Lemon" << std::endl;
    std::cout << "- Mint leaves" << std::endl;
    std::cout << "- Sugar" << std::endl;
    std::cout << "- Water" << std::endl;

    std::cout << "Steps:" << std::endl;
    std::cout << "1. Wash and slice the lemon." << std::endl;
    std::cout << "2. Add mint and sugar to the water." << std::endl;
    std::cout << "3. Stir well and chill before serving." << std::endl;

    readyPortions = portions;
    std::cout << "Ready after: " << readyPortions << std::endl;

    return 0;
}