        program forfinal
        implicit none
        integer :: i, j = 3 , flag = 0, n = 10000, count = 1
        integer :: indicate=0, dist 
        integer, dimension(10100) :: p, r
        integer, dimension(10100) :: q  
        
        p(1) = 2
        q(1) = 2                                          
        ! Creating prime number array 
        do while (count < n+2) 
                call isPrime(j,indicate) 
                if (indicate  == 0) then
                        count = count + 1 
                        p(count) = j
                        q(count) = j  
                end if 
                j = j + 1 
        end do 
        ! adding more prome numbers for q 
        do while (count < n + 100) 
                call isPrime(j,indicate)
                if (indicate  == 0) then
                        count = count + 1 
                        q(count) = j 
                end if 
                j = j + 1 
        end do 
         
        ! Testing Goldbach theorem
        indicate = 1 
        do i = 1, 10 
                j = i + 1
                do while (indicate == 1)
                        dist = 2*p(i+2)-q(j+2)
                        call isPrime(dist,indicate)
                        if (indicate == 0) then 
                                r(i) = dist
                                print *, p(i+2), q(j+2), r(i)
                        else 
                                j = j + 1 
                        end if 
                end do
                indicate = 1
        end do   
        print *, p(1) 
        ! r value analysis 
        print *, 'The average of distance is: ', Sum(r)/size(r) 
        print *, 'The maximum distacne is: ', MaxVal(r) 
        print *, 'The minimum distance is: ', Minval(r)         

        ! isPrime checks for prime numbers, returns indicate 
        contains
                subroutine isPrime(a,indicate)
                integer :: a, i, indicate
                indicate = 0
                do i = 2, a - 1
                        if (mod(a,i)==0 .OR. a == 1) then 
                                indicate = 1
                        end if 
                end do  
        end subroutine isPrime
        end program
        
