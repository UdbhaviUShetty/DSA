bool isSameAfterReversals(int num) {
    int n=num,rev=0,r=0;
    while(num>0)
    {
        rev=rev*10+num%10;
        num=num/10;
    }
    while(rev>0)
    {
        r=r*10+rev%10;
        rev=rev/10;
    }
    if(n==r)
        return true;
    else
        return false;
    
}