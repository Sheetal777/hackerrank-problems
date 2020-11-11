#include <bits/stdc++.h>

using namespace std;

// Complete the solve function below.
void solve(double meal_cost, int tip_percent, int tax_percent) {
    int total;
    float p;
        int a=0;
        double meal= meal_cost;
        float tip= tip_percent * 0.01;
        float tax= tax_percent*0.01;
        double t1,t2;

t1= meal*tip;
t2= meal*tax;

p=meal+t1+t2;
total= meal+t1+t2;

p=p-total;

  if(p>=0.5)
  {
      a=1;
  }
    if(a==1)
    {
        cout<<total+1;
    }
        else
        
          cout<<total;
        

}

int main()
{
    double meal_cost;
    cin >> meal_cost;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int tip_percent;
    cin >> tip_percent;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int tax_percent;
    cin >> tax_percent;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    solve(meal_cost, tip_percent, tax_percent);

    return 0;
}
