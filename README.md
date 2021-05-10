# Abstract:

In this project I have presented a simple approach to Data Encryption Standard
(DES) decryption using OpenMP framework. In order to allow a parallel
idiom, I have re-implemented a version of DES algorithm. I've also studied
the behaviour of decryption process in two different strategies : a “brute
force” version and a dictionary based version.

This OpenMP implementation has shown good results in speedup terms on
8-characters passwords using an ad-hoc dictionary

## Introduction: 
The Data Encryption Standard (DES) is a symmetric-key algorithm for
encryption of electronic data developed in the early 70s at IBM. In
1977, after the acceptance of National Security Agency (NSA), it was
published as an official Federal Information Processing Standard (FIPS)
for the United States.
The algorithm is designed to encipher and decipher blocks of data
consisting of 64 bits under control of a 64-bit key. A block, to be
enciphered, is subjected to an initial permutation, then to a complex keydependent computation and finally to a permutation which is inverse of the
initial one. The key-dependent computation can be simply defined in terms
of a function f called cipher function.

## Algorithm:
The classic algorithm aims to crypt a 64 bits data with a 64 bits key of
which only 56 bits are used (the other 8 bits may be used for error
detection). Generally [a-zA-Z0-9./] is supposed as the key characters set.
Whenever you want to protect a file with a password, you can split it into
64 bits blocks then use DES algorithm to encrypt each of them but, in this
case, what we really want is to encrypt the key without a “real” 64 bits
data. To allow it, usually a null 8-bytes (64-bits) string is used as data
input.

<center><img src = "https://www.tutorialspoint.com/cryptography/images/des_structure.jpg" height = "400" width = "400"></img></center>

## Output: 
<center><img src = "https://i.ibb.co/C0NVP9r/Screenshot-2021-05-11-at-3-44-19-AM.png" height = "600" width = "500"></img></center>
