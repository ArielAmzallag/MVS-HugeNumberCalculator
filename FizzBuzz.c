//
// Created by ariel on 4/22/2022.
//

#include <stdio.h>
#include <stdlib.h>
#include "HugeUnsignedInt.h"
#include "ShowHugeNumber.h"

#define FIZZ "Fizz"
#define BUZZ "Buzz"

int main (void) {
    HugeUnsignedInt* hugeNumber = createHugeUnsignedIntFromString ("123456789012345678901234567890");
    printHugeUnsignedInt (hugeNumber);
    hugeNumber = createHugeUnsignedIntFromString ("0000000123456789012345678901234567890");
    printHugeUnsignedInt (hugeNumber);
}
