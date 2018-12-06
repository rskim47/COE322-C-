        program f3
        
        implicit none
        
        integer n, factor1, factor2
        real n3, n5 ! remainders 
        ! Entering value of integer 
        n = 12
        ! Factors of division 
        factor1 = n / 3
        factor2 = n / 5 
        ! Calculating factors 
        n3 = n - factor1 * 3 
        n5 = n - factor2 * 5 
        ! output functions 
        if (n3 == 0 .and. n5 == 0) then 
                print *, "FizzBuzz" 
        elseif (n3 == 0) then
                print *, "Fizz" 
        elseif (n5 == 0) then 
                print *, "Buzz"
        endif 
        end program 
