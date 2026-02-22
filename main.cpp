#include<bits/stdc++.h>
using namespace std;
using VI=vector <long double > ;
int term;
void generateContinuedFraction(long double k){
    for(int i=1;i<=50;i++){
        cout<<floor(k)<<" ";
        k-=floor(k),k=1/k;
    }
}
struct matrix{
    int _n,_m;
    vector <VI > f;
    matrix (int _n,int _m): _n(_n),_m(_m),f(_n,VI(_m)){}
    matrix operator*(const matrix &x) const {
        matrix c=matrix(_n,x._m);
        for(int k=0;k<_m;k++)
            for(int i=0;i<_n;i++)
                for(int j=0;j<x._m;j++)
                    c.f[i][j]+=f[i][k]*x.f[k][j];
        return c;
    }
};
matrix matrixExponentiation(matrix x,int b){
    matrix res=x; b--;
    while(b){
        if(b&1) res=res*x;
        x=x*x, b>>=1;
    } return res;
}
int main(){
    ios::sync_with_stdio(false),cin.tie(0);
    cin>>term; matrix st=matrix(1,2),transformationMatrix=matrix(2,2);
    st.f={{1,1}}, transformationMatrix.f={{0,1},{1,1}};
    transformationMatrix=matrixExponentiation(transformationMatrix,term), st=st*transformationMatrix;
    long double fir=st.f[0][0],sec=st.f[0][1];
    cout<<fir<<" "<<sec<<'\n';
    generateContinuedFraction(sec/fir),cout<<'\n',generateContinuedFraction((long double)(acos(-1.0))),cout<<'\n';
    printf("%.30llf",sec/fir);
    return 0;
}
