#include <iostream>
using namespace std;
void UCLN(int &a, int &b)
{
   for(int i=min(abs(a),abs(b)); i>0; i--)
   {
       if (a%i==0 && b%i==0)
       {
    a/=i;
    b/=i;
    if (b<-1) cout << "Phan so da toi gian: " << -a << "/" << -b;
    else if (b==-1) cout << "Phan so da toi gian: " << -a;
    else if (b==0) cout << "Phan so da cho khong xac dinh";
    else if (b ==1)cout << "Phan so da toi gian: " << a;
    else if (b>1) cout << "Phan so da toi gian: " << a << "/" << b;
    else if (b==a) cout << "Phan so da toi gian: " << "1";
    else if (b==-a || -b==a) cout << "Phan so da toi gian: " << "-1";
                   break;
       }
   }
}
int main()
{
 int ts, ms;
    cout << "Nhap vao tu so: "; cin >> ts;
    do
    {
        cout << "Nhap vao mau so (khac 0): "; cin >> ms;
    } while (ms==0);
    UCLN(ts,ms);
    return 0;

}
