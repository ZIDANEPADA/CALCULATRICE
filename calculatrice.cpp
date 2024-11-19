#include <iostream>
#include <cmath>

// Définition des opérations arithmétiques
void addition(double a, double b) {
    std::cout << "Résultat : " << a + b << std::endl;
}

void soustraction(double a, double b) {
    std::cout << "Résultat : " << a - b << std::endl;
}

void multiplication(double a, double b) {
    std::cout << "Résultat : " << a * b << std::endl;
}

void division(double a, double b) {
    if (b != 0) {
        std::cout << "Résultat : " << a / b << std::endl;
    } else {
        std::cout << "Erreur : division par zéro !" << std::endl;
    }
}

void puissance(double a, double b) {
    std::cout << "Résultat : " << pow(a, b) << std::endl;
}
// Définition des fonctions trigonométriques
void sinus(double a) {
    std::cout << "Résultat : " << sin(a) << std::endl;
}

void cosinus(double a) {
    std::cout << "Résultat : " << cos(a) << std::endl;
}

void tangente(double a) {
    std::cout << "Résultat : " << tan(a) << std::endl;
}

// Définition des fonctions logarithmiques
void logarithme(double a) {
    if (a > 0) {
        std::cout << "Résultat : " << log(a) << std::endl;
    } else {
        std::cout << "Erreur : logarithme d'un nombre non positif !" << std::endl;
    }
}

void logarithme10(double a) {
    if (a > 0) {
        std::cout << "Résultat : " << log10(a) << std::endl;
    } else {
        std::cout << "Erreur : logarithme d'un nombre non positif !" << std::endl;
    }
}

// Définition des fonctions de combinaison
void factorielle(double a) {
    double resultat = 1;
    for (int i = 1; i <= a; i++) {
        resultat *= i;
    }
    std::cout << "Résultat : " << resultat << std::endl;
}

void combinaison(double a, double b) {
    double resultat = 1;
    for (int i = 1; i <= b; i++) {
        resultat *= (a - i + 1) / i;
    }
    std::cout << "Résultat : " << resultat << std::endl;
}

// Définition du type pointeur de fonction
typedef void (*PointeurFonction)(double, double);
typedef void (*PointeurFonctionUnArgument)(double);

// Tableau des opérations
PointeurFonction operations[] = {addition, soustraction, multiplication, division, puissance};
PointeurFonctionUnArgument operationsUnArgument[] = {sinus, cosinus, tangente, logarithme, logarithme10, factorielle};
PointeurFonction operationsCombinaison[] = {combinaison};

// Fonction principale
int main() {
    int choix;
    double a, b;

    std::cout << "Calculatrice avancée" << std::endl;
    std::cout << "-------------------" << std::endl;
std::cout << "1. Addition" << std::endl;
    std::cout << "2. Soustraction" << std::endl;
    std::cout << "3. Multiplication" << std::endl;
    std::cout << "4. Division" << std::endl;
    std::cout << "5. Puissance" << std::endl;
    std::cout << "6. Sinus" << std::endl;
    std::cout << "7. Cosinus" << std::endl;
    std::cout << "8. Tangente" << std::endl;
    std::cout << "9. Logarithme" << std::endl;
    std::cout << "10. Logarithme 10" << std::endl;
    std::cout << "11. Factorielle" << std::endl;
    std::cout << "12. Combinaison" << std::endl;
    std::cout << "Choix : ";
    std::cin >> choix;

    if (choix >= 1 && choix <= 5) {
        std::cout << "Entrez le premier nombre : ";
        std::cin >> a;
        std::cout << "Entrez le deuxième nombre : ";
        std::cin >> b;
        operations[choix - 1](a, b);
    } else if (choix >= 6 && choix <= 10) {
        std::cout << "Entrez un nombre : ";
        std::cin >> a;
        operationsUnArgument[choix - 6](a);
    } else if (choix == 11) {
        std::cout << "Entrez un nombre : ";
        std::cin >> a;
        factorielle(a);
    } else if (choix == 12) {
        std::cout << "Entrez le premier nombre : ";
        std::cin >> a;
        std::cout << "Entrez le deuxième nombre : ";
        std::cin >> b;
        combinaison(a, b);
    } else {
        std::cout << "Erreur : choix invalide !" << std::endl;
    }

    return 0;
}

