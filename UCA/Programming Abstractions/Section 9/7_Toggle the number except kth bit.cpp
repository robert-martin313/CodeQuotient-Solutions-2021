int toggleExceptKthBit(int n,int k){
  return ~((n)^(1<<k));
}