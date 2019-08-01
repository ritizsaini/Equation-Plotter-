# Equation-Plotter-

- equation plotter a software that plots the graph of y = f(x) function which is inputted by the user on the console screen. The software will also provide the user data about the critical points, inflection points, roots of the function and it will also provide the user the graphs of the function’s integral & differential on his/her will. If the user will be able to see them together.


### Algorithm:  
-for the input fuction, I assigned a value of x from range (say -10 to 10) and then find the corresponding values of y and store it. So given f(x,y)=0, we get an equation F(y)=0, and then I find the roots using NewtonRaphson Method. In this method, we take an arbitrary value x near the actual root. Then a tangent is drawn through that corresponding f(x). Where the tangent line touches the x-axis, that is our new x. So as we repeat this algorithm, we get closer and closer to the actual value of root. 

### Assumptions and limitations:
-  potting values of y at a discrete values of x where x is taken small enough so that graph can be plotted with precision. So we shoudl assume it to be smooth
-  This program will calculate slope which is quite accurate as we are taking our DELTA x of the order 0.001 which is too small.(for the differential graph) 
- Points of intersection of various curves cannot be determined
- SDL was used to mark the points with bitmap images
- The disadvantage of this plotter is that I restricted the range of the function (e.g. say from -6 to +6). User inputted range was coded, but the compiler would crash upon inputting large values








![graph](https://user-images.githubusercontent.com/43687979/62306774-131dd500-b4a0-11e9-8389-7dc8a3aa08a3.jpg)


![graph2](https://user-images.githubusercontent.com/43687979/62306920-5a0bca80-b4a0-11e9-9d7f-e4957f72dfa0.jpg)

![graph3](https://user-images.githubusercontent.com/43687979/62306963-6a23aa00-b4a0-11e9-9310-b630b184976d.jpg)

### Refrence
- http://warp.povusers.org/FunctionParser/ 
- http://en.wikipedia.org/wiki/Taylor_series 
- http://en.wikipedia.org/wiki/Newton%27s_method 
- http://www.wolframalpha.com/ 
- http://partow.net/programming/exprtk/ 
- https://www.libsdl.org/download-1.2.php 
- http://www.cplusplus.com/forum/beginner/136094/ 
- http://stackoverflow.com/questions/tagged/forum 

