
            int count=0;
            for(int i=0;i<n;i+=2){
                if(arr[i]==max || arr[i+1]==max){
                    continue;
                }
                else{
                    count++;
                }
            }
            cout<<count<<en