        program subprac
        implicit none         

        integer :: a = 2 , b = 3 
        print *, a , b ! original values
        call swap(a,b)
        print *, a , b ! values should be swapped 

        contains 
        subroutine swap(a,b) 
                integer :: a, b, temp 
                temp = a 
                a = b 
                b = temp
           
        end subroutine swap
        end program 
