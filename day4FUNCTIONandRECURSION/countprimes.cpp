int s=0;
        for( int i =2;i<=n;i++){
            int c=0;
            if(i<n){
            for(int j=1;j<=i;j++){
                
                if(i%j==0){
                    c++;
                }
            }
            if(c==2){
                s++;
            }
            }

        }
        return s;