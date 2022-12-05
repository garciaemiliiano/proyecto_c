#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

bool _fileIsEmpty(FILE *file_buffer);
void _writeFile(bool fileIsEmpty, FILE *file_buffer, char *phrase);
void _showData(char *filename);
char *readData();
void _gestorDeEmpleados();

int main() {
  int opcion;
  printf("Elegir opcion: ");
  scanf("%d", &opcion);

  switch (opcion) {
    case 1:
      _gestorDeEmpleados();
      break;
    case 2:
      printf("case 2");
      break;

    default:
      break;
  }

  return 0;
  //   if (f == NULL) {
  //     printf("Error opening file!\n");
  //     exit(1);
  //   }

  /* print some text */
  //   const char *text = phrase;
  //   fprintf(f, "\n%s", text);
  //   printf("Fue agregado correctamente!\n");
  /* print integers and floats */
  //   int i = 1;
  //   float pi = 3.1415927;
  //   fprintf(f, "Integer: %d, float: %f\n", i, pi);

  //   /* printing single characters */
  //   char c = 'A';
  //   fprintf(f, "A character: %c\n", c);

  // fclose(f);
}

void _gestorDeEmpleados() {
  char string1[100];
  char string2[100];
  char *concat;

  printf("Enter name: ");
  scanf("%19s", string1);

  printf("Enter your website name: ");
  scanf("%29s", string2);

  fgets(string1, sizeof(string1), stdin);
  fgets(string2, sizeof(string2), stdin);

    strcat(string1, string2);

  printf(string1);
  char frase_insert[256];

  strcat(frase_insert, string1);
  strcat(string2, "\n");
  strcat(frase_insert, string2);
  printf(frase_insert);
  // char phrase[4] = "";
  // char filename[256] = "listado.txt";
  // FILE *file_buffer = fopen(filename, "a");

  //_writeFile(_fileIsEmpty(fopen(filename, "r")), file_buffer, phrase);
}

void _writeFile(bool fileIsEmpty, FILE *file_buffer, char *phrase) {
  if (fileIsEmpty) {
    fprintf(file_buffer, "%s", phrase);
    printf("Fue agregado correctamente!\n");
  } else {
    fprintf(file_buffer, "\n%s", phrase);
    printf("Fue agregado correctamente!\n");
  }
}
bool _fileIsEmpty(FILE *file_buffer) {
  int size;
  if (NULL != file_buffer) {
    fseek(file_buffer, 0, SEEK_END);
    size = ftell(file_buffer);
  }
  return 0 == size;
}
void _showData(char *filename) {
  FILE *fp = fopen(filename, "r");
  char ch;
  while ((ch = fgetc(fp)) != EOF) {
    putchar(ch);
  }
  fclose(fp);
}

char *readData() {
  char str1[20], str2[30];

  printf("Enter name: ");
  scanf("%19s", str1);

  printf("Enter your website name: ");
  scanf("%29s", str2);

  printf("Entered Name: %s\n", str1);
  printf("Entered Website:%s", str2);
  return strcat(str1, str2);
}