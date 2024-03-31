int32_t _init()
{
    if (__gmon_start__ != 0)
    {
        __gmon_start__();
    }
    frame_dummy();
    return __do_global_ctors_aux();
}

int32_t sub_80483f0()
{
    int32_t var_4 = data_8049ff8;
    /* jump -> data_8049ffc */
}

char* strstr(char const* haystack, char const* needle)
{
    /* tailcall */
    return strstr(haystack, needle);
}

int32_t sub_8048406()
{
    /* tailcall */
    return sub_80483f0(0);
}

ssize_t read(int32_t fd, void* buf, size_t nbytes)
{
    /* tailcall */
    return read(fd, buf, nbytes);
}

int32_t sub_8048416()
{
    /* tailcall */
    return sub_80483f0(8);
}

int32_t printf(char const* format, ...)
{
    /* tailcall */
    return printf();
}

int32_t sub_8048426()
{
    /* tailcall */
    return sub_80483f0(0x10);
}

void __stack_chk_fail() __noreturn
{
    /* tailcall */
    return __stack_chk_fail();
}

int32_t sub_8048436()
{
    /* tailcall */
    return sub_80483f0(0x18);
}

void err(int32_t eval, char const* fmt, ...) __noreturn
{
    /* tailcall */
    return err();
}

int32_t sub_8048446()
{
    /* tailcall */
    return sub_80483f0(0x20);
}

int32_t __gmon_start__()
{
    /* tailcall */
    return __gmon_start__();
}

int32_t sub_8048456()
{
    /* tailcall */
    return sub_80483f0(0x28);
}

void exit(int32_t status) __noreturn
{
    /* tailcall */
    return exit(status);
}

int32_t sub_8048466()
{
    /* tailcall */
    return sub_80483f0(0x30);
}

int32_t open(char const* file, int32_t oflag, ...)
{
    /* tailcall */
    return open();
}

int32_t sub_8048476()
{
    /* tailcall */
    return sub_80483f0(0x38);
}

void __libc_start_main(int32_t (* main)(int32_t argc, char** argv, char** envp), int32_t argc, char** ubp_av, void (* init)(), void (* fini)(), void (* rtld_fini)(), void* stack_end) __noreturn
{
    /* tailcall */
    return __libc_start_main(main, argc, ubp_av, init, fini, rtld_fini, stack_end);
}

int32_t sub_8048486()
{
    /* tailcall */
    return sub_80483f0(0x40);
}

ssize_t write(int32_t fd, void const* buf, size_t nbytes)
{
    /* tailcall */
    return write(fd, buf, nbytes);
}

int32_t sub_8048496()
{
    /* tailcall */
    return sub_80483f0(0x48);
}

int32_t __convention("regparm") _start(int32_t arg1, void (* arg2)()) __noreturn
{
    int32_t stack_end = arg1;
    __libc_start_main(main, __return_addr, &ubp_av, __libc_csu_init, __libc_csu_fini, arg2, &stack_end);
    /* no return */
}

void __do_global_dtors_aux()
{
    if (__bss_start == 0)
    {
        uint32_t dtor_idx.6161_1 = dtor_idx.6161;
        if (dtor_idx.6161_1 < 0)
        {
            do
            {
                dtor_idx.6161 = (dtor_idx.6161_1 + 1);
                __DTOR_LIST__[(dtor_idx.6161_1 + 1)]();
                dtor_idx.6161_1 = dtor_idx.6161;
            } while (dtor_idx.6161_1 < 0);
        }
        __bss_start = 1;
    }
}

int32_t frame_dummy()
{
    return __JCR_END__;
}

int32_t main(int32_t argc, char** argv, char** envp)
{
    char** envp_1 = envp;
    void* gsbase;
    int32_t eax_2 = *(gsbase + 0x14);
    if (argc == 1)
    {
        printf("%s [file to read]\n", *argv);
        exit(1);
        /* no return */
    }
    if (strstr(argv[1], "token") != 0)
    {
        printf("You may not access '%s'\n", argv[1]);
        exit(1);
        /* no return */
    }
    int32_t fd = open(argv[1], 0);
    if (fd == 0xffffffff)
    {
        err(1, "Unable to open %s", argv[1]);
        /* no return */
    }
    void buf;
    ssize_t nbytes = read(fd, &buf, 0x400);
    if (nbytes == 0xffffffff)
    {
        err(1, "Unable to read fd %d", fd);
        /* no return */ 
    }
    ssize_t eax_20 = write(1, &buf, nbytes);
    if (eax_2 == *(gsbase + 0x14))
    {
        return eax_20;
    }
    __stack_chk_fail();
    /* no return */
}

void __libc_csu_init()
{
    _init();
}

void j___libc_csu_fini()
{
    /* tailcall */
    return __libc_csu_fini();
}

void __libc_csu_fini() __pure
{
    return;
}

int32_t __i686.get_pc_thunk.bx() __pure
{
    return;
}

int32_t __do_global_ctors_aux()
{
    return 0xffffffff;
}

int32_t _fini()
{
    return __do_global_dtors_aux();
}

