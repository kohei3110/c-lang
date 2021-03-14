#include <stdio.h>

/*構造体の型宣言*/
struct OLD {
    int no;
    char *name;
};

int main(void) {

    /*構造体の初期化*/
    struct OLD old[2] = 
    {
        {1, "上杉謙信"},
        {2, "武田信玄"}
    };
    
    struct OLD *p;  /*構造体のポインタ宣言*/
    p = old;  /*ポインタpに構造体oldの先頭のアドレスを代入*/
    
    for(int i = 0; i < 2; i++) {
        printf("%7d%15s\n", (p+i)->no, (p+i)->name);
    }
    return 0;
}
