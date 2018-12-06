        module PointMod
        implicit none 
        real    :: x , y 
        
        type Point
                real :: x,y
  
        end type Point 
  
        contains 
        subroutine distance(a,b,dist) 
                type(Point) :: a,b 
                real :: x_distance, y_distance
                real, intent(inout) ::  dist
                x_distance = a%x - b%x
                y_distance = a%y - b%y
                dist = SQRT(x_distance**2 + y_distance**2) 
        end subroutine 
        end module PointMod 


        program main 
        use PointMod 
        type(Point) :: p, q
        real :: dist = 0
        p%x = 3.0
        p%y = 5.0
        q%x = 10.0
        q%y = 15.0
        call distance(p,q,dist)
        print *, "the distance is: ", dist
        end program  
