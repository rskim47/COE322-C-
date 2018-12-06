        program inclassf5 
        implicit none 
        integer :: i,j,k,l, count = 0, rep = 0 
        real, dimension(100,100) :: W
        integer, dimension(100) :: U, V
        
        do i = 1, 100 
                do j = 1, 100 
                        W(i,j) = i*i + j*j ! Setting values for W 
                        if (mod(SQRT(W(i,j)),1.0) == 0) then   
                                do l = 1, count-1  ! omitting repeats
                                   if (V(l)== i .AND. U(l)== j) then  
                                        rep = 1; 
                                   end if 
                                end do 
                                if (rep == 0) then ! solution array 
                                        count = count + 1 
                                        U(count) = i 
                                        V(count) = j
                                end if 
                                rep = 0 ! resetting switch for repeats
                        end if 
                end do 
        end do 

        do k = 1, count ! output 
           print *,"U: ", U(k), " V: ", V(k), " W:",U(k)*U(k)+V(k)*V(k)
        end do
        print *,"There are total of: ", count, " solutions"
        end program
                
