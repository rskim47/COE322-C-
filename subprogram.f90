        program subprogram
        implicit none 

        integer :: a, b, c 
        
        a = 5 
        b = 10 
        c = sum(a,b) 
        
        print *, a, b, c 

        contains 
        real function sum(a,b)
                integer :: a,b 

                sum = a + b 
        end function sum
        end program  
