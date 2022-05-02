#include <stdio.h>
#include <string.h>
#define MAX_BUF 1024

int main () {

  /* Zero out the array */
  int letter_frequency[26] = {0};
  int len, i, c;
  char buf[MAX_BUF];

  do {
    fgets(buf, MAX_BUF, stdin);
    len = strlen(buf)-1;
    for (i=0; i<len; i++){

      if(buf[i] >= 'A' && buf[i] <= 'Z'){
        c=(int)buf[i]-65;
        letter_frequency[c]++;
      }
      if(buf[i] >= 'a' && buf[i] <= 'z'){
        c=(int)buf[i]-97;
        letter_frequency[c]++;
      }
    }
  } while (len > 1);

  printf("Distribution of letters in corpus:\n");
  for (i = 0; i < 26; i++) {
    // 'A' is ASCII code 65
    printf("%c: %d\n", 65+i, letter_frequency[i]);
  }
return 0;
}
