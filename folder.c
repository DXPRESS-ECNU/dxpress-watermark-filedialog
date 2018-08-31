#include <stdio.h>
#include "tinyfiledialogs.h"

int main() {
    char const * folderpath;
    folderpath = tinyfd_selectFolderDialog("Select Saveing Folder", "");
    printf(folderpath);
    return 0;
}
