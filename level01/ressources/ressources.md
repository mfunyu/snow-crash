# hint
* the files in level00 are named john -> john the ripper -> truc de cybersecu

# useful links
* https://www.openwall.com/john/
    * to install after finding the hashed psw
* https://www.cyberciti.biz/faq/where-are-the-passwords-of-the-users-located-in-linux/
* install instruction for john the ripper : https://github.com/openwall/john/blob/bleeding-jumbo/doc/INSTALL

# install instruction for john the ripper
* ``cd src``
* ``./configure && make``
* ``cd ../run``
* ``./john --test``

# cmd
* ``cat /etc/passwd``
    * flag01:42hDRfypTqqnw:3001:3001::/home/flag/flag01:/bin/bash
* (sur la machine hote) ``./john passwd``
    * abcdefg
* ``getflag``

