// tower of hanoi
// #include<iostream>
// using namespace std;
// void tower(int n,char src,char dest,char help){
//     // base condition
//     if(n==0){return;}
//     tower(n-1,src,help,dest);
//     cout<<"move from "<<src<<" to "<<dest<<endl;
//     tower(n-1,help,dest,src);
// }
// int main()
// {
//     tower(3,'A','C','B');
//     return 0;
// }

// generate all substring of a string
// func is void but the recursion is divided in two parts one including "ch" and one which doesn't

// #include<iostream>
// using namespace std;
// void sub(string s,string ans){
//     if(s.length()==0){
//         cout<<ans<<endl;
//         return;
//     }
//     char ch = s[0];
//     string ros = s.substr(1);
//     sub(ros,ans);
//     sub(ros,ans+ch);
// }
// int main()
// {

//     sub("ABC"," ");
//     return 0;
// }

// A good problem on recursion
// print all possible words frome phone digits
// ch-'0' = converts the value in ch to int as ascii code of 0 acts

// #include <iostream>
// using namespace std;
// // intially make an keypad array
// string keypadarr[] = {" ", "00", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

// void keypad(string s, string ans)
// {
//     if (s.length() == 0)
//     {
//         cout << ans << endl;
//         return;
//     }
//     char ch = s[0];
//     string code = keypadarr[ch - '0'];
//     string ros = s.substr(1);

//     for (int i = 0; i < code.length(); i++)
//     {
//         keypad(ros, ans + code[i]);
//     }
// }
// int main()
// {
//         keypad("23"," ");
//     return 0;
// }


// remove duplicates from strings

#include<iostream>
using namespace std;

string remove(string s){
    // base condition
    if(s.length()==0){
        return " ";
    }

char ch = s[0];
string ans = remove(s.substr(1));
if(ch==ans[0]){
    return ans;
}
return (ch+ans);
}
int main()
{
    string a = "aaaaabbbbdddff";
     cout<<remove(a);
    return 0;
}
