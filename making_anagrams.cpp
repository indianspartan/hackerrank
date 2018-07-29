int makeAnagram(string a, string b) {
  sort(a.begin(), a.end());
  sort(b.begin(), b.end());
  
  size_t a_len=0, b_len=0;
  size_t deletes = 0;
  
  while( a_len < a.size() && b_len < b.size() ) {
    
    char a_curr = a[a_len], b_curr = b[b_len];
    
    if (a_curr != b_curr) {
      deletes++;
      if ( a_curr < b_curr )
        a_len++;
      else
        b_len++;
      continue;
    } // end of if
    
    else {
      a_len++;
      b_len++;
    }
    
  } // end of while
  
  if (a_len != a.size() )
    deletes+=a.size()-a_len;
  if (b_len != b.size() )
    deletes+=b.size()-b_len;
  return deletes;
}
