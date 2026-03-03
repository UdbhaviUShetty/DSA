int countDigits(int num) {
    int n=0,x=num;
    while(num>0)
    {
        
        if(x%(num%10)==0)
            n++;
        num=num/10;
    }
   return n; 
}