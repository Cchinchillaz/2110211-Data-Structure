int a,q;
    for(int i=0; i<m; ++i){
        cin >> a >> q;
        if(a==1){
            auto it = upper_bound(decrease.begin(),decrease.end(),make_pair(q,0));
            --it;
            cout << it->second << "\n";
        }
        else{
            auto it = upper_bound(q2.begin(),q2.end(),make_pair(q,0));
            if(it >= q2.end()-1) cout << q2.end()->first+1;
            else{
                ++it;
                cout << it->first << "\n";
            }
        }
    }