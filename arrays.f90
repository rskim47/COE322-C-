        program arrays 
        implicit none 
        integer :: i
        real, dimension(5) :: A = (/1, 2, 3, 4, 5 /)
        real, dimension(5) :: B = [1.1, 2.2, 3.3, 4.4, 5.5]

        do i = 1, 5    
                print *, A(i) 
        end do 

        end program arrays 
