  #include<stdio.h>
  void main() {
         FILE *fpointer1, *fpointer2;
         char filechar1, filechar2;
         char nam1[20], nam2[20];
         printf("\n Give the first file name:");
         gets(nam1);
         printf("\n Give the second file name:");
         gets(nam2);
         fpointer1 = fopen(nam1, "r");
         fpointer2 = fopen(nam2, "r");
         if (fpointer1 == NULL)
         printf("\n The file %s has no content  to compare !", nam1);
         else if (fpointer2 == NULL)
         printf("\n The file %s has no content  to compare !", nam2);
         else
         {
          do {
          filechar1 = getc(fpointer1);
          filechar2 = getc(fpointer2);
          }while ((filechar1 != EOF) && (filechar2 != EOF) && (filechar1 == filechar2));
          if (filechar1 == filechar2)
          printf("\n The Two Files are identical");
          else if (filechar1 != filechar2)
          printf("\n The Two Files are Not identical");
          fcloseall();
          }
        
          }