int lengthOfLastWord(char * s){
    int length=0;
    int space=0;
    while(*s!='\0'){
        if(*s==' '){
            space=1;
        }
        else{
            if(space==1){
                length=1;
                space=0;
            }
            else length++;
        }
        s++;
    }
    return length;
}