/*
You are given a string containing characters  and  only. Your task is to change it into a string such that there are no matching adjacent characters. To do this, you are allowed to delete zero or more characters in the string.

Your task is to find the minimum number of required deletions.

For example, given the string , remove an  at positions  and  to make  in  deletions.
*/

int alternatingCharacters(string s) {
  if (s.size()<1)
    return 0;
  
  char curr=s[0];
  unsigned int itr=1, del=0;
  
  while(itr<s.size()) {
    if(curr==s[itr])
      del++;
    else
      curr=s[itr];
    itr++;
  }
  
  return del;
}
