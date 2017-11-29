/* s_and_r.c -- 包含两个 文件 */

static unsigned long int next = 1; // 种子 

int rand1 (void)
{
    // 产生伪随机数的魔术般公式
    next = next * 1103515245 + 12345;
    return (unsigned int) (next / 65536) % 32768;
}

void srand1 (unsigned int seed)
{
    next = seed;
}
