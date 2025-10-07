int romanToInt(char* s) 
{
    int i=0;
    int value, n_value;
    int len = strlen(s);
    
    int result = 0;
    
    for(i=0; i<len; i++)
    {

     switch (s[i])
     {
        case 'I' : value= 1;
                   break;
        case 'V' : value= 5;
                   break;
        case 'X' : value= 10;
                   break;
        case 'L' : value= 50;
                   break;
        case 'C' : value= 100;
                   break;
        case 'D' : value= 500;
                   break;
        case 'M' : value= 1000;
                   break;
        default : value = 0;
     }

    switch (s[i+1])
     {
        case 'I' : n_value= 1;
                   break;
        case 'V' : n_value= 5;
                   break;
        case 'X' : n_value= 10;
                   break;
        case 'L' : n_value= 50;
                   break;
        case 'C' : n_value= 100;
                   break;
        case 'D' : n_value= 500;
                   break;
        case 'M' : n_value= 1000;
                   break;
        default : n_value = 0;
     }


       if (value < n_value)
       {
         result = result-value;
       }
       else if (value >= n_value)
       {
         result = result+value;
       }
    }


    printf("Converted: %d \n", result);
    return result;
}
