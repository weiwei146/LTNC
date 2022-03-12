void printArrow(int n, bool left) {
    int a=n;
    if(left==true) {
        int j=0;
        while(n>0) {
        for(int i=0;i<2*a-1-n-2*j;i++) {
            cout << " ";
        }
        for(int i=0;i<n;i++) { 
            cout << "*";
        }
        for(int i=0;i<2*j;i++) { 
            cout << " ";
        }
        j++;
        cout << endl;
        n--;
        }
        n++;
        j=0;
        while(n<a) {
            j++;
            for(int i=0;i<j;i++) { 
            cout << " ";
        }
        for(int i=0;i<=n;i++) {
            cout << "*";
        }
        for(int i=0;i<2*a-1-n-1-j;i++) {
            cout << " ";
        }
        cout << endl;
        n++;
        }
    }
    else {
        int j=0;
        while(n>0) {
        for(int i=0;i<2*j;i++) {
            cout << " ";
        }
        for(int i=0;i<n;i++) { 
            cout << "*";
        }
        for(int i=0;i<2*a-1-n-2*j;i++) { 
            cout << " ";
        }
        j++;
        cout << endl;
        n--;
        }
        n++;
        j=0;
        while(n<a) {
            j++;
            for(int i=0;i<2*a-1-n-1-j;i++) { 
            cout << " ";
        }
        for(int i=0;i<=j;i++) {
            cout << "*";
        }
        for(int i=0;i<n;i++) {
            cout << " ";
        }
        cout << endl;
        n++;
        }
    }
}