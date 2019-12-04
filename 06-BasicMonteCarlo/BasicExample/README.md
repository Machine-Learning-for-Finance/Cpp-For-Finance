# Monte Carlo
- https://en.wikipedia.org/wiki/Monte_Carlo_method

>Monte Carlo methods, or Monte Carlo experiments, 
are a broad class of computational algorithms that 
rely on repeated random sampling to obtain numerical
 results. The underlying concept is to use 
 randomness to solve problems that might be 
 deterministic in principle. They are often used 
 in physical and mathematical problems and are 
 most useful when it is difficult or impossible 
 to use other approaches. Monte Carlo methods are 
 mainly used in three problem classes:[1] 
 optimization, numerical integration, and 
 generating draws from a probability distribution.

### Introductory Example

An option on equity may be modelled with one 
source of uncertainty: the price of the underlying 
stock in question.[2] Here the price of the 
underlying instrument 
$${\displaystyle \ S_{t}\,}\ S_{t}\$$, is usually 
modelled such that it follows a geometric Brownian 
motion with constant drift 
{\displaystyle \mu \,} \mu \, and volatility 
{\displaystyle \sigma \,}\sigma \,. So: 
{\displaystyle dS_{t}=\mu S_{t}\,dt+\sigma S_{t}\,dW_{t}\,}dS_{t}=\mu S_{t}\,dt+\sigma 
S_{t}\,dW_{t}\,, where {\displaystyle dW_{t}\,}dW_{t}\, is 
found via a random sampling from a normal distribution; 
see further under Black–Scholes. Since the underlying 
random process is the same, for enough price paths, 
the value of a european option here should be the same 
as under Black Scholes. More generally though, simulation 
is employed for path dependent exotic derivatives, 
such as Asian options.