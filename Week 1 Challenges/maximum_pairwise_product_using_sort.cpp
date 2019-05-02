#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;

long long MaxPairwiseProductFast(const vector<long long int64_t> &number)
{
    long long result = 0;
    long n = number.size();
    result = number.at(n-1) * number.at(n-2) ;
    return result;
}

int main()
{
    int n;
    cin>>n;
    vector<long long int64_t>numbers(n);
    for(int i = 0; i <n; i++){
     cin>>numbers[i];
    }
   sort(numbers.begin(), numbers.end());

    long long result = MaxPairwiseProductFast(numbers);

    cout<<result<<"\n";

    return 0;
}
