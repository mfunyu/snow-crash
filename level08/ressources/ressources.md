# cmd
* ``ls``
    * 2 objs : 1 binary level08 + 1 file token
* ``cat token``
    * ``cat: token: Permission denied``
* ``./level08``
    * ``./level08 [file to read]``
* ``./level08 token``
    * ``You may not access 'token'`` -> no surprise
    Let's make level08 think I have the access ?
* dogbolt -> level08.c
* ``echo pouet>/tmp/bouh`` + ``./level08 /tmp/bouh``
    * ``pouet``
* peut pas ``cp`` ni ``mv`` token dans tmp....
* rip ``sudo``...
    Let's rename token in ordoer to pass if l178 in level08.c
* ``chmod +r token``
    * ``chmod: changing permissions of `token': Operation not permitted``
* ``chmod 777 .``
    J'y crois pas ca marche
* ``mv token bouh``
* ``./level08 bouh``