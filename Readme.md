# EMSY - TP1 - 2024 - 2025
## Infos Pratique - Bonne pratique git
# Prise de note TP1 EMSY :

## Dictionnaire :
GPT        = GUID Partition Table
MBR        = Master Boot Record
btrfs      = B-tree file system. C'est un système de fichier.
xfs        = XXX. c'est un système de fichier 64-bit journalisé de haute performance.
Journalisé = Tracer les opérations d'écriture tant qu'elles ne sont pas terminées et cela en vue de garantir
	     l'intégrité des données en cas d'arrêt brutal.
ext2       = Second extended file system. C'est le système fichier historique GNU/linux.
ext3       = Third extended file system. C'est un système fichier notammetn utilisé par GNU/linux.
ext4       = Fourth extended file system. C'est le système fichier principalement destiné aux systèmes basés sur GNU/linux.kirian
	     Il est le successeur de l'ext3.

# TP2 POINT 2 :
## 7)
   La commande pour se déplacer à la racine
   `cd /`
## 8)
   -l signifie que : 
   Cela nous permet de voir plus d'information concernant les répertoires.
   d signifie directory ce qui veux dire répertoire.
   l signifie library ce qui veux dire que c'est une librairie.
   
   Analyse de la ligne trouvée : drwxr-xr-x  5 root root   4096 sept 18 16:12 home :
   1) drwxr-xr-x on peut voir la séparation des droits entre l'administrateur et les utilisateurs et autres.
   2) drwxr-xr-x signifie que les droit de l'admin sont readwrite and readonly, l'utilisateur lui n'a que le droit read only et autres n'a aucun droit.
   3) 5 signifie qu'il y a 5 folder dans ce folder.
   4) root nous montre quel est la racine de ce folder.
   5) root nous dit à quel niveau de notre hierarchie se trouve notre folder.
   6) 4096 signifie que la taille de ce dossier est de 4096 octets.
   7) Sep nous donne le mois de la dernière modif.
   8) 18 nous donne le jour de la dernière modif.
   9) 16:12 nous donne l'heure du la dernière modif.
   10) home c'est le nom du fichier "Repertoire des utilisateurs"


## 9)
   Creation d'un répertoir:
   Je vais placer le répertoire de travail "EMSY_KGR" dans le réertoire home
   Je vais utiliser la commande suivante pour le faire
   `sudo mkdir /home/EMSY_KGR`

## 10)
   Création d'un fichier text:
   Utiliser la commande suivante : 
   `vi TESTSLO_KGR.txt`

   Une fois la VM éteinte et rallumée le folder EMSY_KGR est toujours présent.
   Le fichier text, lui, n'as pas été enregistrer

## 11)
   Apres avoir utiliser la commande ls -l /dev/sda voici ce qui apparait à l'écran :
   brw-rw---- 1 root disk 8, 0 nov 9 13:21 /dev/sda
   
   Le b est pour block special file.
   Le rw veux dire read write, ce sont les droits de lecture et d'écriture.
   Le 1 c'est le nombre de répertoire.
   Le root nous montre la racine de ce folder.
   Le disk nous dit à quel niveau de notre hierarchie se trouve notre folder.
   Le 8, 0 c'est la taille de ce dossier en octet, on peut voir que la taille est de 8 octets
   Le nov 9 13:21 c'est la date et l'heure de la dernière modification.
   Le /dev/sda c'est le nom du répertoire.   

# TP1 POINT 3 :
## A) Quelle est la taille minimum recommandée pour installer la distribution Sparky?
   Le Sparky Installer (Calamares) requiere au minimum 1GB de RAM.
   En CLI edition : 2GB.
   En "Home" edition : 10GB.
   En GameOver/Multimedia : 20GB. 
   
   Lors de l'installation, je suis tomber sur une selection de label type.
   J'ai choisi le GPT car il marche avec n'importe quelle taille de disque acctuellement sur le marché et supporte virtuellement un nombre illimité de partition.
   C'est un remplacemement au MBR.

## B)
   Pour le screenshot du GRUB, voir le GRUB.PNG en annexe.

## C) Ligne(s) de commandes servant à changer la langue du clavier :
   `sudo dpkg-reconfigure keyboard-configuration`

## D) A quoi sert la partition swap ?
   Une partition qui permet au noyau de mieux prioriser les ressources mémoire et ainsi maximiser les opportunités d'optimisation.
   Il s'agit d'une stratégie visant à atténuer le manque de mémoire lorsqu'un système est à court de mémoire.
   
## Dans le monde DOS, à quoi peut correspondre la swap ?
   L'équivalent de la partition swap de linux sur Windows est la page file (pagefile.sys).

## E)
   J'ai utilisé la commande : `cat /proc/sys/vm/swappiness` pour déterminer la valeur du pourcentage de la swap.
   Ce dernier est de 60%.

## F)
   Lors de la partition de la mémoire j'ai laissé la 3ème partition en "Free space", elle n'a donc pas de format.

## G)
   Après avoir utiliser la commande `id` voici de qui apparait sur ma VM:
   uid=1000 (kirian)  gid=1000 (kirian)  groups=1000 (kirian) ,20(dialout) ,24(cdrom) ,25(floppy) ,27(sudo) ,29(audio) ,44(video) ,46(plugdev) ,100(users) ,103(netdev)

## H)
   Après avoir utiliser la commande `nano --version` voici ce qui est apparut sur mon écran:
   
   GNU nano, version 5.4
   (C) 1999-2011, 2013-2020 Free Software Foundation, Inc.
   (C) 2014-2020 the contributors to nano
   Compiled options: --disable-libmagic --enable-utf8

 ## I)
 ## Comment savoir si nano est bien installé ? :
   Ce que nous avons vu au point H) nous montre que GNU nano est bien installer. Si il n'était pas installer, nous n'aurions pas eu la version.
 ## Que veux dire "apt" ? :
   apt veux dire Advanced Package Tool, c'est que que les OS Linux basé sur Debian utilisent pour gérer des Linux software packages.

 ## Est-ce que cette commande peut être utilisée sur toutes les distributions linux? :
   Elle peut être utilisée dans toutes les distributions Debian-based Linux comme Debian, Ubuntu, Linux Mint et elementary OS.
   
 ## A quoi sert nano :
   nano est un editeur de text.

 ## J)
  Pour tester si l'application git est deja installée il faut utiliser la commande suivante :
  `git --version`
  L'application git n'est pas installée.
  Il faut donc l'installer, pour ce faire il faut utiliser la commande suivante :
  `sudo apt-get install git` 

  A ce moment je me suis rendu compte que je n'arrivais pas a installer le client git.
  Après quelques recherches j'ai compris qu'il me faillait updater les packages, j'ai donc utilisé la commande :
  `sudo apt update`

  J'ai ensuite réutilisé la commande :
  `sudo apt-get install git`

  ## K)
   J'ai crée le répertoir à l'aide de la commande :
   `sudo mkdir /home/EMSY_TP1_KGR`
   
   Puis j'ai donné les droits de lecture, d'écriture et d'execution avec la commande suivante :
   `sudo chmod u+rwx /home/EMSY_TP1_KGR`

  ## L)
   J'ai cloner le répertoire git dans le folder EMSY_TP1_KGR avec la commande suivante :
   `sudo git clone https://github.com/Kazanaris/EMSY_TP1_Source.git`
   Dans le répertoire je peux observer la chose suivante :
   drwxr-xr-x 3 root root 4096 nov 9 14:48 EMSY_TP1_Source
   Et dans le répertoire EMSY_TP1_Source j'ai pu observé la chose suivante :
   -rw-r--r-- 1 root root 679 Nov  9 14:48 EMSY_TP1.c
   -rw-r--r-- 1 root root 315 Nov  9 14:48 Readme.md

  ## M)
   Voir EMSY_TP1.c
  
   ## N)
  Pour verifier si le gcc est bien installer j'utilise la commande suivante :
  `gcc --version`
  Voici ce qui est apparut :
  gcc (Debian 10.2.1-6) 10.2.1 20210110
  Copyright (C) 2020 Free Software FOndation, Inc.
  This is free software; see the source for copying conditions. There is NO
  warranty; not even for MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
  
  Après avoir taper la commande `gcc -Wall -o EMSY_TP1.o -c EMSY_TP1.c` voici ce qui est apparut :
  Assembler messages:
  Fatal error: can't create EMSY_TP1.o: Permission denied

  Après avoir taper la commande `gcc -o EMSY_TP1.c EMSY_TP1.o` rien n'est apparut mais si on utilise la commande `ls -l` on voit qu'un fichier nommé EMSY_TP1.o est apparut

  Après avoir taper la commande `./EMSY_TP1` voici ce qui est apparut :
  [sudo] password for kirian:
  Après avoir mis mon mdp voici de qui apparait :
  surfaceCarre = 12
  c'est le résutat de mon calcule

 ## Que se passe-t-il sur votre console?
 Si on utilise la commande `ls -l` on voit qu'un fichier nommé EMSY_TP1 est apparut et il est de couleur vert clair.

 ## Quels sont les fichiers qui ont été générés ?
 Comme dit plus haut, un fichier EMSY_TP1.o et un fichier EMSY_TP1 de couleur vert clair sont apparut.


  
 **[aide pour créer un readme](https://docs.github.com/fr/get-started/writing-on-github/getting-started-with-writing-and-formatting-on-github/basic-writing-and-formatting-syntax#GitHub-flavored-markdown)**
