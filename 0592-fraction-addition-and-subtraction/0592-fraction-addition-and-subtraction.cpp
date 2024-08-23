class Solution {
public:
    string fractionAddition(string expression) {
        stringstream s(expression);
        int A=0,B=1,a,b;
        char c;
        while(s>>a>>c>>b){
            A=A*b+B*a;
            B=b*B;
            int g = __gcd(abs(A),abs(B));
            A/=g;
            B/=g;

        }
        return to_string(A)+"/"+to_string(B);
    }
};