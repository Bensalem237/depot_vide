#include <iostream>
#include <cmath>

int main() {
    int x, n1, n2;
    std::cout << "Hello World !"  << std::endl;
    std::cout << "Entrez un nombre : ";
    std::cin >> x;
    std::cout << "Sa racine carrée est " << std::sqrt(x) << std::endl;
    std::cout << "C'est bien ça !" << std::endl;
    std::cout << "Maintenant, entrez deux entiers : ";
    std::cin >> n1 >> n2;
    std::cout << "Leur somme est " << n1 + n2 << std::endl;

    return 0;
}

