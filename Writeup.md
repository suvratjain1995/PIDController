
### Writeup ###

PID Controller :- 

PID controller is a control loop feedback mechanism used in controlling systems that has the property of generating control ie actions based on the feedback from the system.

*PID full form* :- Proportional,Intergral,Derivative Controller 

**Proportional Term** :- The proportional term produces an output value that is proportional to the current error value. The Proportional response is adjucted by multiplying with a constant Kp. 

    Pout=Kp*Error

Higher Proportional Gain can result in highly unstable system, and lower proportional gain can result in system that could not reach the desired control over time.Hence we would be tuning the parameter to make sure the system is not highly unstable.

**Integral Term** :- The purpose of the intergral system is to accelarate the movement toward the set point and to do that it it accumulates the errors and then it is multiplied with Ki(integral term).
It help us in situation where our system has bias.


    Iout=Ki*Sum(Error(i))

**Derivative term** :- Helps us smooth the transition toward the set point.Derivative of the process error is calculated by determining the slope of the error over time and multiplying this rate of change by the derivative gain Kd. 

    Dout=Kd*(Error(i)-Error(i-1))


### Parameter Chosen ###

Kp=0.2
Ki=0.00004
Kd=4.5

These parameter were chosen by manual tuning.
