#include<bits/stdc++.h>
using namespace std;

int word(string str)
{
    return ((str=="one")?1:
        (str=="two")?2:
            (str=="three")?3:
                (str=="four")?4:
                    (str=="five")?5:
                        (str=="six")?6:
                            (str=="seven")?7:
                                (str=="eight")?8:
                                    (str=="nine")?9:
                                       (str=="zero")?0:0);
}

int main()
{
   while(1)
    {
    string s;
    cin>>s;
    cout<<word(s)<<endl;
    }
    return 0;
}
