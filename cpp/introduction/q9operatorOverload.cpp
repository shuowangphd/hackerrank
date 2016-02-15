class Matrix{
public:
    vector<vector<int> > a;
    Matrix operator+(Matrix& m2){
        int n0=a.size();
        for(int i=0;i<n0;i++){
            int n1=a[i].size();
            for(int j=0;j<n1;j++)
                a[i][j]+=m2.a[i][j];
        }
        return *this;
    }
};