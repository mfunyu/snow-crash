#!/bin/sh

for i in /opt/openarenaserver/* ; do #pour chaque truc dans /opt/openarena/server faire
	(ulimit -t 5; bash -x "$i") # set timeout a 5s; executer le truc en affichant les parametres des prog
	rm -f "$i" # rm le truc
done