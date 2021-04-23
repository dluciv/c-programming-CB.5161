int factorial(int v)
{
  return v <= 1 ? 1 : v * factorial(v - 1);
}
