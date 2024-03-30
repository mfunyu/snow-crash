void _init()
{
    if (false)
        __gmon_start__();
    frame_dummy();
    __do_global_ctors_aux();
    return;
}

extern char g_80487d4;

int main(unsigned int v13, unsigned int a0[3])
{
    unsigned int v0;  // [bp-0x64]
    char *v1;  // [bp-0x60]
    unsigned int v2;  // [bp-0x54]
    unsigned int v3;  // [bp-0x48]
    unsigned int v4;  // [bp-0x44]
    unsigned int v5;  // [bp-0x34]
    unsigned int v6;  // [bp-0x30]
    unsigned int v7;  // [bp-0x2c]
    unsigned int v8;  // [bp-0x28]
    void* v9;  // [bp-0x24]
    unsigned int v10;  // [bp-0x18]
    unsigned int v11;  // [bp-0x4]
    char v12;  // [bp+0x0]
    char v14;  // [bp+0xc]
    char *v15[3];  // edi
    unsigned int v16;  // esi
    unsigned int v17;  // ebx
    unsigned int v18;  // edx

    v11 = *((int *)&v12);
    v10 = &v13;
    v15 = a0;
    v4 = *((int *)&v14);
    v16 = strdup(&g_80487d4);
    v17 = strdup(&g_80487d4);
    if (v15[1])
    {
        v2 = v16;
        free(&g_80487d4);
        v1 = v15[1];
        v16 = strdup(v1);
        if (v15[2])
        {
            v2 = v17;
            free(v1);
            v17 = strdup(v15[2]);
        }
    }
    v3 = getegid();
    v18 = v3;
    v2 = geteuid();
    setresgid(v18, v18, v3);
    v0 = v2;
    setresuid(v2, v2);
    v7 = v16;
    v8 = v17;
    v5 = "/usr/bin/php";
    v6 = "/home/user/level06/level06.php";
    v9 = 0;
    execve("/usr/bin/php", &v5, v4);
    return 0;
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

// No decompilation output for function sub_8048549

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
int syscall_open(unsigned int v0, unsigned int a0)
{
    return [D] syscall();
}

int syscall_gets(unsigned int v4, unsigned int a0, unsigned int a1)
{
    unsigned int v0;  // [bp-0x1c]
    unsigned int v1;  // [bp-0x18]
    unsigned int v2;  // [bp-0x14]
    unsigned int v3;  // [bp-0xc]
    unsigned int v5;  // edi
    unsigned int v6;  // esi

    v5 = 0;
    v3 = v6;
    v2 = v4;
    v1 = a0 - 1;
    while (v5 < v1 && v0 == 1 && (v2 += 1, v5 += 1, *((char *)(v2 - 1)) != 10))
    ;
    *((char *)(v4 + v5)) = 0;
    return v5;
}

int afterSubstr(char *v0, char *a0)
{
    char *v1;  // edx, Other Possible Types: unsigned int
    char *v2;  // ebx
    char v3;  // cl
    unsigned int v4;  // esi
    unsigned int v5;  // eax

    v1 = v0;
    v2 = a0;
    while (true)
    {
        v5 = 0;
        if (!*((char *)v1))
            break;
        do
        {
            v3 = v2[v5];
            v4 = v5;
            if (!v2[v5])
            {
                v5 = &v0[v5];
                return v5;
            }
        } while ((v5 += 1, v3 == v1[v4]));
        v1 += 1;
    }
    return 0;
}

typedef struct struct_0 {
    struct struct_0 *field_0;
    char padding_4[134514636];
    char field_80487d0;
} struct_0;

int isLib(char *v1, struct_0 *a0)
{
    struct_0 *v0;  // [bp-0xc]
    char *v2;  // eax
    unsigned int v3;  // edx
    struct_0 *v4;  // ecx
    struct_0 *v5;  // eax, Other Possible Types: unsigned int
    unsigned int v6;  // ebx
    unsigned int v7;  // eax
    unsigned int v8;  // ecx

    v0 = a0;
    v2 = afterSubstr(v1, a0);
    v4 = v0;
    if (!v2)
        return 0;
    if (*(v2) != 45)
        return 0;
    v5 = v2 + 1;
    v6 = 0;
    while (true)
    {
        *((char *)&v4) = *((char *)v5);
        if (!((char)[D] x86g_calculate_condition(0x6<32>, 0x4<32>, Conv(8->32, dl<1>), 0x9<32>, 0x0<32>)))
            break;
        v5 += 1;
        v6 = 1;
    }
    v3 = 0;
    if (!v6)
        return 0;
    if (*((char *)v5) != 46)
        return 0;
    v7 = v5 + 1;
    v8 = 0;
    while (true)
    {
        *((char *)&v3) = *((char *)v7);
        v3 -= 48;
        if (!((char)[D] x86g_calculate_condition(0x6<32>, 0x4<32>, Conv(8->32, dl<1>), 0x9<32>, 0x0<32>)))
            break;
        v7 += 1;
        v8 = 1;
    }
    v3 = 0;
    if (!v8)
        return 0;
    while (true)
    {
        if (!*((char *)(134514640 + v3)))
        {
            return 1;
        }
        else if (*((char *)(134514640 + v3)) == *((char *)(v7 + v3)))
        {
            v3 += 1;
        }
        else
        {
            return 0;
        }
    }
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

int sub_8048761()
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

