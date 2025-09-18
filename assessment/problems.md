# Assessment Problems

Follow the [assessment instructions](assessment.md) and [guidance](guidance.ipynb) closely to ensure you solve the following problems correctly.

The following five problems focus on different aspects of the [Secure Hash Standard](https://nvlpubs.nist.gov/nistpubs/FIPS/NIST.FIPS.180-4.pdf). \
A copy of the standard is [available in the materials folder](../materials/secure-hash-standard.pdf).

## Problem 1: Binary Words and Operations

Implement the following functions in Python.
Use numpy to ensure that all variables and values are treated as 32-bit integers.
These functions are defined in the Secure Hash Standard (see page 10).

1. `Parity(x, y, z)`
2. `Ch(x, y, z)`
3. `Maj(x, y, z)`
4. `Sigma0(x)` - written as $\Sigma_0^{\{256\}}(x)$ in the standard.
5. `Sigma1(x)` - written as $\Sigma_1^{\{256\}}(x)$ in the standard.
6. `sigma0(x)` - written as $\sigma_0^{\{256\}}(x)$ in the standard.
7. `sigma1(x)` - written as $\sigma_1^{\{256\}}(x)$ in the standard.

Document each function with a clear [docstring](https://peps.python.org/pep-0257/), explain its purpose and behaviour in Markdown, and test it with appropriate examples to verify correctness.

## Problem 2: Fractional Parts of Cube Roots

Use numpy to calculate the constants listed at the bottom of page 11 of the Secure Hash Standard, following the steps below.
These are the first 32 bits of the fractional parts of the cube roots of the first 64 prime numbers.

1. Write a function called `primes(n)` that generates the first n prime numbers.

2. Use the function to calculate the cube root of the first 64 primes.

3. For each cube root, extract the first thirty-two bits of the fractional part.

4. Display the result in hexadecimal.

5. Test the results against what is in the Secure Hash Standard.

## Problem 3: Padding

Write a [generator function](https://realpython.com/introduction-to-python-generators/) `block_parse(msg)` that processes messages according to section 5.1.1 and 5.2.1 of the Secure Hash Standard.
The function should accept a [bytes object](https://realpython.com/python-bytes/) called `msg`.
At each iteration, it should yield the next 512-bit block of `msg` as a bytes object.
Ensure that the final block (or final two blocks) include the required padding of `msg` as specified in the standard.
Test the generator with messages of different lengths to confirm proper padding and block output.

## Problem 4: Hashes

Write a function `hash(current, block)` that calculates the next hash value given the `current` hash value and the next message `block` according to section *6.2.2 SHA-256 Hash Computation* on page 22 of the Secure Hash Standard.

## Problem 5: Passwords

The following are the SHA-256 hashes of three common passwords that have been hashed using one pass of the SHA-256 algorithm.
As strings, they were encoded using [UTF-8](https://en.wikipedia.org/wiki/UTF-8).
Determine the passwords and explain how you found them.
Suggest ways in which the hashing of passwords could be improved to prevent the kind of attack you performed to find the passwords.

1. `5e884898da28047151d0e56f8dc6292773603d0d6aabbdd62a11ef721d1542d8`
2. `873ac9ffea4dd04fa719e8920cd6938f0c23cd678af330939cff53c3d2855f34`
3. `b03ddf3ca2e714a6548e7495e2a03f5e824eaac9837cd7f159c67b90fb4b7342`

## End
