/**
 * @file main.cpp
 * @author Patrick Etcheverry
 * @brief 
 * @version 0.1
 * @date 29 octobre 2021
 * @remarks 
 *   - le rectangle est représenté par un enregistrement regroupant la hauteur et longueur du rectangle
 *   - l'affichage du rectangle, le calcul de son aire et le calcul déterminant si le rectangle est un carré
 *   sont confiés à des sous-programmes 
 * @warning L'affichage d'un rectangle de dimenion importante peut poser problème si le terminal n'est pas assez grand.
 */

#include <iostream>
using namespace std;

/**
 * @brief Définition du type Rectangle regroupant la longueur et la hauteur
 * 
 */
struct Rectangle
{
    unsigned int longueur; /** nombre de caractères pour représenter la longueur du rectangle */
    unsigned int hauteur;  /** nombre de caractères pour représenter la longueur du rectangle */
};

/**
 * @brief Affiche un rectangle à l'écran à l'aide d'un symbole donné
 * 
 * @param [in] rectangle Le rectangle à afficher
 * @param [in] symbole Le symbole utilisé pour afficher le rectangle
 */
void afficher(const Rectangle &rectangle, char symbole);

/**
 * @brief Détermine si le rectangle en paramètre est un carré ou pas
 * 
 * @param [in] rectangle 
 * @return true si le rectangle est un carré 
 * @return false si le rectangle n'est pas un carré
 */
bool estCarre(const Rectangle &rectangle);

/**
 * @brief Détermine le nombre de caractères utilisés pour représenter l'aire du rectangle
 * 
 * @param [in] rectangle Le rectangle pour lequel on doit calculer l'aire 
 * @return unsigned int Le nombre de caractères représentant l'aire du rectangle
 */
unsigned int aire(const Rectangle &rectangle);

/**
 * @brief Le programme principal permettant de saisir un rectangle
 * de l'afficher, de calculer son aire et de déterminer s'il s'agit d'un carré.
 * 
 */
int main(void)
{
    Rectangle rectangleSaisi; // Le rectangle saisi par l'utilisateur

    // (clavier) >> Saisir les dimensions du rectangle >> rectangleSaisi
    cout << "Longueur du rectangle : ";
    cin >> rectangleSaisi.longueur;
    cout << "Hauteur du rectangle : ";
    cin >> rectangleSaisi.hauteur;

    // rectangleSaisi >> Affiche le rectangle >> (écran)
    afficher(rectangleSaisi, '#');

    // rectangleSaisi >> Afficher l'aire >> (écran)
    cout << "Il a fallu " << aire(rectangleSaisi);
    cout << " caractères pour afficher ce rectangle." << endl;

    // rectangleSaisi >> Indiquer si le rectangle est un carré >> (écran)
    if (estCarre(rectangleSaisi))
    {
        cout << "Ce rectangle est particulier : il s'agit d'un carré." << endl;
    }

    return 0;
}

void afficher(const Rectangle &rectangle, char symbole)
{
    for (unsigned int ligneCourante = 1; ligneCourante <= rectangle.hauteur; ligneCourante++)
    {
        for (unsigned int colonneCourante = 1; colonneCourante <= rectangle.longueur; colonneCourante++)
        {
            cout << symbole;
        }
        cout << endl;
    }
}

bool estCarre(const Rectangle &rectangle)
{
    return rectangle.longueur == rectangle.hauteur;
}

unsigned int aire(const Rectangle &rectangle)
{
    return rectangle.longueur * rectangle.hauteur;
}
