int finalValueAfterOperations(char** operations, int operationsSize) {
    int x=0;
    int n=operationsSize;
    for(int i=0;i<n;i++)
    {
        if(operations[i][1]=='+')
        {
            x++;
        }
        else  if(operations[i][1]=='-')
        {
            x--;
        }
    }
    return x;
    
}