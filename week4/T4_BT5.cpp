bool isPrime (int number) {
    if(number<=2) {
        if(number<0||number==1||number==0) return false;
        else return true;
    }
    else {
        int count=2;
        for(int i=2;i<=sqrt(number);i++) {
            if(number%i==0) count++;
            if(count>2) {
                break;
            }
        }
        if(count==2) return true;
        else return false;
    }
}