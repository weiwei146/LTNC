string toLower (string s) {
    int size=s.length();
    for(int i=0;i<size;i++) {
        char a;
        a=tolower(s[i]);
        s[i]=a;
    }
    return s;
}