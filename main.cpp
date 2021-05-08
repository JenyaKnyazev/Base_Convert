#include <iostream>

using namespace std;
long long to_decimal(string s,int base){
    long long res=0;
    int mul=1;
    for(int i=s.length()-1;i>=0;i--,mul*=base){
        if(s[i]>='0'&&s[i]<='9')
            res+=mul*(s[i]-'0');
        else
            res+=mul*(s[i]-'A'+10);
    }
    return res;
}
string from_decimal_to_base(long long dec,int base){
    string res="";
    while(dec>0){
        int n=dec%base;
        if(n>=0&&n<=9){
            res=(char)(('0'+n))+res;
        }else
            res=(char)(('A'+n-10))+res;
        dec/=base;
    }
    return res;
}
void run(){
    string number;
    int from_base,to_base;
    while(true){
        cout<<"Enter starting base"<<endl;
        cin>>from_base;
        cout<<"Enter number"<<endl;
        cin>>number;
        cout<<"Enter to base"<<endl;
        cin>>to_base;
        cout<<"Result: "<<from_decimal_to_base(to_decimal(number,from_base),to_base)<<endl<<endl;
    }
}
int main()
{
    run();
    return 0;
}
