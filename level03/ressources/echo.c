int main(int argc,char **argv,char **envp)

{
  int iVar1;

  iVar1 = system("/bin/getflag");// lance la cmd /usr/bin/env echo Exploit me
  return iVar1;
}