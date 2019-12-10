# number_of_ways_coin_change
Generate number of ways to change coin which value is 'x'

<img src="https://latex.codecogs.com/gif.latex?f(0)&space;=&space;1" title="f(0) = 1" />
<img src="https://latex.codecogs.com/gif.latex?f(x)&space;=&space;\sum_{i&space;=&space;0}^{n}f(x-coin_i)" title="f(x) = \sum_{i = 0}^{n}f(x-coin_i)" />

where
<img src="https://latex.codecogs.com/gif.latex?(x&space;-&space;coin_i)\geq&space;0" title="(x - coin_i)\geq 0" />

<img src="https://latex.codecogs.com/gif.latex?TimeComplexity:&space;O(NK)" title="TimeComplexity: O(NK)" />
