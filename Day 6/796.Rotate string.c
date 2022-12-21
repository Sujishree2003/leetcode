bool rotateString(char * s, char * goal){
    char temp[strlen(s)*2+1];
    if(strlen(s)!=strlen(goal))
    return false;
    strcpy(temp,s);
    strcat(temp,s);
    return strstr(temp,goal)?true:false;

}
