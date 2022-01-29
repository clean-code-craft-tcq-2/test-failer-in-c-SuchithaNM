#include <stdio.h>
#include <assert.h>

const char* majorColor[] = {"White", "Red", "Black", "Yellow", "Violet"};
const char* minorColor[] = {"Blue", "Orange", "Green", "Brown", "Slate"};


void printColorMapTable(int pairNumber, const char *majorColor, const char *minorColor )
{
	printf("%d | %s | %s\n", pairNumber, majorColor, minorColor);
}

int pairNumber(int majorIndex , int minorIndex)
{
	return (majorIndex * 5 + minorIndex);
}

int printColorMap() {

    int i = 0, j = 0;
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            printColorMapTable( pairNumber(i,j), majorColor[i], minorColor[i]);
        }
    }
    return i * j;
}



int main() {
    int result = printColorMap();

    //assert(result == 20);
    assert(result == 25);
    printf("All is well (maybe!)\n");
    return 0;
}
