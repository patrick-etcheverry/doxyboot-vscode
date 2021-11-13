# A propos
Ce dépôt contient un projet (workspace) Visual Studio Code pré-configuré pour :
- développer des programmes écrits en C++
- générer la documentation Doxygen associée au projet

# Pré-requis
- le compilateur g++ et le débogueur gdb doivent être déjà installés sur votre machine et doivent être intégrés au PATH si vous êtes sur windows ;
- Doxygen doit également être installlé sur votre machine.

# Mise en place du projet

Clônez ce dépôt ou téléchargez une archive zip du contenu de ce dépôt puis décompactez l'archive dans un dossier de votre choix.

Si vous êtes sur les **bureaux virtuels de l'IUT de Bayonne** :

- supprimez les dossiers .vscode-windows et vscode-linux (paramétrez votre explorateur de fichiers pour afficher les éléments cachés si vous ne voyez pas ces dossiers) ;
- renommez le dossier **.vscode-iut** en **.vscode**


Si vous êtes sur une machine **windows** :

- supprimez les dossiers .vscode-iut et vscode-linux (paramétrez votre explorateur de fichiers pour afficher les éléments cachés si vous ne voyez pas ces dossiers) ;
- renommez le dossier **.vscode-windows** en **.vscode**

Si vous êtes sur une machine **linux** :

- supprimez les dossiers .vscode-iut et vscode-windows (paramétrez votre explorateur de fichiers pour afficher les éléments cachés si vous ne voyez pas ces dossiers) ;
- renommez le dossier **.vscode-linux** en **.vscode**


### Test de l'installation

- Ouvrez le fichier *workspace-doxyboot.code-workspace* depuis Visual Studio Code.

- Utilisez le raccourci **CTRL + MAJ + P** puis recherchez la chaine *generate* 

-  Sélectionnez  l'option **Generate Doxygen documentation** puis appuyez sur *Entrée*

- La documentation du projet intégrée sous forme de commentaires *Doxygen* dans le fichier **src/main.cpp** est générée dans le dossier **docs**

- Ouvrez le fichier **docs/index.html** pour visualiser la documentation générée.

- Ecrivez maintenant votre propre code en plaçant les fichiers sources dans le dossier *src* du workspace :-)
