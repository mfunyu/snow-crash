# useful links
* https://stackoverflow.com/questions/16986331/can-someone-explain-the-e-regex-modifier
* https://regex101.com/r/iU2cE2/1
* https://www-ppti.ufr-info-p6.jussieu.fr/doc-online/PHP/php7/php-chunked-xhtml/reference.pcre.pattern.modifiers.html#reference.pcre.pattern.modifiers.eval
* https://www.php.net/manual/fr/language.operators.execution.php

# cmd
* ``ls``
    * 2 files : a binary level06 and level06.php
* ``./level06``
    * ``PHP Warning:  file_get_contents(): Filename cannot be empty in /home/user/level06/level06.php on line 4``
* try 1 :
    * ``./level06 level06.php``
        * see try_1.txt
* try 2 :
    * dogbolt to decompile level06
        * see level06.c
* try 3 :
    * ``cat level06.php``
        * see level06.php
    * on remarque que dans try_1.txt, il y a plusieurs fois le contenu de level06.php
        * see analyse_try_1.txt -> bouh correspond aux endroit ou on trouve le contenu de level06.php
* try 4 : in level06.php
    * l10 : cette ligne est la plus interessante, il faudrait trouver une regex reverse qui une fois passee dans cette commande lance getflag