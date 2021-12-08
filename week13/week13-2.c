#include <stdio.h> ///為了PIRNTF()
#include <stdlib.h> ///為了system()作業系統
int main () ///(1) 定義/寫了 main()函式
{
    printf("下面會秀出 system()函式的結果\n");

    system("dir");///(3) 呼叫 system()的函式

    printf("Hello World");/// (2) 呼叫printf()

    return 0;
}
///你人生中,第一個自己的寫。自己定義的函示
///main ()函示

