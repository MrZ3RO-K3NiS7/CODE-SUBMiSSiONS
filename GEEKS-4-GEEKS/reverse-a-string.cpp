string reverseWord(string str)
{
    int S = 0;
    int E = str.size() - 1;
    while (S <= E)
    {
        swap(str[S], str[E]);
        S++;
        E--;
    }
    return str;
}
