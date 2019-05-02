#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;

// long long MaxPairwiseProduct(const vector<int> &numbers) {
//     long long result = 0;
//     int n = numbers.size();
//     for (int i = 0; i < n; ++i) {
//         for (int j = i + 1; j < n; ++j) {
//             if (((long long) (numbers[i])) * numbers[j] > result) {
//                 result = ((long long) (numbers[i])) * numbers[j];
//             }
//         }
//     }
//     return result;
// }

long long MaxPairwiseProductFast(const vector<int> &number)
{
    long long result = 0;
    int n = number.size();
    result = number.at(n-1) * number.at(n-2);
    return result;
}

int main()
{
    // while(true)
    // {

    //     int n = rand() % 10000 + 2;
    //     cout<<n<<"\n";
    //     vector<int> a;
    //     for (int i =0; i<n; i++)
    //     {
    //         a.push_back(rand() % 10000000);
    //     }

    //       sort(a.begin(), a.end());

    //     for (int i = 0; i < n; i++)
    //     {
    //         cout<<a[i]<<" ";
    //     }
    //     cout<<endl;



    //     long long res1 = MaxPairwiseProduct(a);
    //     long long res2 = MaxPairwiseProductFast(a);

    //     if (res1 != res2)
    //     {
    //         cout << "Wrong answer: " << res1 << ' ' << res2 << "\n";
    //         break;
    //     }
    //     else
    //     {
    //         cout << "OK\n";
    //     }
    // }
    int n;
    cin>>n;
    vector<int>numbers(n);
    for(int i = 0; i <n; i++){
     cin>>numbers[i];
    }
   sort(numbers.begin(), numbers.end());

    long long result = MaxPairwiseProductFast(numbers);
     for(int i = 0; i <n; i++){
      cout<<numbers[i]<<" ";
    }
    cout<<result<<"\n";

    return 0;
}
