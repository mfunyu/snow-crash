# useful links
* https://filext.com/fr/extension-de-fichier/PCAP
* https://stackoverflow.com/questions/10341032/scp-with-port-number-specified

# cmd
* ``ls``
    * level02.pcap
* (sur la machine hote) ``scp -P 4242 level02@10.14.200.79:level02.pcap .``
* (ouverture du fichier sur wireshark)
    * paquet 43 -> "password"
    * lire les paquet 1 a 1 : [PSH] -> envoie, le dernier byte donne le char entre,
    * ft_wandr...NDRel.L0L. -> tous les points sauf le dernier c'est 7f en ascii hex donc DEL, le dernier point c'est \r
    * ft_waNDReL0L
* getflag