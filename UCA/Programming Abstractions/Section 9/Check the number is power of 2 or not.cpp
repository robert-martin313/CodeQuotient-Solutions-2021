int powerOf2(int num){
 if((num&(num-1))!=0)
   return false;
   return true; 
}