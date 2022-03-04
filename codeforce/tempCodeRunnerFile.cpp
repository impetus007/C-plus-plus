        int arr[3][2];
        for(int i=0;i<3;i++){
            for(int j=0;j<2;j++){
                cin>>arr[i][j];
            }
        }
       int ans=0;
        for(int i=0;i<2;i++){
            if(arr[i][1]==arr[i+1][1]){
                ans += abs(arr[i][0]-arr[i+1][0]);
            }
        }
        cout<<ans<<endl;