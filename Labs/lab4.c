#include <stdio.h>

int main(){
    /*
    Fluid mechanics is the discipline concerned with the behaviour of liquids and gases at
    rest or in motion. This field encompasses a variety of applications: from flow in microchannels to the motion of airplanes.

    An important area of fluid mechanics is flow through pipes. In a circular pipe, the fluid,
    e.g. water, is at rest adjacent to the wall of the pipe and reaches a maximum velocity at
    the centre of the pipe. Fully developed laminar flow has a parabolic velocity profile of
    the form:

    where v is the axial velocity at position r, (del)p is the pressure loss over pipe length L, v is
    the dynamic viscosity and Ris the radius of the pipe.
    Water ( mu = 1.002 x 10-3 Ns/m2) is flowing through a 0.10 m diameter pipe. There is a 10
    Pa loss per 100 m of pipe. Determine the velocity distribution in the radial direction by
    writing a program that:
    > reads the diameter, dynamic viscosity, pressure loss and length of pipe from the
    keyboard, and exits the program if any of these values are not positive;
    > outputs to the screen the velocity starting from the center of the pipe to the wall,
    every R/10 of the pipe.
    */

    float d,mu,p,l,v;

    printf("Diameter (m): ");
    scanf("%f",&d);
    if (d <= 0) return -1;

    printf("Dynamic viscosity (N s m^2): ");
    scanf("%f",&mu);
    if (mu <= 0) return -2;

    printf("Pressure loss (Pa): ");
    scanf("%f",&p);
    if (p <= 0) return -3;

    printf("Pipe Length (m): ");
    scanf("%f",&l);
    if (l <= 0) return -4;

    printf("\n");

    float r;
    for(r = 0; r<=d/2; r+=d/20){
        v = (p/(4*mu*l))*(d/2)*(d/2)*(1-(2*r/d)*(2*r/d));
        printf("Velocity at %.3f m from center: %.7f m/s\n", r,v);
    }

    return 0;
}
