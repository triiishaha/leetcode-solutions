int lengthOfLastWord(char* s) 
{ 
    int i,c,w_len;
    w_len=0;
    int len = strlen(s);
    
    for(i=len-1; i>=0; i--)
    {
      if(s[i]!=' ')
      {
        c=i;
        break;
      }
    }
    for(i=c; i>=0; i--)
    {
        
        if(s[i]==' ')
        {
            break;
        }
        w_len++;
    }
    return w_len;
}
