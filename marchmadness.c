//march madness

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  FILE* inFile = NULL;

  char roundOf64[64][50];
  char roundOf32[32][50];
  char roundOf16[16][50];
  char roundOf8[8][50];
  char roundOf4[4][50];
  char roundOf2[2][50];

  int i;
  int counter;

  inFile = fopen("NCAA2018Bracket.txt", "r");

  for(i=0; i<64; ++i) {
    char word[50];
    fgets(word, 50, inFile);
    word[strlen(word)-1] = '\0';
    strcpy(roundOf64[i], word);
  }

  fclose(inFile);

  //first round
  printf("\nRound 1:\n\n");
  counter = 0;
  for(i=0; i<64; i+=2) {

    printf("%s\n", roundOf64[i]);
    printf("   vs\n");
    printf("%s\n\n", roundOf64[i+1]);

    char num1[3];
    char num2[3];

    num1[0] = roundOf64[i][0];
    num1[1] = roundOf64[i][1];
    num1[2] = '\0';

    num2[0] = roundOf64[i+1][0];
    num2[1] = roundOf64[i+1][1];
    num2[2] = '\0';

    int int1 = atoi(num1);
    int int2 = atoi(num2);

    if (int1<int2) {
      strcpy(roundOf32[counter], roundOf64[i]);
    }

    else {
      strcpy(roundOf32[counter], roundOf64[i+1]);
    }

    ++counter;
  }

  //second round
  printf("\nRound 2:\n\n");
  counter = 0;
  for(i=0; i<32; i+=2) {

    printf("%s\n", roundOf32[i]);
    printf("   vs\n");
    printf("%s\n\n", roundOf32[i+1]);

    char num1[3];
    char num2[3];

    num1[0] = roundOf32[i][0];
    num1[1] = roundOf32[i][1];
    num1[2] = '\0';

    num2[0] = roundOf32[i+1][0];
    num2[1] = roundOf32[i+1][1];
    num2[2] = '\0';

    int int1 = atoi(num1);
    int int2 = atoi(num2);

    if (int1<int2) {
      strcpy(roundOf16[counter], roundOf32[i]);
    }

    else {
      strcpy(roundOf16[counter], roundOf32[i+1]);
    }

    ++counter;

  }

  //sweet 16
  printf("\nSweet 16:\n\n");
  counter = 0;
  for(i=0; i<16; i+=2) {

    printf("%s\n", roundOf16[i]);
    printf("   vs\n");
    printf("%s\n\n", roundOf16[i+1]);

    char num1[3];
    char num2[3];

    num1[0] = roundOf16[i][0];
    num1[1] = roundOf16[i][1];
    num1[2] = '\0';

    num2[0] = roundOf16[i+1][0];
    num2[1] = roundOf16[i+1][1];
    num2[2] = '\0';

    int int1 = atoi(num1);
    int int2 = atoi(num2);

    if (int1<int2) {
      strcpy(roundOf8[counter], roundOf16[i]);
    }

    else {
      strcpy(roundOf8[counter], roundOf16[i+1]);
    }

    ++counter;

  }

  //Elite 8
  printf("\nElite 8:\n\n");
  counter = 0;
  for(i=0; i<8; i+=2) {

    printf("%s\n", roundOf8[i]);
    printf("   vs\n");
    printf("%s\n\n", roundOf8[i+1]);

    char num1[3];
    char num2[3];

    num1[0] = roundOf8[i][0];
    num1[1] = roundOf8[i][1];
    num1[2] = '\0';

    num2[0] = roundOf8[i+1][0];
    num2[1] = roundOf8[i+1][1];
    num2[2] = '\0';

    int int1 = atoi(num1);
    int int2 = atoi(num2);

    if (int1<int2) {
      strcpy(roundOf4[counter], roundOf8[i]);
    }

    else {
      strcpy(roundOf4[counter], roundOf8[i+1]);
    }

    ++counter;

  }

  //final 4
  printf("\nFinal 4:\n\n");
  for(i=0; i<4; i+=2) {
    printf("%s\n", roundOf4[i]);
    printf("   vs\n");
    printf("%s\n\n", roundOf4[i+1]);

    int rand1 = (rand() % 2);
    int rand2 = (rand() % 2);

    if (rand1 == 0) {
      strcpy(roundOf2[0], roundOf4[0]);
    }

    else {
      strcpy(roundOf2[0], roundOf4[1]);
    }

    if (rand2 == 0) {
      strcpy(roundOf2[1], roundOf4[2]);
    }

    else {
      strcpy(roundOf2[1], roundOf4[3]);
    }

  }

  //championship
  printf("\nChampionship:\n\n");
  printf("%s\n", roundOf2[0]);
  printf("   vs\n");
  printf("%s\n\n", roundOf2[1]);

  int number = (rand() % 2);

  if(number == 0) {
    printf("CHAMPION: %s\n\n", roundOf2[0]);
  }

  else {
    printf("CHAMPION: %s\n\n", roundOf2[1]);
  }


  return 0;
}
//march madness
