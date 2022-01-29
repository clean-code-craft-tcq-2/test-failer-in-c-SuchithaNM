#include <stdio.h>
#include <assert.h>

char size(int cms) {
    char sizeName = '\0';
    if(cms < 38) {
        sizeName = 'S';
    } else if(cms > 38 && cms < 42) {
        sizeName = 'M';
    } else if(cms > 42) {
        sizeName = 'L';
    }
    return sizeName;
}

int main() 
{
    assert(size(37) == 'S');
    assert(size(40) == 'M');
    assert(size(43) == 'L');
    assert(size(38) != 'L'); // tshirt size 38 is either belongs to 'S' or 'M'
    assert(size(42) != 'S'); // tshirt size 42 is either belongs to 'L' or 'M'
  /*  assert((size(-10) != 'S') && (size(-10) != 'M') && (size(-10) != 'L')); //tshirts size -10 not a valid size
    assert((size(0) != 'S') && (size(0) != 'M') && (size(0) != 'L')); //tshirts size 0 not a valid size
    assert((size(100) != 'S') && (size(100) != 'M') && (size(100) != 'L')); //tshirts size 100 not a valid size*/
    printf("All is well (maybe!)\n");
    return 0;
}
