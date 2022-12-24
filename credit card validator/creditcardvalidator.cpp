#include<bits/stdc++.h>
using namespace std;
//return the number of digits given the card number
int getdigit(long n){
string s=to_string(n);
return s.length();}
//performs floyd algorithm and returns the result
bool func(string s){
    int n=s.length();
    int g,j,h,sum=0;
  vector<int> a;
  for(int i=0;i<n;i++){
      a.push_back(s[i]-48);
  }
    for(int i=n-2;i>=0;i-=2){
       
        g=(a[i]*2);
        if((g/10)!=0)
        {
            
            a[i]=(g/10)+(g%10);
           
            
        }
        else
        a[i]=g;
         
       
        
    }
   
    for(int i=0;i<n;i++){
        sum+=a[i];
     
    }
   
    
   
    if(sum%10==0)
    return true;
    else
    return false;
}
//checks whether the prefix of the credit number is valid or not
bool pref(string s){
if(s[0]=='4'||s[0]=='5'||(s[0]=='3'&&s[1]=='7')||s[0]=='6')
return true;
else
return false;}

int main(){
 long n,temp;
    int t;
//cout<<"how many cards you want to verify";
cin>>t;
   
while(t>0){
t--;
  //  cout<<"Enter your credit card no."; 
  cin>>n;
  string s=to_string(n);
int num=getdigit(n);

    if(func(s)&&((num>=13&&num<=16)&&(pref(s)))){
        cout<<"Your Card having number"<<n<<" is Valid";
        
    }
    else
    {
        cout<<"Your Card having number "<<n<<" is invalid";
        
    }
    cout<<endl;
}
    return 0;
}