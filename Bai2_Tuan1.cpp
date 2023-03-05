#include <iostream>
using namespace std;
void Mauso(int &n)
{
    do
    {
        if (n!=0) break;
        cout << "Nhap lai mau so: "; cin >> n;
    } while (n==0);
}
void UCLN(int &a, int &b)
{
   for(int i=min(abs(a),abs(b)); i>0; i--)
   {
       if (a%i==0 && b%i==0)
       {
         a/=i;
         b/=i;

       }
   }
}
void PSTG(int &a, int &b)
{
    if (b<-1) cout << -a << "/" << -b;
    else if (b==-1) cout << -a;
    else if (b ==1)cout << a;
    else if (b>1) cout << a << "/" << b;
    else if (b==a) cout << "1";
    else if (b==-a || -b==a) cout << "-1";
}
int main()
{
    int ts1, ms1, ts2, ms2;
    cout << "Nhap vao tu so 1: "; cin >> ts1;
    cout << "Nhap vao mau so 1: "; cin >> ms1;
    Mauso(ms1);
    UCLN(ts1, ms1);
    cout << "Nhap vao tu so 2: "; cin >> ts2;
    cout << "Nhap vao mau so 2: "; cin >> ms2;
    Mauso(ms2);
    UCLN(ts2, ms2);
    cout << "Phan so dau tien la: "; PSTG(ts1, ms1); cout << endl;
    cout << "Phan so thu hai la: "; PSTG(ts2, ms2); cout << endl;
    float p=ts1/ms1;
    float q=ts2/ms2;
    if (p>q) cout << "Phan so lon nhat la: " << ts1 << "/" << ms1 << endl;
    else if (p<q) cout << "Phan so lon nhat la: " << ts2 << "/" << ms2 << endl;
    else cout << "Ca hai phan so bang nhau";
    return 0;
}
