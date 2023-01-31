
int main(int, const char*[])
{
    /* Cause security warning */
    char buffer[1];
    buffer[3] = 1;
    
    return 0;
}
