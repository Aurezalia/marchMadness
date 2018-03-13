//march madness

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  FILE* inFile = NULL;

  char roundOf64[64][50];
  //char roundOf32[32][50];
  //char roundOf16[16][50];
  //char roundOf8[8][50];
  //char roundOf4[4][50];
  //char roundOf2[2][50];

  int i;

  inFile = fopen("NCAA2018Bracket.txt", "r");

  for(i=0; i<64; ++i) {
    char word[50];
    fgets(word, 50, inFile);
    word[strlen(word)-1] = '\0';
    strcpy(roundOf64[i], word);
  }

  fclose(inFile);

  printf("Round1:\n\n");
  for(i=0; i<64; ++i) {
      printf("%s\n", roundOf64[i]);
  }



  return 0;
}
//march madness
