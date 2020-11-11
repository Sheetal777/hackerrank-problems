#include <bits/stdc++.h>

using namespace std;



int main()
{
    int N; 
    scanf("%d",&N);
    if( N%2 == 1 || (N > 5 && N < 21))
        printf("Weird");

    else
        printf("Not Weird");

    cin >> N;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    return 0;
}
