# useful links
* http://files.avanquest.com/file-extension-pl/fr/
* https://www.codeconvert.ai/perl-to-c-converter

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
