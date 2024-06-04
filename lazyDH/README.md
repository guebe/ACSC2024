
The given code uses a lazy implementation of Diffie-Hellman key exchange to do encryption. The way how the code is written, and the way randomness is used gives us means to decrypt the secret by using a clever way of brute-forcing.

The problems solve is that 
$gb^{(a + 111111111111111111111111111111111111111)}$ can
be rewritten as $gb^a \times gb^{111111111111111111111111111111111111111}$

* $gb^a$ is given (in the variable *shared*)
* $gb$ is also given

so we rewrite it as
$shared \times gb ^ {111111111111111111111111111111111111111}$

Because of the number $111111111111111111111111111111111111111$ 
is in fact created randomly out of zeros and ones we have to probe for the solution.

However, we do not have to probe for all possible combinations, which would take too long. To improve probing time:
* we start probing with 0 zeros (1 try).
* Then with 1 zero (39 tries).
* Then with 2 zero.
* ...
* until 6 zeros.

Please note that it is most likely that there are up to 4 or 5 zeros in a 39 digit number (128 bit number always consists of 39 digits).
This is because zeros only emerge if the digit 9 is chosen for the random digit.

```
cd input
python3 ../solve.py
...
wait a little while :)
...
111111100111111110111111111111111111
111111100111111101111111111111111111
111111100111111011111111111111111111
111111100111110111111111111111111111
openECSC{kn0wn_d1ff3r3nc3_0f_a_m34ns_kn0wn_d1ff3r3nc3_0f_sh4r3d_883c5d32}
```

Please note that probing does not take too long because we cleverly reduced the problem space.

