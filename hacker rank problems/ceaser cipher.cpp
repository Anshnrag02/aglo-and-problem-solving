#include <bits/stdc++.h>

using namespace std;

// Complete the caesarCipher function below.
string caesarCipher(string s, int k) {
string all ="abcdefghijklmnopqrstuvwxyz";
 int rot =k%26;
 for(int i=0;i<s.length();i++)
 {   int c =s[i];
      
     if (c >= 'A' && c <= 'Z')
       {
          c+=rot;
          if(c > 'Z') 
            { 
                c = (64 + (c % 90)); 
            }
       } 
    if (c >= 'a' && c <= 'z')
       {
           c+=rot;
          if (c > 'z') 
            { 
               c =( 96 + (c % 122)); 
            }
        
            
         }
         s[i]=char(c);
    
       
     
 }
  return s;
    


}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string s;
    getline(cin, s);

    int k;
    cin >> k;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string result = caesarCipher(s, k);

    fout << result << "\n";

    fout.close();

    return 0;
}