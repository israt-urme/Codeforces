#include<bits/stdc++.h>
using namespace std;

void sort(vector<long long> & bar);
void mergeSort(vector<long long>&left,vector<long long>& right,vector<long long>& bars);

int main()
{
    long long n;
    scanf("%lld",&n);
    long long m,q,i,j,x;
    vector<long long>a;
    for(i=0;i<n;i++)
    {

        cin>>x;
        a.push_back(x);
    }

    sort(a);
    vector< long long> b(a);

    for(i=1;i<b.size();i++)
    {
        b[i]=b[i]+b[i-1];
    }

    scanf("%lld",&m);
    while(m--)
    {
        scanf("%lld",&q);
        cout<<b[n-1]-a[n-q]<<endl;
    }
    return 0;
}


void sort(vector<long long> & bar) {
    if (bar.size() <= 1) return;

    long long mid = bar.size() / 2;
    vector<long long> left;
    vector<long long> right;

    for (size_t j = 0; j < mid;j++)
        left.push_back(bar[j]);
    for (size_t j = 0; j < (bar.size()) - mid; j++)
        right.push_back(bar[mid + j]);

    sort(left);
    sort(right);
    mergeSort(left, right, bar);
}
void mergeSort(vector<long long>&left, vector<long long>& right, vector<long long>& bars)
{
    long long nL = left.size();
    long long nR = right.size();
    long long i = 0, j = 0, k = 0;

    while (j < nL && k < nR)
    {
        if (left[j] < right[k]) {
            bars[i] = left[j];
            j++;
        }
        else {
            bars[i] = right[k];
            k++;
        }
        i++;
    }
    while (j < nL) {
        bars[i] = left[j];
        j++; i++;
    }
    while (k < nR) {
        bars[i] = right[k];
        k++; i++;
    }
}
