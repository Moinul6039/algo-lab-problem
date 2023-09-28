#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,min,max,numStore,temp;
    cin>>t;
 while (t--)
    {
        min = 99; max = 0;
        cin >> numStore;

        for (int i = 0; i < numStore; ++i)
        {
            scanf("%d", &temp);

            if (temp < min)
                min = temp;
            if (temp > max)
                max = temp;
        }

        printf("%d\n", (max - min) * 2);




}
return 0;
}
