//march madness

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  FILE* inFile = NULL;
  int numRead = 0;
  const char *roundOf64[64];
  const char *roundOf32[32];
  const char *roundOf16[16];
  const char *roundOf8[8];
  const char *roundOf4[4];
  const char *roundOf2[2];

  int i = 0;

  inFile = fopen("NCAA2018Bracket.txt", "r");

  while (!feof(inFile)) {
    char* word = (char*)malloc(sizeof(char));
    fscanf(inFile,"[^\n]", word);

        roundof64[i] = word;
        ++i;

  }

  fclose(inFile);

  for(i=0; i<64; ++i) {
    printf("%s\n", roundOf64[i]);
  }




  return 0;
}
//march madness
