// Copyright [2022] <Mr. Kent>"  [legal/copyright]
//
// Date : 11 - 16 - 22
// Code prints color coded RGB values.

#include <iostream>

int main() {
    // Every time a loop counts 1 down it goes on to execute the nested loop
    // and so on until the lowest loop is executed, the top loop don't count up.
    for (int r = 0; r < 255; r++) {
        for (int g = 0; g < 255; g++) {
            for (int b = 0; b < 255; b++) {
                printf
                ("\033[1;38;2;%i;%i;%imRGB(%i, %i, %i)", r, g, b, r, g, b);
            }
        }
    }
}
