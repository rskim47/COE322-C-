        program homework4 

        implicit none 
        integer n, i, indicate
        indicate = 0 ! initializing indicator, 0 = prime, 1 = not prime  
        do n = 0, 100 ! number for checking 
                do i = 2, n - 1 ! divisors 
                        if (mod(n,i) == 0) then 
                                print *,n,&
                                   'is not prime: it is divisible by', i
                                indicate = 1 ! not prime
                                exit ! exiting 2nd do loop 
                        endif  
                end do 
                if (indicate == 0) then 
                        print *,n, ' is prime'
                endif 
                indicate = 0 ! initializing 
        end do  
        end program
