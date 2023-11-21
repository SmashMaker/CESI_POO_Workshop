# CESI_POO_Workshop_4
# Exercice 2
Demandez aux étudiants de réutiliser les classes Objet2D, Cube, Rectangle du WS précédent.

Demandez aux étudiants de modifier la classe Objet2D en ajoutant un membre privé Suivant qui est un pointeur vers Objet2D, il faut ajouter aussi les accesseurs pour ce membre.

Demandez aux étudiants de créer une classe de stockage d’objet2D comme une liste chainée unidirectionnelle avec Head et Tail des pointeurs vers la tête et la queue de la chaine et sans une information sur la taille. Cette classe de stockage va gérer un nombre indéterminé d’objets de type Rectangle (et) ou de type Cube. La classe de stockage doit disposer d’une méthode ajouter (AtHead, AtTail, AtIndex), ainsi les méthodes correspondantes pour supprimer un élément. Modifier la méthode afficherInfos() qui appellera la méthode afficheInfo() de tous les objets stockés à l’aide d’une boucle while.

Demandez aux étudiants de créer des objets dans le main, de les ajouter à la classe de stockage et d’appeler les méthodes des objets stockés, sans demander la taille mais plutôt une condition d’arrêt.

Demandez à un étudiant de passer au vidéo projecteur et de présenter ses résultats. Demandez à l’étudiant de commenter ligne à ligne son code. Les autres étudiants peuvent à leur tour poser des questions. Répondez aux questions des étudiants.

Proposez aux étudiants de réfléchir à la gestion de la mémoire. Comment libérer de la mémoire dans leurs programmes ? Qu’advient-il des objets internes de la classe de stockage ? Aidez-les dans leurs raisonnements. Faites des schémas pour expliquer. Faites leurs construire un destructeur qui préviendra des fuites de mémoires. Que va faire le destructeur si la classe de stockage utilise les références des objets ? Si un destructeur de la classe de stockage est utilisé, est-il alors nécessaire de supprimer les objets stockés un à un dans le main ?