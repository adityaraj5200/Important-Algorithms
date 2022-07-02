/* 
  This algorithm checks whether a particular pattern string 'p' exists in string 's' as substring or not.
  For e.g. p = "ababc",
           s = "ababdababcababe"
                    |-----|
  string 'p' exists in string 's' as a substring as shown through those lines.

  If n is the length of string 's' and m is the length of string 'p'
  Time Complexity: O(n+m)
  Space Complexity: O(m)
*/

bool KMPalgorithm(string &p, string &s){
    const int n = s.length(), m = p.length();
    if(m>n) return false;
    
    // Making the lps array
    vector<int> lps(m); // lps-longest prefix suffix
    lps[0] = 0;
    for(int i=1,j=0;i<m;i++){
        if(p[i] == p[j]){
            lps[i] = ++j;
        }
        else{ // when p[i] != p[j]
            if(j != 0){
                j = lps[j-1];
                i--;
            }
            else{
                lps[i] = 0;
            }
        }
    }
    
    // Checking if 'p' exists in 's' or not in optimized fashion
    for(int i=0,j=0;i<n;i++){
        if(s[i] == p[j]){
            j++;
            if(j == m)
                return true;
        }
        else{
            if(j!=0){
                j = lps[j-1];
                i--;
            } 
        }
    }
    
    return false;
}
