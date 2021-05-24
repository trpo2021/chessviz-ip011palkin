#include <ctest.h>
#include <libChess/sborkaPust1.h>
#include <stdlib.h>

CTEST(Chess1, Chess2)
{
    char Desk[9][9];
    sborkaPust(Desk);
    int i, j;
    for (i = 2; i < 6; i++) {
        for (j = 1; j < 9; j++) {
            ASSERT_EQUAL(' ', Desk[i][j]);
        }
    }
    ASSERT_EQUAL(' ', Desk[8][0]);
}
