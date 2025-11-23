// #include <iostream>
// using namespace std;

// int main() {
// int a, b=1;
// a=10;
// if(++a)
// cout<<b;
// else cout<<++b;
//     return 0;
// }



// #include <iostream>
// using namespace std;
// int main(){
// int a = 1;
// int b = 2;

// if (a-- > 0 && ++b > 2) {
//     cout << "Stage1  Inside If ";
// } else {
//     cout << "Stage2  Inside else ";
// }

// cout<< a << " " << b << endl; }



/*This is an OR (||) condition, so if the first part is true, the second part won’t be evaluated due to short-circuiting.
it skips the second part (++b > 2), so b remains unchanged.*/
// #include <iostream>
// using namespace std;

// int main()
// {
//     int a = 1;
//     int b = 2;

//     if (a-- > 0 || ++b > 2) {
//         cout << "Stage1 – Inside If ";
//     } else {
//         cout << "Stage2 – Inside else ";
//     }

//     cout << a << " " << b << endl;
// }





// #include <iostream>
// using namespace std;

// int main()
// {
//     int a = 1;
//     int b = a++;    // Post-increment
//     int c = ++a;    // Pre-increment
//     cout << b <<" ";
//     cout << c;
// }




#include <iostream>
using namespace std;

int main()
{
    int number = 3;
    cout << (25 * (++number));
}
