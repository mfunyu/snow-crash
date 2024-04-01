# cmd
* ``ls``
    * level13 a binary
* dogbolt -> level13_angr.c and level13_ghidra.c
* analyse of level13_angr.c : l125
    ```
    if (getuid() == 4242)
    {
        v0 = ft_des("boe]!ai0FB@.:|L6l@A?>qJ}I");
        return printf("your token is %s\n");
    }
    ```
* Let's copy ft_des and run l127 then print -> from ghidra 
* some ajustement thx to compil error
    * uint -> int
    * byte -> short
    * true -> 1
    * undefine4 -> char*
* TADAM
