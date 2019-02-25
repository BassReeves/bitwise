#include "stdafx.h"

enum Flags {
    A = 1,
    B = A*2,
    C = B*2
    // ...
};

bool flag_verbose;
bool flag_lazy;
bool flag_notypeinfo;
bool flag_fullgen;

#include "common.c"
#include "os.c"
#include "lex.c"
#include "type.c"
#include "ast.h"
#include "ast.c"
#include "print.c"
#include "parse.c"
#include "targets.c"
#include "resolve.c"
#include "gen.c"
#include "ion.c"
#include "test.c"

int main(int argc, const char **argv) {
    //    main_test();
    return ion_main(argc, argv);
}
                