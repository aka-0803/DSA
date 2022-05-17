<<<<<<< HEAD
// advance recursion qus

// 1.  PERMUTATION

// #include<iostream>
// using namespace std;
// void permut(string s, string ans){
//     if (s.length()==0)
//     {
//         cout<<ans<<endl;
//         return;
//     }
//     //fix one char and permutate other
//     for (int i = 0; i < s.length(); i++)
//     {
//         char ch = s[i];
//         string ros = s.substr(0,i)+s.substr(i+1);
//         // recursion
//         permut(ros,ans+ch);
//     }

// }
// int main()
// {
//     permut("ABC"," ");
//     return 0;
// }

// 2. MAZE :)     // n here means nxn boxes , i & j are iterators and are required recursively

// #include <iostream>
// using namespace std;
// int maze(int n, int i, int j)
// {
//     if (i == n-1 && j == n - 1)
//     {
//         return 1;
//     }
//     if (i >= n || j >= n)
//     {
//         return 0;
//     }
//     return maze(n, i + 1, j) + maze(n, i, j + 1);
// }
// int main()
// {
//    cout<<maze(3,0,0);
//     return 0;
// }

=======
// advance recursion qus

// 1.  PERMUTATION

// #include<iostream>
// using namespace std;
// void permut(string s, string ans){
//     if (s.length()==0)
//     {
//         cout<<ans<<endl;
//         return;
//     }
//     //fix one char and permutate other
//     for (int i = 0; i < s.length(); i++)
//     {
//         char ch = s[i];
//         string ros = s.substr(0,i)+s.substr(i+1);
//         // recursion
//         permut(ros,ans+ch);
//     }

// }
// int main()
// {
//     permut("ABC"," ");
//     return 0;
// }

// 2. MAZE :)     // n here means nxn boxes , i & j are iterators and are required recursively

// #include <iostream>
// using namespace std;
// int maze(int n, int i, int j)
// {
//     if (i == n-1 && j == n - 1)
//     {
//         return 1;
//     }
//     if (i >= n || j >= n)
//     {
//         return 0;
//     }
//     return maze(n, i + 1, j) + maze(n, i, j + 1);
// }
// int main()
// {
//    cout<<maze(3,0,0);
//     return 0;
// }

>>>>>>> dafe6099b107e1e3fcd87084d1a31d9f8d560be5
