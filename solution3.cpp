#include <iostream>
#include <map>
using namespace std;
string getDomain(string email){
    int i = 0;
    for(;i < email.length(); i++){
        if(email[i] == '@'){
            break;
        }
    }
    return email.substr(i+1);
}

int sendmail(string email){
    cout << email << endl;
}

int solution(string emails[], int n) {
    map<string, string> mp;
    
    for(int i=0; i<n; i++){
        string email = emails[i];
        string domain = getDomain(email);
        if(mp.find(domain) == mp.end()){
            mp.insert({domain, email});
        }
        else{
            string oldemail = mp[domain];
            if(oldemail > email){
                mp[domain] = email;
            }
        }
    }
    
    for(pair<string, string> p : mp){
        sendmail(p.second);
    }
}

int main(){
    string emails[]={"ghi@hotmail.com", "def@yahoo.com", "ghi@gmail.com",
    "abc@channelier.com", "abc@hotmail.com", "def@hotmail.com", "abc@gmail.com", "abc@yahoo.com", 
    "def@channelier.com","jkl@hotmail.com", "ghi@yahoo.com", "def@gmail.com" } ;
    int n =sizeof(emails)/sizeof(emails[0]);
    solution(emails, n);
   
};
