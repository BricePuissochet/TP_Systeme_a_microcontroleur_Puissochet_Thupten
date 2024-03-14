# TP_Systeme_a_microcontroleur_Puissochet_Thupten

1.2 Le microcontrôleur sous KiCAD

Q13)  Pourquoi PB9 est relié à la masse ? (Répondez à cette question, et aux sui-
vantes, dans le README du repo git.)
Le PB9 est le boot, nous le relions à la masse car comme ca on boot dans le usermemory.

Q14) Quel est le rôle de L1, C5 et C7 ?
L1, C5 et C7 sont des composants qui filtre notre alimentation.

1.3 Le reste du schéma

Q3). Quelle page de la datasheet indique les valeurs des condensateurs ?
La page de la datasheet ou ce trouve les valeurs est la pages 3.

Q5) Quelle page de la datasheet nous indique les valeurs de condensateurs ?
La page de la datasheet ou ce trouve les valeurs est la pages 6.

Q6) Quel est le rôle de la broche CS ?
Cette broche nous sert d'Enable pour la communication SPI.

Q7) Quel est le rôle de la broche LDAC ?
Cette broche nous sert de synchronisation pour le DAC.

Q8) Pourquoi le signal MISO n’est pas utilisé ?
Il n'y a pas de communication entre le DAC est le master, donc nous avons pas besoin de MISO

Q10) Où trouve-t-on les indications du pinout du connecteur SWD ?
On trouve les indications dans la datasheet page 19 dans Virtual COM port.

1.4 Affectation des empreintes

Q3) Que signifie 0805 ? 0603 ? 1206 ?
Ceci indique la tailles des empreintes, le condencateur est de taille 0.8mm sur 0.5mm

Q4) Que signifie LQFP ? SOT-223 ? SOIC ? Ne vous contentez pas de donner le sigle,
j’attends une petite description (vous pouvez copier-coller depuis wikipedia,
mais lisez avant quand même))
Ceci correspond à la l'empreinte du boitier en fonction du type de boitier.

3.1 Activation des LL drivers

Q4) Que signifie __STATIC_INLINE ?
STATIC_INLINE signifie que la fonction est visible ou elle est declaré et qui indique au compilateur d'implementer le corps de la focntion.

Q5)Et pourquoi y a-t-il du code dans un .h alors que Môssieur Fiack vous a expres-
sément demandé de pas le faire ? (Les deux questions sont peut-être liés, va
savoir)
