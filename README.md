# Delta-Hedging-System
--------------------------------------------
- The project consists of two parts. 

- In the first part stock prices are simulated using random normal variables 
and then the prices of call options targeting on the stock are calculated with given parameters such as sigma and time periods. 
A portfolio is thus constructed using delta hedging, which means that investors buy (delta*stock price) amount of stocks in a portfolio
and sell a call option simultaneously. Hedging errors as well as wealth are calculated.

-The second task is the other way around. Given the market stock price and market option price, 
implied volatility needs to be calculated using Newton’s Method. 
Then a delta hedging portfolio is constructed based on calculated sigma and delta.

- Quantlib Library needed. (To get Trading days of a year)

- Recommended to run on Visual Studio.

