set<string> s1;
    for(int i=0;i<s.size();i++){
        if(s[i]=='{' || s[i]==',' ||s[i]=='}'){
            continue;
        }else{
            s1.insert(s[i]);
        }
    }
    cout<<s1.size()<<"\n";