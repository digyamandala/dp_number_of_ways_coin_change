#include <iostream>
#include <vector>

using namespace std;

/*
  CALCULATE MINIMUM NUMBER WAYS TO CHANGE COIN WHICH VALUE IS 'x'
  USING DYNAMIC PROGRAMMING
  Formula to find minimum coins to change 'x':
  f(x) =  f(x-coin(1)) + f(x-coin(2)) + ... + f(x-coin(n))
*/


vector<int> generateNumberOfWays(int* coins, int coin_length, int val){

  vector<int> ways(1000);
  ways[0] = 1;
  for(int i = 0 ; i <= val ; i++) {
    for(int j = 0 ; j < coin_length ; j++) {
      if(i - coins[j] >= 0) {
        ways[i] = ways[i] + ways[i - coins[j]];
      }
    }
  }
  return ways;
}

int main() {

  int coins[1000];
  coins[0] = 1;
  coins[1] = 3;
  coins[2] = 4;
  int lenCoins = 3;

  int val;
  cin >> val;

  vector<int> numberOfWays = generateNumberOfWays(coins, lenCoins, val);

  for(int i = 0 ; i <= val ; i++) {
    cout << "ways to change $" << i << ": " << numberOfWays[i] << " ways" << endl;
  }
  
  return 0;
}
