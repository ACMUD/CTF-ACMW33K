#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[]) {
    if (argc < 3) {
        fprintf(stderr, "Uso: %s <input> <destination>\n", argv[0]);
        return 1;
    }

    char* input = argv[1];
    char* file_name = argv[2];
    int len = strlen(input);

    FILE* outFile = fopen(file_name, "w");
    if (outFile == NULL) {
        perror("Error al abrir el archivo de salida");
        return 1;
    }

    for (int i = 0; i < len - 3; i++) {
        int x1 = (int)input[i];
        int x2 = (int)input[i + 1];
        int x3 = (int)input[i + 2];
        int x4 = (int)input[i + 3];

        int y1 = x1 + x4;
        int y2 = x1 + x2;
        int y3 = x2 + x4;
        int y4 = x4 + x3;

        fprintf(outFile, "%d %d %d %d\n", y1, y2, y3, y4);
    }

    fclose(outFile);
    return 0;
}
