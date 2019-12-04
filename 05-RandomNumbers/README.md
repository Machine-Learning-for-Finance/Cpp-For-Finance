# (Pseudo)Random Numbers

---

We will not be able to deal with actual random numbers, due to the way that computers
generate numbers, we will never have a truly random number generator with values pulled from the 
CPU.

There are ways to deal with this, depending on the level of "randomness" that you
need the pseudo-random numbers to be generated with.  There are various algorithms
which can be used to simulate randomness, a number of which are already implemented in 
the `random` standard library.  

More sophisticated (and expensive) methods include 
using the random nature of particles to generate (quasi | truely) random numbers
for use in simulations.  While this may seem like a lot of effort to go through for 
randomness, it has been shown that these more random numbers actually do improve the
performance of the algorithms associated. (I will try to find some references.)

---