#include "mainwindow.h" // Inclusion de l'en-tête "mainwindow.h" pour accéder à la classe MainWindow, qui représente la fenêtre principale de l'application
#include <QApplication> // Inclusion de la bibliothèque QApplication de Qt, nécessaire pour gérer les événements de l'application

int main(int argc, char *argv[])
{
     // Création d'une instance de QApplication, qui gère le cycle de vie de l'application et les événements
    QApplication a(argc, argv);//argc et argv permettent de récupérer les arguments de ligne de commande 
    
    MainWindow w; // Instanciation de la fenêtre principale, qui est de type MainWindow
    
    w.setWindowTitle("Projet Bus Can"); // Définition du titre de la fenêtre principale, affiché dans la barre de titre de l'interface
    w.setWindowFlags(w.windowFlags() & ~Qt::WindowMaximizeButtonHint); // Modification des propriétés de la fenêtre pour désactiver le bouton de maximisation  
    w.show(); // Affichage de la fenêtre principale pour rendre l'application visible à l'écran
    
    return a.exec(); // Lancement de la boucle d'événements de l'application Qt, en attendant les actions de l'utilisateur et en gérant les événements
}
