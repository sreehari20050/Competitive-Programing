 vector<int> b;
    int zero = 0;
    for(int i = 0 ; i < n ; i++){
        if(a[i] != 0){b.push_back(a[i]);}
        else{
            zero++;
        }
    }
    for(int i = 0 ; i < zero ; i++){
        b.push_back(0);
    }

    return b;
