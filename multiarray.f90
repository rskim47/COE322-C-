        program multiarray
        implicit none
        integer :: i, j , k = 0
        integer, dimension(5,5) :: A 

        do i = 1 , 5 
                do j = 1, 5 
                        k = k + 1
                        A(i,j) = k
                end do
        end do

        print *, A 
               
        end program multiarray
