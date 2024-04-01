#include <stdio.h>
#include <stdbool.h>

char *ft_des(char *s) {}

int main()
{
	unsigned int v0;  // [bp-0x118]
	unsigned int v1;  // [bp-0x114]
	char v3;  // [bp-0x10c]
	unsigned int v4;  // [bp-0xc]
	unsigned int uid;  // eax

	v0 = 0;
	if (ptrace() < 0)
		puts("You should not reverse this");
	else if (getenuid("LD_PRELOAD"))
		fwrite("Injection Linked lib detected exit..\n", 1, 37, stderr);
	else if (open("/etc/ld.so.preload", 0, 1) > 0)
		fwrite("Injection Linked lib detected exit..\n", 1, 37, stderr);
	else
	{
		v1 = syscall_open("/proc/self/maps", 0);
		if (v1 == -1)
			fwrite("/proc/self/maps is unaccessible, probably a LD_PRELOAD attempt exit..\n", 1, 70, stderr);
		else
		{
			do
			{
				while (true)
				{
					if (!syscall_gets(&v3, 0x100, v1))
						goto END;
					if (isLib(&v3, "libc"))
						v0 = 1;
					else if (v0)
						break;
				}
				if (isLib(&v3, "ld"))
				{
					fwrite("Check flag.Here is your token : ", 1, 32, stdout);
					uid = getuid();
					switch (uid)
					{
					case 3006:
						fputs(ft_des("H8B8h_20B4J43><8>\\ED<;j@3"), stdout);
						fputc(10, stdout);
						break;
					default:
						if (uid > 3006)
						{
							if (uid == 3010)
							{
								fputs(ft_des("74H9D^3ed7k05445J0E4e;Da4"), stdout);
								fputc(10, stdout);
							}
							else if (uid <= 3010)
							{
								if (uid == 3008)
								{
									fputs(ft_des("bci`mC{)jxkn<\"uD~6%g7FK`7"), stdout);
									fputc(10, stdout);
								}
								else if (uid <= 3008)
								{
									fputs(ft_des("78H:J4<4<9i_I4k0J^5>B1j`9"), stdout);
									fputc(10, stdout);
								}
								else
								{
									fputs(ft_des("Dc6m~;}f8Cj#xFkel;#&ycfbK"), stdout);
									fputc(10, stdout);
								}
							}
							else
							{
								if (uid == 3012)
								{
									fputs(ft_des("8_Dw\"4#?+3i]q&;p6 gtw88EC"), stdout);
									fputc(10, stdout);
								}
								else if (uid < 3012)
								{
									fputs(ft_des("70hCi,E44Df[A4B/J@3f<=:`D"), stdout);
									fputc(10, stdout);
								}
								else if (uid == 3013)
								{
									fputs(ft_des("boe]!ai0FB@.:|L6l@A?>qJ}I"), stdout);
									fputc(10, stdout);
								}
								else if (uid == 3014)
								{
									fputs(ft_des("g <t61:|4_|!@IF.-62FH&G~DCK/Ekrvvdwz?v|"), stdout);
									fputc(10, stdout);
								}
							}
						}
						else
						{
							if (uid == 3002)
							{
								fputs(ft_des("<>B16\\AD<C6,G_<1>^7ci>l4B"), stdout);
								fputc(10, stdout);
							}
							else if (uid > 3002)
							{
								if (uid == 3004)
								{
									fputs(ft_des("?4d@:,C>8C60G>8:h:Gb4?l,A"), stdout);
									fputc(10, stdout);
								}
								else if (uid > 3004)
								{
									fputs(ft_des("G8H.6,=4k5J0<cd/D@>>B:>:4"), stdout);
									fputc(10, stdout);
								}
								else
								{
									fputs(ft_des("B8b:6,3fj7:,;bh>D@>8i:6@D"), stdout);
									fputc(10, stdout);
								}
							}
							else
							{
								if (uid == 3000)
								{
									fputs(ft_des("I`fA>_88eEd:=`85h0D8HE>,D"), stdout);
									fputc(10, stdout);
								}
								else if (uid > 3000)
								{
									fputs(ft_des("7`4Ci4=^d=J,?>i;6,7d416,7"), stdout);
									fputc(10, stdout);
								}
								else if (!uid)
								{
									fwrite("You are root are you that dumb ?\n", 1, 33, stdout);
									fputc(10, stdout);
								}
							}
						}
						fwrite("\nNope there is no token here for you sorry. Try again :)", 1, 56, stdout);
						fputc(10, stdout);
						goto END;
					}
				}
			} while (afterSubstr(&v3, "00000000 00:00 0"));
			fwrite("LD_PRELOAD detected through memory maps exit ..\n", 1, 48, stderr);
		}
	}