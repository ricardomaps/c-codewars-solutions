#define stringify1(v) "singleton {" #v "}"
#define stringify2(v1, v2) "pair {" #v1 ", " #v2 "}"
#define stringify3(v1, v2, v3) "triplet {" #v1 ", " #v2 ", " #v3 "}"

#define GET_MACRO(_1, _2, _3, NAME, ...) NAME
#define stringify(...) GET_MACRO(__VA_ARGS__, stringify3, stringify2, stringify1)(__VA_ARGS__)
