//Ali Babaei

#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int main()
{
    int n1;
    int n2;
    int n3;
    cin >> n1 >> n2 >> n3;

    vector<int> h1(n1);

    for(int h1_i = 0;h1_i < n1;h1_i++){
       cin >> h1[h1_i];
    }

    vector<int> h2(n2);

    for(int h2_i = 0;h2_i < n2;h2_i++){
       cin >> h2[h2_i];
    }

    vector<int> h3(n3);

    for(int h3_i = 0;h3_i < n3;h3_i++){
       cin >> h3[h3_i];
    }

    // get the sumof all three and store in diff ints
    int sumh1 = 0;
    int sumh2 = 0;
    int sumh3 = 0;

    for(int i = 0; i < h1.size(); i++)
    {
       sumh1+= h1[i];
    }

     for(int i = 0; i < h2.size(); i++)
    {
       sumh2+= h2[i];
    }

     for(int i = 0; i < h3.size(); i++)
    {
       sumh3+= h3[i];
    }




   stack<int> a;
   stack<int> b;
   stack<int> c;

   for (int i = h1.size()-1; i >= 0 ; i--)
   {
       a.push(h1[i]);
   }

   for (int i = h2.size()-1; i >= 0 ; i--)
   {
       b.push(h2[i]);
   }

    for (int i = h3.size()-1; i >= 0 ; i--)
   {
       c.push(h3[i]);
   }

    if(sumh1 == sumh2 && sumh2 == sumh3)
        cout<< sumh1 <<endl;
        //cout << sumh1 << " - " << h1.back() << " = " << sumh1 - h1.back() << endl;
    else {
            while(sumh1 != sumh2 && sumh2 != sumh3){
        for(int i = 0 ;i < h1.size(); i++)
        {
             if(sumh1 > sumh2 || sumh1 > sumh3)
             {
                sumh1 = sumh1 - a.top();
                a.pop();
             }
        }

        for(int i = 0 ;i < h2.size(); i++)
        {
             if(sumh2 > sumh3 || sumh2 > sumh1)
             {
                sumh2 -= b.top();
                b.pop();
             }
        }

        for(int i = 0 ;i < h3.size(); i++)
        {
             if(sumh3 > sumh1 || sumh3 > sumh2)
             {
                sumh3 -= c.top();
                c.pop();

             }
        }
            }

        if(sumh1 != sumh2 || sumh2 != sumh3)
        {
            cout << 0 << endl;
        }
        else
        cout << sumh1 <<endl;

    }

    return 0;
}
