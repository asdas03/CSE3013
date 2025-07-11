/*
 * bitMask(x): Return a mask that has (32 - x) zeros followed by x ones.
 * - Assume 0 <= x <= 31
 * - Ex) bitMask(0) = 000...000 in binary = 0
 * - Ex) bitMask(31) = 011...111 in binary = 0x7fffffff
 */
int bitMask(int x) {
  int n = 2147483647;
  int pow = 32 +~x;
  n = n >> pow;
  return n;
}
