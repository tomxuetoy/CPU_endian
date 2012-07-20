int checkCPU()
{
    {
        union w
        {  
            int  a;
            char b;
        } c;
        c.a = 1;
        return(c.b == 1);
    }
}

main()
{
    if(checkCPU())
        printf("Your CPU is little_endian\n");
    else
        printf("Your CPU is big endian\n");
}
