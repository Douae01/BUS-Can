# Gestion de Capteurs via Bus CAN

## Description du Projet

Ce projet vise à récupérer les informations de plusieurs capteurs connectés à trois cartes microcontrôleurs ST-Nucleo, puis à transmettre ces données via un bus CAN pour les afficher sur une interface utilisateur (IHM) PC développée en Qt. L'IHM permet également de contrôler certains éléments du système.

## Objectifs du Projet

1. **Récupération et Affichage des Données des Capteurs** : Les données de tous les capteurs sont récupérées et affichées simultanément sur l’IHM du PC Host.
2. **Communication Périodique** : Les échanges entre l’IHM et les cartes se font de manière périodique pour assurer une mise à jour en temps réel des données.
3. **Utilisation de Widgets** : Les données des capteurs, telles que la pression, la luminosité, la distance, et la vitesse du vent, sont affichées à l'aide de widgets sur l'IHM.
4. **Représentation Graphique de l'Orientation** : L'orientation de la carte IMU est visualisée graphiquement avec OpenGL sur l’IHM.
5. **Algorithme d’Orientation** : Mise en œuvre de l’algorithme de Madgwick (ou équivalent) pour un traitement précis de l'orientation de l'IMU.
6. **Traitement des Données Environnementales** : Les données de pression, température, et humidité sont récupérées, traitées et affichées.
7. **Contrôle du Moteur** : Le moteur est contrôlable depuis l’IHM et démarre automatiquement au-delà d'une certaine vitesse de vent.
8. **Commutation de Capteurs** : L'IHM permet de basculer entre la mesure de luminosité et celle de distance.

## Composants du Projet

### 1. Première Carte Microcontrôleur
- **Servomoteur Dynamixel XL-430** : Contrôle du moteur via des trames RS232. Le moteur peut être démarré automatiquement lorsque la vitesse du vent dépasse un certain seuil.
- **Anémomètre SOMFY** : Mesure de la vitesse du vent, avec transmission des données via un compteur d'impulsions.

### 2. Deuxième Carte Microcontrôleur
- **Capteur de Luminosité et Distance (ST VL6180X)** : Le capteur permet de basculer entre la mesure de luminosité et de distance via un bouton dans l’IHM.
- **Capteur de Pression (LPS22HB) et Capteur d'Humidité/Température (HTS221)** : Ces capteurs récupèrent les données environnementales et communiquent via le bus I2C.

### 3. Troisième Carte Microcontrôleur
- **Capteur IMU (MPU9250)** : Accéléromètre et gyroscope 9 axes pour mesurer les mouvements et l'orientation. Les données sont transmises en temps réel sur l’IHM, avec une visualisation graphique OpenGL de l'orientation de la carte.

## Architecture de Communication

Les cartes ST-Nucleo sont reliées entre elles et à l'ordinateur via un bus CAN. Les capteurs, qui ne peuvent pas émettre directement sur le bus, envoient leurs données aux microcontrôleurs, qui les encapsulent dans des trames CAN pour la transmission vers le PC.

- **CAN Bus** : Transport des données entre les microcontrôleurs et le PC Host.
- **RS232** : Communication avec le servomoteur Dynamixel pour le contrôle de la vitesse.
- **I2C** : Interface de communication entre chaque carte et ses capteurs (pour les données de pression, température, humidité, luminosité, distance, etc.).

## Interface Utilisateur (IHM)

L'IHM, développée en Qt, permet les fonctionnalités suivantes :

- **Affichage en Temps Réel** : Visualisation simultanée des données de tous les capteurs.
- **Widgets** : Utilisation de widgets pour une représentation intuitive des données (pression, luminosité, distance, vitesse du vent).
- **Graphique OpenGL** : Affichage en 3D de l'orientation du capteur IMU grâce à l'algorithme de Madgwick.
- **Contrôle des Capteurs et du Moteur** : Interface pour démarrer/arrêter le moteur et basculer entre les mesures de luminosité et de distance.

## Instructions de Lancement et Débogage

### Étapes de Clonage du Dépôt et Navigation dans les Dossiers

1. **Cloner le Dépôt et Accéder au Répertoire** :
   ```bash
   git clone https://github.com/Douae01/BUS-Can.git
   cd BUS-Can

### Étapes pour Programmer et Déboguer chaque Carte

2. **Configuration des Cartes dans STM32CubeIDE** : (Accédez au dossier WORKSPACE_RESCAPT_STM32CUBEIDE et ouvrez ce dossier comme espace de travail dans STM32CubeIDE)
   - Pour chaque carte, modifiez le code pour activer uniquement le capteur correspondant en définissant `1` pour la macro associée au capteur et `0` pour les autres.
   - Par exemple, pour configurer la carte pour l'IMU (MPU9250), utilisez la configuration suivante dans le code :
     ```c
     #define VL6180X_PRESS_HUM_TEMP 0
     #define MPU9250 1
     #define DYN_ANEMO 0
     ```
   - Après avoir configuré la carte, déboguez-la dans STM32CubeIDE. Une fois le débogage terminé, retirez le câble USB, puis connectez-le à une autre carte.
   - Répétez ce processus pour chaque carte, en ajustant la position du `1` dans les définitions en fonction du capteur.

### Configuration du Bus CAN et Visualisation des Trames

3. **Configuration du Bus CAN** :
   - Configurez le bus CAN pour la communication entre les cartes et le PC Host avec la commande suivante :
     ```bash
     sudo ip link set can0 up type can bitrate 500000
     ```
   - Pour visualiser les trames CAN transmises, utilisez la commande suivante :
     ```bash
     candump can0
     ```
   - *Note* : Le bus CAN est en mode attente jusqu'au lancement de l'IHM, car la communication se fait via des interruptions, et non en mode polling.

### Lancement de l'IHM

4. **Compilation et Exécution de l'IHM** : (Accédez au répertoire IHM_CAN dans un terminal)
   - Compilez l'IHM Qt en exécutant `make` dans le répertoire du projet :
     ```bash
     make
     ```
   - Lancez ensuite l'IHM pour afficher les données des capteurs et contrôler les composants :
     ```bash
     ./CAN_IHM
     ```

## Défis Techniques

- **Transmission des Données sur le Bus CAN** : Les valeurs 32 bits, telles que celles de la luminosité, sont envoyées en trames de 8 bits en les décalant par multiples de 8.
- **Filtrage des Trames CAN** : L'ID de chaque trame est vérifié avant le traitement pour assurer qu'elle provient d'un capteur autorisé. La fonction `can_callback` est utilisée pour cette vérification.

## Documentation Complémentaire

Pour plus d'informations sur la configuration et les fonctionnalités, consultez la documentation complète [ici](https://web.enib.fr/~kerhoas//iot/reseau-de-capteurs/sommaire/).

## Licence

Ce projet est sous licence MIT. Pour plus de détails, consultez le fichier `LICENSE`.
