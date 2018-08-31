#include <stdio.h>
#include "tinyfiledialogs.h"

int main() {
    char const * filelist;
    char const * lFilterPatterns[4] = {"*.jpg", "*.png", "*.bmp", "*.gif" };
    filelist = tinyfd_openFileDialog("Choose Images", "", 4, lFilterPatterns, "Images", 1);
    printf(filelist);
    return 0;
}