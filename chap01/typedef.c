/*int型を指すポインタ型*/
typedef int *intPtr_t;

/*intPtr_t型を引数にとり、intPtr_t型を戻り値とする関数*/
/*pのポインタ値を3だけ進めたポインタ値を返す*/
intPtr_t foo(intPtr_t p) {
    return p + 3;
}

main() {
    int a[10];
    intPtr_t p;  /*intPtr_t型の変数宣言*/

    p = foo(a);  /*pの値はa[3]を指すポインタ値*/
}

