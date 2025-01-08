#include <bits/stdc++.h>

using namespace std;

#define optimize()              \
  cin.tie(0);                   \
  cin.sync_with_stdio(0);       \
  ios_base::sync_with_stdio(0); \
  cout.tie(0);

void solve()
{
  int n;
  cin >> n;
  vector<long long int> a(n);
  for (auto &c : a)
    cin >> c;

  int idx = -1;
  int idx2 = -1;
  for (int i = 0; i < n - 1; i++)
  {
    if (a[i] > a[i + 1])
    {
      idx = i;
      break;
    }
  }

  if (idx == -1)
  {
    cout << "YES" << "\n";
    return;
  }

  for (int i = idx; i < n - 1; i++)
  {
    if (a[i] < a[i + 1])
    {
      idx2 = i;
      break;
    }
  }

  if (idx2 == -1)
    cout << "YES" << "\n";
  else
    cout << "NO" << "\n";
}

int main(void)
{
  optimize();
  int T;
  cin >> T;
  // T = 1;
  while (T--)
    solve();
}