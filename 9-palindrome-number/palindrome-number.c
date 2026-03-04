bool isPalindrome(int x) {
    int n=x;
    double rev=0;
    if(x<0)
        return false;
    while(n!=0)
    {
        rev=rev*10+n%10;
        n=n/10;
        
    }
    if(x==rev)
        return true;
    else
        return false;
    
}