int factorial( int num );   

int main()
{
    int result, number;
    result = factorial( number );
}

int factorial( int num )     
{
    if ( ( num > 0 ) || ( num <= 10 ) )
        return( num * factorial( num - 1 ) );
}
