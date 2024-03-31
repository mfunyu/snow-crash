#include "out.h"



int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  __gmon_start__();
  frame_dummy();
  iVar1 = __do_global_ctors_aux();
  return iVar1;
}



void FUN_080483c0(void)

{
                    // WARNING: Treating indirect jump as call
  (*(code *)(undefined *)0x0)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int setresuid(__uid_t __ruid,__uid_t __euid,__uid_t __suid)

{
  int iVar1;
  
  iVar1 = setresuid(__ruid,__euid,__suid);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

__uid_t geteuid(void)

{
  __uid_t _Var1;
  
  _Var1 = geteuid();
  return _Var1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

__gid_t getegid(void)

{
  __gid_t _Var1;
  
  _Var1 = getegid();
  return _Var1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * getenv(char *__name)

{
  char *pcVar1;
  
  pcVar1 = getenv(__name);
  return pcVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int system(char *__command)

{
  int iVar1;
  
  iVar1 = system(__command);
  return iVar1;
}



void __gmon_start__(void)

{
  __gmon_start__();
  return;
}



void __libc_start_main(void)

{
  __libc_start_main();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int asprintf(char **__ptr,char *__fmt,...)

{
  int iVar1;
  
  iVar1 = asprintf(__ptr,__fmt);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int setresgid(__gid_t __rgid,__gid_t __egid,__gid_t __sgid)

{
  int iVar1;
  
  iVar1 = setresgid(__rgid,__egid,__sgid);
  return iVar1;
}



void _start(void)

{
  __libc_start_main(main);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Removing unreachable block (ram,0x080484ba)
// WARNING: Removing unreachable block (ram,0x080484c0)

void __do_global_dtors_aux(void)

{
  if (completed_6159 == '\0') {
    completed_6159 = '\x01';
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x080484ff)
// WARNING: Removing unreachable block (ram,0x08048508)

void frame_dummy(void)

{
  return;
}



int main(int argc,char **argv,char **envp)

{
  char *pcVar1;
  int iVar2;
  char *buffer;
  gid_t gid;
  uid_t uid;
  char *local_1c;
  __gid_t local_18;
  __uid_t local_14;
  
  local_18 = getegid();
  local_14 = geteuid();
  setresgid(local_18,local_18,local_18);
  setresuid(local_14,local_14,local_14);
  local_1c = (char *)0x0;
  pcVar1 = getenv("LOGNAME");
  asprintf(&local_1c,"/bin/echo %s ",pcVar1);
  iVar2 = system(local_1c);
  return iVar2;
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx
// WARNING: Removing unreachable block (ram,0x080485e0)
// WARNING: Removing unreachable block (ram,0x080485e8)

void __libc_csu_init(void)

{
  EVP_PKEY_CTX *in_stack_ffffffd4;
  
  _init(in_stack_ffffffd4);
  return;
}



void __libc_csu_fini(void)

{
  return;
}



// WARNING: This is an inlined function

void __i686_get_pc_thunk_bx(void)

{
  return;
}



// WARNING: Removing unreachable block (ram,0x08048641)
// WARNING: Removing unreachable block (ram,0x08048648)

void __do_global_ctors_aux(void)

{
  return;
}



void _fini(void)

{
  __do_global_dtors_aux();
  return;
}



