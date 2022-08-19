int hammingWeight(uint32_t n)
{
    int Count = 0;
    uint32_t i;

    for( i = 0; i < 32; i++ )
    {
        if( n & (1uL << i) )
        {
            Count++;
        }
    }

    return Count;
}
