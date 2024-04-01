# cmd
* ``ls``
    * 2 objs : 1 binary level10 + 1 file token
* ``./level10``
    * ``./level10 file host``
	``sends file to host if you have access to it``
* ``echo bouh>bouh``
* in a 2nd terminal ``nc -l 6969``
* in the 1st terminal ``./level10 bouh 0.0.0.0``
* in the 2nd terminal -> ``.*( )*.`` \r ``bouh``
* in the 1st terminal :
    * ``cd /tmp``
    * ``vim script1.sh`` -> put script1.sh
    * ``chmod +x script1.sh``
    * ``./script1.sh``
* in the 2nd terminal :
    * ``cd /tmp``
    * ``vim script2.sh`` -> put script2.sh
    * ``chmod +x script2.sh``
    * ``./script2.sh``
* in a 3rd terminal :
    * ``cd /tmp``
    * ``vim script_on_host.sh`` -> put script_on_host.sh
    * ``chmod +x script_on_host.sh``
    * ``./script_on_host.sh``