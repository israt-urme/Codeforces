#include<bits/stdc++.h>
using namespace std;

void sort(vector<int> & bar);
void mergeSort(vector<int>&left,vector<int>& right,vector<int>& bars);

int main()
{
    long long n;
    scanf("%lld",&n);
    long long m,q,i,j,x;
    vector<int>a;
    for(i=0;i<n;i++)
    {

        cin>>x;
        a.push_back(x);
    }

    sort(a);

    scanf("%lld",&m);
    while(m--)
    {
        scanf("%lld",&q);
        long long sum=0,c=0;
        for(j=n-1;j>=0;j--)
        {
            c++;
            if(c==q)
                continue;
            sum=sum+a[j];
        }
        cout<<sum<<endl;
    }
    return 0;
}


void sort(vector<int> & bar) {
    if (bar.size() <= 1) return;

    int mid = bar.size() / 2;
    vector<int> left;
    vector<int> right;

    for (size_t j = 0; j < mid;j++)
        left.push_back(bar[j]);
    for (size_t j = 0; j < (bar.size()) - mid; j++)
        right.push_back(bar[mid + j]);

    sort(left);
    sort(right);
    mergeSort(left, right, bar);
}
void mergeSort(vector<int>&left, vector<int>& right, vector<int>& bars)
{
    int nL = left.size();
    int nR = right.size();
    int i = 0, j = 0, k = 0;

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
