   int absdiff;
    if (*a > *b)
    {
        absdiff = *a - *b;
    }
    else
    {
        absdiff = *b - *a;
    }
    *a = sum;
    *b = absdiff;
}