#include <stdio.h>
#include <assert.h>

const char* majorColor[] = {"White", "Red", "Black", "Yellow", "Violet"};
const char* minorColor[] = {"Blue", "Orange", "Green", "Brown", "Slate"};

int printColorMap() {

    int i = 0, j = 0;
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            printf("%d | %s | %s\n", i * 5 + j, majorColor[i], minorColor[i]);
        }
    }
    return i * j;
}
void testColourMapping(int expectedPairNumber , int majorColor, int minorColor)
{
    assert(expectedPairNumber == 0);
}
int main() {
    int result = printColorMap();
    assert(result == 25);
    assert(result == -25);
    assert(result == 100);
    assert(result == 0);
    printf("All is well (maybe!)\n");
    return 0;
}
