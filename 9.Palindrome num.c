bool isPalindrome(int x){
    if(x<0) return false;
    int long rev=0;
    int temp=x;
    while(temp){
        rev*=10;
        rev+=temp%10;
        temp/=10;
    }
    return rev==x;
}