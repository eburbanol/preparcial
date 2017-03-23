  #include <iostream>



 int main () 
{
    for (int i=2; i<1000000000; i++) 
        for (int j=2; j<i; j++)
        {
            if (i % j == 0) 
                break;
            else if (i == j+1)
	      std::cout << i << " ";

        }   
    return 0;
}
