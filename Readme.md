
# EMSY - TP1 - 2024 - 2025
## Infos Pratiques - Bonnes pratiques Git

Ce projet contient une liste de commandes Linux utilisées dans le cadre du TP1 d'EMSY. Chaque commande est accompagnée d'une explication pour aider à comprendre son utilité.

## Table des matières

- [Commandes Utilisées](#commandes-utilisées)
- [Sources Utilisées](#sources-utilisées)

## Commandes Utilisées

### Commandes de navigation et gestion de répertoires

- `cd /`  
  Change le répertoire de travail vers la racine.

- `ls -l`  
  Affiche une liste détaillée des fichiers et dossiers dans le répertoire actuel, y compris les permissions et propriétaires.

- `cd /home`  
  Change le répertoire de travail vers `/home`.

- `sudo mkdir EMSY_BSH_ANE`  
  Crée un nouveau dossier `EMSY_BSH_ANE` dans `/home` avec les privilèges administrateur.

- `sudo chown live:live EMSY_BSH_ANE`  
  Attribue les droits de propriétaire du dossier `EMSY_BSH_ANE` à l’utilisateur `live`.

### Installation de la machine virtuel
- ` sudo sparky-installer`

### Création et modification de fichiers

- `cd EMSY_BSH_ANE`  
  Se déplace dans le dossier `EMSY_BSH_ANE`.

- `vi Test_Linus_by_BSH_ANE.txt`  
  Ouvre ou crée le fichier `Test_Linus_by_BSH_ANE.txt` dans l'éditeur `vi`.
  - `[i]` : Passe en mode insertion pour écrire dans le fichier.
  - **Contenu écrit** : `hello world`
  - `[esc] :x` : Sauvegarde le fichier et quitte l'éditeur.

### Commandes système et gestion des périphériques

- `ls -l /dev/sda`  
  Liste les informations détaillées sur le périphérique `/dev/sda`, y compris ses permissions et attributs.

- `sudo dpkg-reconfigure keyboard-configuration`  
  Rouvre la configuration du clavier pour permettre des ajustements.

- `cat /proc/sys/vm/swappiness`  
  Affiche la valeur actuelle de `swappiness`, qui détermine l’utilisation de la mémoire swap. ⚠️ Attention à inclure un espace entre `cat` et `/` pour éviter une erreur de syntaxe.

### Commandes de vérification des applications

- `nano --version`  
  Vérifie la version de `nano` installée sur le système. L'éditeur `nano` est déjà installé sur la machine.

### Installation et vérification de Git

- `git --version`  
  Vérifie si Git est installé et affiche sa version.

- `sudo apt update`  
  Met à jour la liste des paquets pour s’assurer d’avoir la dernière version des logiciels disponibles.

- `sudo apt install git`  
  Installe Git si celui-ci n'est pas encore installé.

- `git --version`  
  Vérifie que Git a bien été installé en affichant sa version.

### Clonage et modification de fichiers dans un dépôt Git

- `cd /home`  
  Retourne dans le répertoire `/home`.

- `sudo mkdir EMSY_BSH_ANE`  
  Crée le dossier `EMSY_BSH_ANE` dans `/home` avec des droits administratifs.

- `sudo chown hayatache:hayatache EMSY_BSH_ANE`  
  Attribue les droits de propriétaire du dossier `EMSY_BSH_ANE` à l’utilisateur `hayatache`.

- `cd EMSY_BSH_ANE`  
  Se déplace dans le dossier `EMSY_BSH_ANE`.

- `git clone https://github.com/Hayatache/EMSY_TP1_Source_BSH_ANE.git`  
  Clone le dépôt Git `EMSY_TP1_Source_BSH_ANE` dans le répertoire actuel.

- `cd EMSY_TP1_Source_BSH_ANE`  
  Accède au dossier du dépôt cloné.

- `nano EMSY_TP1.c`  
  Ouvre le fichier `EMSY_TP1.c` dans l'éditeur `nano` pour modifications.

## Sources Utilisées

- **Commande `chown`** : [Tutoriel vidéo sur YouTube](https://youtu.be/T5L6SZE_cpE?si=AUSUnvYp-ShRd3Mh)
- **Éditeur de texte `vi`** : [Guide de création de fichier sur Linux](https://www.malekal.com/comment-creer-un-fichier-sur-linux-terminal-ligne-de-commandes/#Comment_creer_un_fichier_avec_un_editeur_de_texte)

---

Ce README documente toutes les étapes et commandes nécessaires pour le TP1 d'EMSY, avec des explications pour chaque commande.
