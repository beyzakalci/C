#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  long int lid1, lid2;
  int id;
  FILE *fp;

  if (argc!=2) {
      printf("Kullanim : deneme <Dosya adi>\n");
      exit(1);
  }

  if ((fp=fopen(argv[1], "rb")) == NULL) {
      printf("Dosya açýlamadý!\n");
      exit(1);
  }

  /* Dosya sonuna ulaþýp dosya boyutunu kaydeder. */
  fseek (fp, 0L, SEEK_END); 
  lid2 = ftell(fp);
  
  for ( ; ; ) {
       
       if (lid1>=lid2) break;
       if (fseek(fp, lid1, SEEK_SET)) {
           printf("Arama hatasi!");
           exit(1);
       }
      
  }

  fclose(fp);
  
  return 0;
}

