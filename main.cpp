#include<iostram>
using nameapace std;
class main
{
  public:
  double x,n,z;
  void in()
  {
    cout<<"Enter First Number";
    cin>>x;
    cout<<"Enter Second Number";
    cin>>n;
  }
  void run
  {
    z=x+n;
    cout<<"Summation= "<<z;
  }
};
int main()
{
  main obj;
  obj.in();
  obj.run();
}
