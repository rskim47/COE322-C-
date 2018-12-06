        program f4

        implicit none 
        integer :: a = 3, b = 9 

        if (mod(b,a) == 0) then
                print *, a, " is a divisor of", b
        else 
                print *, a, " is not a divisor of", b
        endif 
        end program
