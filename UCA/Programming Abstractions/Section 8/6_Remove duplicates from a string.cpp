string removeAllDups(string s)
{
string str;
    int len = s.length();
    for(int i = 0; i < len; i++)
    {
        char c = s[i];
        auto found = str.find(c);
        if (found == string::npos)
        {
            str += c;
        }
    }
    return str;
}