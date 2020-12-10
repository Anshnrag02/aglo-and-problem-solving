#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

// Complete the alternate function below.
vector<int> valid;
bool isvalid(string temp){
    for (int i=1;i<temp.size();i++)
    {
        if(temp[i]==temp[i-1])
        {
            return false;
        }
    
    }
    return true;
}

int alternate(string s) {
   
 string uni=s,temp ;
 

 sort(uni.begin(), uni.end()); 
 auto it = unique(uni.begin(),uni.end());
 uni.resize(distance(uni.begin(),it));
 char a , b;
 for(int i=0;i<uni.size();i++)
 {   
    
     for (int j=i+1;j<uni.size();j++)
     {
        temp="";
        a=uni[i];
        b=uni[j];
        
        for(int k=0;k<s.size();k++)
        {
            if(s[k]==a || s[k]==b)
            {
                 temp.push_back(s[k]);
            }
            
        }
        if(isvalid(temp)){
            valid.push_back(temp.length());
        } 
             
     }
 }
 int max=0;
 if(!valid.empty())
 {
   max =*max_element(valid.begin(),valid.end());
   return max;
 }
 else
 {
     return max;
 }
 
 
 


}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string l_temp;
    getline(cin, l_temp);

    int l = stoi(ltrim(rtrim(l_temp)));

    string s;
    getline(cin, s);

    int result = alternate(s);

    fout << result << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
