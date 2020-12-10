#include <stdio.h>
#include <stdlib.h> 
void main()
{
      FILE *fp1, *fp2;
      char fname1[50],fname2[50],c;
      printf("Enter filename to open for reading : ");
      scanf("%s", fname1);
      fp1 = fopen(fname1, "r");
      if (fp1 == NULL)
     {
            printf("%s file does not exist..", fname1);
            exit(0);
      }
      printf("\nEnter filename to append the content : ");
      scanf("%s", fname2);

      fp2 = fopen(fname2, "a");
      if (fp2 == NULL)
      {
            printf("%s file does not exist...", fname2);
            exit(0);
      }
      c = fgetc(fp1);
      while (c != EOF)
      {
            fputc(c,fp2);
            c = fgetc(fp1);
      }
      printf("\nContent in %s appended to %s", fname1,fname2);
      fclose(fp1);
      fclose(fp2);
      
}