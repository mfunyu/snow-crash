# hint
dogbolt

# cmd
* ``ls -la``
    * level03 -> exe
* ``./level03``
    * Exploit me
* ``scp -P 4242 level03@10.14.200.79:level03 .`` -> dogbolt donne level03.c
* write echo.c which return ``system("/bin/getflag")`` in ``/tmp``
* in ``/tmp`` do ``gcc echo.c -o echo``
* in ``~`` do ``gcc echo.c -o echo``
* ``./level03``