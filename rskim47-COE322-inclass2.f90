        program lab2 

        implicit none
        real :: a, b, c, v, d, d1 
        character(len = 10)  :: name1
        real, parameter :: pi = 3.14159
        !reading input
        print *, 'Enter a: ' 
        read *, a
        print *, 'Enter b: '
        read *, b 
        print *, 'Enter c: '
        read *, c 
        print *, 'Enter your name: ' 
        read *, name1  
        print *, 'Hey ', name1, '!'  
        ! calculating volume of sphere
        v = (4.0/3)*pi*a**3
        print *, 'The volume of sphere with radius ', a , 'is: ', v
        ! Calculating volume of cubve     
        v = a*b*c 
        print *, 'The volume of cube is: ', v 

        d = (a*b*c)/7 
        d1 = int(d)
        print *, 'Converting ', d , 'to an integer: ',  d1        

        end program lab2

