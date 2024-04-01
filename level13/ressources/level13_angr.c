void _init()
{
    if (false)
        __gmon_start__();
    frame_dummy();
    __do_global_ctors_aux();
    return;
}

int _start()
{
    unsigned int v0;  // [bp-0x8]
    unsigned int v1;  // [bp-0x4]
    char v2;  // [bp+0x0]
    unsigned int v4;  // eax
    unsigned int v5;  // edx

    v1 = v4;
    v0 = v5;
    __libc_start_main(main, *((int *)&v2), &v2, __libc_csu_init, __libc_csu_fini); /* do not return */
}

// No decompilation output for function sub_80483e1

typedef struct struct_1 {
    char padding_0[134520604];
    struct struct_0 *field_8049f1c;
} struct_1;

typedef struct struct_0 {
    struct struct_0 *field_0;
} struct_0;

extern char __bss_start;
extern struct_1 *dtor_idx.6161;

void __do_global_dtors_aux()
{
    struct_1 *v1;  // eax, Other Possible Types: unsigned int

    if (__bss_start)
        return;
    v1 = dtor_idx.6161;
    if (dtor_idx.6161 < 0)
    {
        do
        {
            dtor_idx.6161 = v1 + 1;
            *((int *)(0x4 * &dtor_idx.6161->padding_0[0] + &__DTOR_LIST__))();
            v1 = dtor_idx.6161;
        } while (dtor_idx.6161 < 0);
    }
    __bss_start = 1;
    return;
}

Exception thrown decompiling function frame_dummy: 0
typedef struct struct_0 {
    char padding_0[134514368];
    char field_80486c0;
} struct_0;

int ft_des(char *v6)
{
    unsigned int v0;  // [bp-0x30]
    int tmp_8;  // tmp #8
    unsigned int v1;  // [bp-0x20]
    struct_0 *v2;  // [bp-0x1c], Other Possible Types: unsigned int
    unsigned int v3;  // [bp-0x18]
    unsigned int v4;  // [bp-0x14]
    char *v5;  // [bp-0x10]
    unsigned int v7;  // ecx
    char *v8;  // edi, Other Possible Types: unsigned int
    unsigned int v9;  // d

    v5 = strdup(v6);
    v2 = 0;
    v1 = 0;
    while (true)
    {
        v0 = -1;
        v7 = v0;
        v8 = v5;
        while (v7)
        {
            v7 -= 1;
            v8 += v9;
            if (0 != (char)tmp_8)
                continue;
            break;
        }
        if (~(v7) - 1 <= v1)
            break;
        if (v2 == 6)
            v2 = 0;
        if (((char)v1 & 1))
        {
            for (v3 = 0; *((char *)(134514368 + v2)) > v3; v3 += 1)
            {
                v5[v1] = v5[v1] + 1;
                if (v5[v1] == 127)
                    v5[v1] = 32;
            }
        }
        else if (!((char)v1 & 1))
        {
            for (v4 = 0; *((char *)(134514368 + v2)) > v4; v4 += 1)
            {
                v5[v1] = v5[v1] - 1;
                if (v5[v1] == 31)
                    v5[v1] = 126;
            }
        }
        v1 += 1;
        v2 += 1;
    }
    return v5;
}

int main()
{
    unsigned int v0;  // [bp-0x10]
    unsigned int v1;  // [bp-0xc]

    if (getuid() == 4242)
    {
        v0 = ft_des("boe]!ai0FB@.:|L6l@A?>qJ}I");
        return printf("your token is %s\n");
    }
    v1 = 4242;
    v0 = getuid();
    printf("UID %d started us but we we expect %d\n");
    exit(1); /* do not return */
}

int __libc_csu_init()
{
    unsigned int v0;  // [bp-0x24]
    unsigned int v1;  // [bp+0x4]
    char v2;  // [bp+0x8]
    char v3;  // [bp+0xc]
    unsigned int v4;  // ebp
    unsigned int v5;  // esi

    v4 = v1;
    _init();
    if (true)
        return;
    v5 = 0;
    do
    {
        v0 = *((int *)&v3);
        (&_GLOBAL_OFFSET_TABLE_)[56 + v5](v4, *((int *)&v2));
        v5 += 1;
    } while (v5);
    return;
}

int sub_8048651()
{
    return __libc_csu_fini();
}

int __libc_csu_fini()
{
    unsigned int v1;  // eax

    return v1;
}

void __i686.get_pc_thunk.bx(unsigned int v1, unsigned int a0, unsigned int a1)
{
    char v0;  // [bp+0x0]
    unsigned int v2;  // ebx

    v2 = *((int *)&v0);
    return;
}

extern struct_0 *__init_array_start;

void __do_global_ctors_aux()
{
    struct struct_0 **v1;  // eax, Other Possible Types: unsigned int
    struct struct_0 **v2;  // ebx, Other Possible Types: unsigned int

    v1 = __init_array_start;
    if (__init_array_start == -1)
        return;
    v2 = &__init_array_start;
    do
    {
        v2 -= 4;
        v1();
        v1 = *((int *)v2);
    } while (*((int *)v2) != -1);
    return;
}

int _fini()
{
    return (unsigned int)__do_global_dtors_aux();
}

