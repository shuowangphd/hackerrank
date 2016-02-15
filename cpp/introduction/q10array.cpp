	int n,q,k;
	    cin>>n>>q;
	    int* m[n];
	    for(int i=0;i<n;i++){
	        cin>>k;
	        int* v=new int[k]; //
	        for(int j=0;j<k;j++)
	            cin>>v[j];
	        m[i]=v;
	    }
	    for(int i=0;i<q;i++){
	        cin>>n>>k;
	        cout<<m[n][k]<<endl;
	    }
		return 0;
	}