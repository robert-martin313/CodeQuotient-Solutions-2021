import java.lang.*;
import java.io.*;
import java.util.*;
class Result
{
  static String reverseString(String str)
  {
	StringBuilder str2 = new StringBuilder();
    str2.append(str);
    str2.reverse();
    String str3 = str2.toString();
    return str3;
  }
}