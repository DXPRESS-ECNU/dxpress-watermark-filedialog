project(dxpress_watermark_filedialog C)

set(CMAKE_C_STANDARD 99)
set(CMAKE_EXE_LINKER_FLAGS "-static-libgcc -static-libstdc++")

add_executable(openfiledialog file.c tinyfiledialogs.c)
add_executable(selectfolderdialog folder.c tinyfiledialogs.c)