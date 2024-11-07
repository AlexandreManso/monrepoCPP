#include <iostream>
int main(int argc, char **argv)
{
    /*
    // on peut utiliser 'using namespace std' pour supprimer les std mais problemes d'ecrasement de fonctions de la librairie standard
    std::cout << "Hello World" << std::endl;
    int count {0};

    while (count < 10)
    {
        if (count == 3)
        {
            count++;
            continue;
        }
        std::cout << count << std::endl;
        count++;
    }

    for(int c = 0; c<10; c++) // comment on initialise, condition d'arret, comment on incrémente la variable
    {
        std::cout << "c = "<<c<<std::endl;
    }
    std::string message {"coucou"};
    for( int i = 0; i<message.size(); i++)
    {
        std::cout << message[i] << "-";
    }
    std::cout << std::endl;

    for(auto c : message) //pour parcourir les elements d'une liste 
    {
        std::cout << c << " - ";
    }
    std::cout << std::endl;
    */
    // float longueur;
    // float largeur;
    // std::cout << "Saisir la longueur (m):";
    // std::cin >> longueur;
    // std::cout<< "Saisir la largeur (m)";
    // std::cin >> largeur;
    // auto S = longueur*largeur;
    // auto C = 2*(longueur+largeur);

    // std::cout<<"La surface est :" << S << "m2" << std::endl;
    // std::cout<<"Le perimetre est :" << C <<"m"<< std::endl;

    // exo 3

    // float Somme = 0;
    // for(int i; i<5; i++)
    // {
    //     int a;
    //     std::cout <<"rentrez le" << i+1 << "eme entier :";
    //     std::cin >> a ;
    //     std::cout << std::endl;
    //     Somme += a;
    // }
    // Somme = Somme/5;
    // std::cout << "la valeur moyenne est :" << Somme << std::endl;

    //exo1 structure de controle
    // int N;
    // long int Sig = 0;
    // std::cout<< "rentrez un entier N: ";
    // std::cin>> N ;
    // std::cout<< std::endl;
    // for(int i; i<N; i++)
    // {
    //     Sig += i+1;
    // }
    // std::cout<<"la somme des N premiers entiers est :" << Sig<<std::endl;

    // exo 4 : suite Hongroise:
    int N;
    std::cout << "rentrez un entier N";
    std::cin >> N;
    std::cout<<std::endl;
    float u = 5;
    for(int i; i<N; i++)
    {
        std::cout <<"u("<<i<<") =" << u << std::endl;
        if((i+1)%2 == 0)
        {
            u = u/2;
        }
        else
        {
            u = 3*u +1;
        }
    }

    return 0;
}
