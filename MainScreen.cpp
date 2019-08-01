

#include <iostream>
// SDL is the graphics package used
#include "SDL.h"
//Code.h is the header file used to combine the code with the graphics
#include "Code.h"
// Include cmath for some initial testing of graphics.
#include <cmath>



using namespace std;

void apply_surface(double X, double Y, SDL_Surface* source, SDL_Surface* destination )
{
    //Make a temporary rectangle to hold the offsets
    SDL_Rect offset;

    //Give the offsets to the rectangle
    offset.x = X;
    offset.y = Y;

    //Blit the surface
    SDL_BlitSurface( source, NULL, destination, &offset );

}



int main( int argc, char* args[] )
{


    //To get the console working again
    freopen( "CON", "wt", stdout );
    freopen( "CON", "wt", stderr );

    //Declarations
    string ex_n;
    string diff;
    string intl;
    double integral_x = 0;
    //Tried to make user inputted range but the compiler started crashing in some cases
    //float a, b;

    cout << "Please enter mathematical expression: f(x) = ";
    cin >> ex_n;

    cout << endl;

    cout << "Do you wish to plot differential of f(x)? (Yes/No): ";
    cin >> diff;

    cout << endl;

    cout << "Do you wish to plot definite integral of f(x)? (Yes/No): ";
    cin >> intl;

    cout << endl;

    //Returning dynamically allocated array
    double *p = function_x<double>(ex_n);
    double *ptr = p;

    //Trying the user inputted range
    /*cout << "Please enter the range:" << endl;
    cout << "Lower limit: ";
    cin >> a;
    cout << "Upper limit: ";
    cin >> b;*/

    //For Debugging
    //cout << *(function_x<double>(ex_n));


    bool quit = false;
    SDL_Event event;

    //Define images
    SDL_Surface* mainScreen = NULL;
    SDL_Surface* dot = NULL;
    SDL_Surface* ydot = NULL;
    SDL_Surface* rdot = NULL;
    SDL_Surface* cpoint = NULL;
    SDL_Surface* ipoint = NULL;
    SDL_Surface* Legend = NULL;
    SDL_Surface* x_axis = NULL;
    SDL_Surface* y_axis = NULL;
    SDL_Surface* Origin = NULL;
    SDL_Surface* x_arrow = NULL;
    SDL_Surface* y_arrow = NULL;
    SDL_Surface* x_arrow1 = NULL;
    SDL_Surface* y_arrow1 = NULL;
    SDL_Surface* x = NULL;
    SDL_Surface* y = NULL;
    SDL_Surface* _1 = NULL;
    SDL_Surface* _2 = NULL;
    SDL_Surface* _3 = NULL;
    SDL_Surface* _4 = NULL;
    SDL_Surface* _5 = NULL;
    SDL_Surface* __1 = NULL;
    SDL_Surface* __2 = NULL;
    SDL_Surface* __3 = NULL;
    SDL_Surface* __4 = NULL;
    SDL_Surface* __5 = NULL;
    SDL_Surface* iitb = NULL;


    //Start SDL
    SDL_Init (SDL_INIT_EVERYTHING);


    //Name on titlebar
    SDL_WM_SetCaption("Graph of y = f(x)",NULL);


    //Set Up Screen
    mainScreen = SDL_SetVideoMode(600,600,32,SDL_SWSURFACE);


    //add images
    dot = SDL_LoadBMP("dot.bmp");
    ydot = SDL_LoadBMP("ydot.bmp");
    rdot = SDL_LoadBMP("rdot.bmp");
    cpoint = SDL_LoadBMP("cpoint.bmp");
    ipoint = SDL_LoadBMP("ipoint.bmp");
    Legend = SDL_LoadBMP("Legend.bmp");
    x_axis = SDL_LoadBMP("x_axis.bmp");
    y_axis = SDL_LoadBMP("y_axis.bmp");
    Origin = SDL_LoadBMP("Origin.bmp");
    x_arrow = SDL_LoadBMP("x_arrow.bmp");
    y_arrow = SDL_LoadBMP("y_arrow.bmp");
    x_arrow1 = SDL_LoadBMP("x_arrow1.bmp");
    y_arrow1 = SDL_LoadBMP("y_arrow1.bmp");
    x = SDL_LoadBMP("x.bmp");
    y = SDL_LoadBMP("y.bmp");
    _1 = SDL_LoadBMP("_1.bmp");
    _2 = SDL_LoadBMP("_2.bmp");
    _3 = SDL_LoadBMP("_3.bmp");
    _4 = SDL_LoadBMP("_4.bmp");
    _5 = SDL_LoadBMP("_5.bmp");
    __1 = SDL_LoadBMP("__1.bmp");
    __2 = SDL_LoadBMP("__2.bmp");
    __3 = SDL_LoadBMP("__3.bmp");
    __4 = SDL_LoadBMP("__4.bmp");
    __5 = SDL_LoadBMP("__5.bmp");
    iitb = SDL_LoadBMP("iitb.bmp");



    cout << "The approximate roots of f(x) in the range (-6,6) are: " << endl;
    cout << "(Roots are accurate for well behaved continuous functions)" << endl;



    //Code for outputting roots of f(x) in the range (-6,6)
    for (int i = 0; i < 12000; i++)
   {
       if (p[i] == 0)
       {
           cout << -6+0.001*i+0.001 << endl;
       }

       if ((((p[i+1])*(p[i])) < 0)&&(abs((p[i+1])*(p[i])) < 100))
       {
          cout << -6+0.001*i+0.001 << endl;
       }
   }


    //Applying image to screen
    apply_surface(500,0,Legend,mainScreen);
    apply_surface(0,300,x_axis,mainScreen);
    apply_surface(300,0,y_axis,mainScreen);
    apply_surface(290,302,Origin,mainScreen);
    apply_surface(590,295,x_arrow,mainScreen);
    apply_surface(295,0,y_arrow,mainScreen);
    apply_surface(0,295,x_arrow1,mainScreen);
    apply_surface(295,590,y_arrow1,mainScreen);
    apply_surface(580,320,x,mainScreen);
    apply_surface(258,0,y,mainScreen);
    apply_surface(347,302,_1,mainScreen);
    apply_surface(404,302,_2,mainScreen);
    apply_surface(461,302,_3,mainScreen);
    apply_surface(518,302,_4,mainScreen);
    apply_surface(575,302,_5,mainScreen);
    apply_surface(233,302,__1,mainScreen);
    apply_surface(176,302,__2,mainScreen);
    apply_surface(119,302,__3,mainScreen);
    apply_surface(62,302,__4,mainScreen);
    apply_surface(5,302,__5,mainScreen);
    apply_surface(278,233,_1,mainScreen);
    apply_surface(278,176,_2,mainScreen);
    apply_surface(278,119,_3,mainScreen);
    apply_surface(278,62,_4,mainScreen);
    apply_surface(278,5,_5,mainScreen);
    apply_surface(278,347,__1,mainScreen);
    apply_surface(278,404,__2,mainScreen);
    apply_surface(278,461,__3,mainScreen);
    apply_surface(278,518,__4,mainScreen);
    apply_surface(278,575,__5,mainScreen);
    apply_surface(0,500,iitb,mainScreen);



     //Code for plotting f(x)
     for (int j = 0; j < 12001; j++)
     {
         apply_surface(((-6+0.001*j)*57+300),300-(p[j])*57,dot,mainScreen);
     }



     //Code for plotting the differential of f(x)
     if (diff == "Yes")
     {
         for (int j = 0; j < 12001; j++)
        {
            apply_surface(((-6+0.001*j)*57+300),300-((p[j+1]-p[j])*1000)*57,ydot,mainScreen);
        }
     }



     //Code for plotting definite integral of f(x)
     if (intl == "Yes")
     {
         for (int j = 0; j < 12001; j++)
        {
            integral_x = integral_x + (0.001)*((p[j+1] + p[j])/2);
            apply_surface(((-6+0.001*j)*57+300),300-((integral_x)*57),rdot,mainScreen);
            //Debugging
            //cout << integral_x << endl;
        }
     }



     //Code for plotting critical points of f(x) in the range (-6,6)
     for (int j = 0; j < 12000; j++)
   {
       if (((p[j+1]-p[j])*1000) == 0)
       {
           apply_surface(((-6+0.001*j)*57+300-10),300-10-(p[j])*57,cpoint,mainScreen);
       }

       if (((((p[j+2]-p[j+1])*1000)*((p[j+1]-p[j])*1000)) < 0)&&(abs(((p[j+2]-p[j+1])*1000)*((p[j+1]-p[j])*1000)) < 100))
       {
          apply_surface(((-6+0.001*j)*57+300-10),300-10-(p[j])*57,cpoint,mainScreen);
       }
   }


   //Code for plotting inflexion points
   for (int j = 0; j < 12000; j++)
   {
       if (((((p[j+2]-p[j+1])*1000)-((p[j+1]-p[j])*1000))*1000) == 0)
       {
           apply_surface(((-6+0.001*j)*57+300-10),300-10-(p[j])*57,ipoint,mainScreen);
           break;
       }

       if (((((((p[j+3]-p[j+2])*1000)-((p[j+2]-p[j+1])*1000))*1000)*((((p[j+2]-p[j+1])*1000)-((p[j+1]-p[j])*1000))*1000)) < 0)
           &&(abs(((((p[j+3]-p[j+2])*1000)-((p[j+2]-p[j+1])*1000))*1000)*((((p[j+2]-p[j+1])*1000)-((p[j+1]-p[j])*1000))*1000)) < 100))
       {
          apply_surface(((-6+0.001*j)*57+300-10),300-10-(p[j])*57,ipoint,mainScreen);
       }
   }



     // Debugging
     /*for (int j = 0; j < 20000; j++)
     {
         cout << ((p[j+1]-p[j])*1000) << endl;
     }*/

    //(function_x<double>(ex_n));



    //Update Screen
    SDL_Flip(mainScreen);



    //While the user hasn't quit
    while( quit == false )
    {
        //While there's an event to handle
        while( SDL_PollEvent( &event ) )
        {
            //If the user has Xed out the window
            if( event.type == SDL_QUIT )
            {
                //Quit the program
                quit = true;
            }
        }
    }



    //Free image
    SDL_FreeSurface(dot);
    SDL_FreeSurface(ydot);
    SDL_FreeSurface(rdot);
    SDL_FreeSurface(cpoint);
    SDL_FreeSurface(ipoint);
    SDL_FreeSurface(Legend);
    SDL_FreeSurface(x_axis);
    SDL_FreeSurface(y_axis);
    SDL_FreeSurface(Origin);
    SDL_FreeSurface(x_arrow);
    SDL_FreeSurface(y_arrow);
    SDL_FreeSurface(x_arrow1);
    SDL_FreeSurface(y_arrow1);
    SDL_FreeSurface(x);
    SDL_FreeSurface(y);
    SDL_FreeSurface(_1);
    SDL_FreeSurface(_2);
    SDL_FreeSurface(_3);
    SDL_FreeSurface(_4);
    SDL_FreeSurface(_5);
    SDL_FreeSurface(__1);
    SDL_FreeSurface(__2);
    SDL_FreeSurface(__3);
    SDL_FreeSurface(__4);
    SDL_FreeSurface(__5);
    SDL_FreeSurface(iitb);



    //Quit SDL
    SDL_Quit();


    //Deallocating array
    delete[] ptr;


    return 0;


}
