//solution 1
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


//solution 2

int j = -1;
    //place the pointer j:
    for (int i = 0; i < n; i++) {
        if (a[i] == 0) {
            j = i;
            break;
        }
    }
    //no non-zero elements:
    if (j == -1) return a;

    //Move the pointers i and j
    //and swap accordingly:
    for (int i = j + 1; i < n; i++) {
        if (a[i] != 0) {
            swap(a[i], a[j]);
            j++;
        }
    }
    return a;
