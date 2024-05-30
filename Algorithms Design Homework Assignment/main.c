#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "codeeditor.h"

int main() {
    char fragment[]="fnuc(myFuncction";
    char correctsyntax[]="func(myFunction)";
    int min_operations=min_edit_distance(fragment, correctsyntax);
    printf("Minimum operations required: %d\n", min_operations);
    return 0;
}
