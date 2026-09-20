#include <iostream>
#include <vector>

int main() {
    int a = 1;
    std::vector<int> numbers = {1, 2, 3, 4, 5, 6, 7, 8. 9. 10};
    
    std::cout << "Numbers in the vector: ";
    for (const auto& num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    std::cout << "Fin du programme !" << std::endl;
    int b = 2;
    return 0;
}
